﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/S3CrtErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/s3-crt/ClientConfiguration.h>
#include <aws/s3-crt/S3CrtErrorMarshaller.h>
#include <aws/s3/s3_client.h>
#include <aws/crt/auth/Sigv4Signing.h>
#include <aws/crt/http/HttpRequestResponse.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/DNS.h>
#include <aws/s3-crt/model/AbortMultipartUploadResult.h>
#include <aws/s3-crt/model/CompleteMultipartUploadResult.h>
#include <aws/s3-crt/model/CopyObjectResult.h>
#include <aws/s3-crt/model/CreateBucketResult.h>
#include <aws/s3-crt/model/CreateMultipartUploadResult.h>
#include <aws/s3-crt/model/DeleteObjectResult.h>
#include <aws/s3-crt/model/DeleteObjectTaggingResult.h>
#include <aws/s3-crt/model/DeleteObjectsResult.h>
#include <aws/s3-crt/model/GetBucketAccelerateConfigurationResult.h>
#include <aws/s3-crt/model/GetBucketAclResult.h>
#include <aws/s3-crt/model/GetBucketAnalyticsConfigurationResult.h>
#include <aws/s3-crt/model/GetBucketCorsResult.h>
#include <aws/s3-crt/model/GetBucketEncryptionResult.h>
#include <aws/s3-crt/model/GetBucketIntelligentTieringConfigurationResult.h>
#include <aws/s3-crt/model/GetBucketInventoryConfigurationResult.h>
#include <aws/s3-crt/model/GetBucketLifecycleConfigurationResult.h>
#include <aws/s3-crt/model/GetBucketLocationResult.h>
#include <aws/s3-crt/model/GetBucketLoggingResult.h>
#include <aws/s3-crt/model/GetBucketMetricsConfigurationResult.h>
#include <aws/s3-crt/model/GetBucketNotificationConfigurationResult.h>
#include <aws/s3-crt/model/GetBucketOwnershipControlsResult.h>
#include <aws/s3-crt/model/GetBucketPolicyResult.h>
#include <aws/s3-crt/model/GetBucketPolicyStatusResult.h>
#include <aws/s3-crt/model/GetBucketReplicationResult.h>
#include <aws/s3-crt/model/GetBucketRequestPaymentResult.h>
#include <aws/s3-crt/model/GetBucketTaggingResult.h>
#include <aws/s3-crt/model/GetBucketVersioningResult.h>
#include <aws/s3-crt/model/GetBucketWebsiteResult.h>
#include <aws/s3-crt/model/GetObjectResult.h>
#include <aws/s3-crt/model/GetObjectAclResult.h>
#include <aws/s3-crt/model/GetObjectLegalHoldResult.h>
#include <aws/s3-crt/model/GetObjectLockConfigurationResult.h>
#include <aws/s3-crt/model/GetObjectRetentionResult.h>
#include <aws/s3-crt/model/GetObjectTaggingResult.h>
#include <aws/s3-crt/model/GetObjectTorrentResult.h>
#include <aws/s3-crt/model/GetPublicAccessBlockResult.h>
#include <aws/s3-crt/model/HeadObjectResult.h>
#include <aws/s3-crt/model/ListBucketAnalyticsConfigurationsResult.h>
#include <aws/s3-crt/model/ListBucketIntelligentTieringConfigurationsResult.h>
#include <aws/s3-crt/model/ListBucketInventoryConfigurationsResult.h>
#include <aws/s3-crt/model/ListBucketMetricsConfigurationsResult.h>
#include <aws/s3-crt/model/ListBucketsResult.h>
#include <aws/s3-crt/model/ListMultipartUploadsResult.h>
#include <aws/s3-crt/model/ListObjectVersionsResult.h>
#include <aws/s3-crt/model/ListObjectsResult.h>
#include <aws/s3-crt/model/ListObjectsV2Result.h>
#include <aws/s3-crt/model/ListPartsResult.h>
#include <aws/s3-crt/model/PutObjectResult.h>
#include <aws/s3-crt/model/PutObjectAclResult.h>
#include <aws/s3-crt/model/PutObjectLegalHoldResult.h>
#include <aws/s3-crt/model/PutObjectLockConfigurationResult.h>
#include <aws/s3-crt/model/PutObjectRetentionResult.h>
#include <aws/s3-crt/model/PutObjectTaggingResult.h>
#include <aws/s3-crt/model/RestoreObjectResult.h>
#include <aws/s3-crt/model/UploadPartResult.h>
#include <aws/s3-crt/model/UploadPartCopyResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

struct aws_s3_client;
// TODO: temporary fix for naming conflicts on Windows.
#ifdef _WIN32
#ifdef GetObject
#undef GetObject
#endif
#endif
namespace Aws
{
  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading

    namespace Xml
    {
      class XmlDocument;
    } // namespace Xml
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace S3Crt
  {
    namespace Model
    {
        class AbortMultipartUploadRequest;
        class CompleteMultipartUploadRequest;
        class CopyObjectRequest;
        class CreateBucketRequest;
        class CreateMultipartUploadRequest;
        class DeleteBucketRequest;
        class DeleteBucketAnalyticsConfigurationRequest;
        class DeleteBucketCorsRequest;
        class DeleteBucketEncryptionRequest;
        class DeleteBucketIntelligentTieringConfigurationRequest;
        class DeleteBucketInventoryConfigurationRequest;
        class DeleteBucketLifecycleRequest;
        class DeleteBucketMetricsConfigurationRequest;
        class DeleteBucketOwnershipControlsRequest;
        class DeleteBucketPolicyRequest;
        class DeleteBucketReplicationRequest;
        class DeleteBucketTaggingRequest;
        class DeleteBucketWebsiteRequest;
        class DeleteObjectRequest;
        class DeleteObjectTaggingRequest;
        class DeleteObjectsRequest;
        class DeletePublicAccessBlockRequest;
        class GetBucketAccelerateConfigurationRequest;
        class GetBucketAclRequest;
        class GetBucketAnalyticsConfigurationRequest;
        class GetBucketCorsRequest;
        class GetBucketEncryptionRequest;
        class GetBucketIntelligentTieringConfigurationRequest;
        class GetBucketInventoryConfigurationRequest;
        class GetBucketLifecycleConfigurationRequest;
        class GetBucketLocationRequest;
        class GetBucketLoggingRequest;
        class GetBucketMetricsConfigurationRequest;
        class GetBucketNotificationConfigurationRequest;
        class GetBucketOwnershipControlsRequest;
        class GetBucketPolicyRequest;
        class GetBucketPolicyStatusRequest;
        class GetBucketReplicationRequest;
        class GetBucketRequestPaymentRequest;
        class GetBucketTaggingRequest;
        class GetBucketVersioningRequest;
        class GetBucketWebsiteRequest;
        class GetObjectRequest;
        class GetObjectAclRequest;
        class GetObjectLegalHoldRequest;
        class GetObjectLockConfigurationRequest;
        class GetObjectRetentionRequest;
        class GetObjectTaggingRequest;
        class GetObjectTorrentRequest;
        class GetPublicAccessBlockRequest;
        class HeadBucketRequest;
        class HeadObjectRequest;
        class ListBucketAnalyticsConfigurationsRequest;
        class ListBucketIntelligentTieringConfigurationsRequest;
        class ListBucketInventoryConfigurationsRequest;
        class ListBucketMetricsConfigurationsRequest;
        class ListMultipartUploadsRequest;
        class ListObjectVersionsRequest;
        class ListObjectsRequest;
        class ListObjectsV2Request;
        class ListPartsRequest;
        class PutBucketAccelerateConfigurationRequest;
        class PutBucketAclRequest;
        class PutBucketAnalyticsConfigurationRequest;
        class PutBucketCorsRequest;
        class PutBucketEncryptionRequest;
        class PutBucketIntelligentTieringConfigurationRequest;
        class PutBucketInventoryConfigurationRequest;
        class PutBucketLifecycleConfigurationRequest;
        class PutBucketLoggingRequest;
        class PutBucketMetricsConfigurationRequest;
        class PutBucketNotificationConfigurationRequest;
        class PutBucketOwnershipControlsRequest;
        class PutBucketPolicyRequest;
        class PutBucketReplicationRequest;
        class PutBucketRequestPaymentRequest;
        class PutBucketTaggingRequest;
        class PutBucketVersioningRequest;
        class PutBucketWebsiteRequest;
        class PutObjectRequest;
        class PutObjectAclRequest;
        class PutObjectLegalHoldRequest;
        class PutObjectLockConfigurationRequest;
        class PutObjectRetentionRequest;
        class PutObjectTaggingRequest;
        class PutPublicAccessBlockRequest;
        class RestoreObjectRequest;
        class SelectObjectContentRequest;
        class UploadPartRequest;
        class UploadPartCopyRequest;
        class WriteGetObjectResponseRequest;

        typedef Aws::Utils::Outcome<AbortMultipartUploadResult, S3CrtError> AbortMultipartUploadOutcome;
        typedef Aws::Utils::Outcome<CompleteMultipartUploadResult, S3CrtError> CompleteMultipartUploadOutcome;
        typedef Aws::Utils::Outcome<CopyObjectResult, S3CrtError> CopyObjectOutcome;
        typedef Aws::Utils::Outcome<CreateBucketResult, S3CrtError> CreateBucketOutcome;
        typedef Aws::Utils::Outcome<CreateMultipartUploadResult, S3CrtError> CreateMultipartUploadOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketAnalyticsConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketCorsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketEncryptionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketIntelligentTieringConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketInventoryConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketLifecycleOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketMetricsConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketOwnershipControlsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketReplicationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketTaggingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeleteBucketWebsiteOutcome;
        typedef Aws::Utils::Outcome<DeleteObjectResult, S3CrtError> DeleteObjectOutcome;
        typedef Aws::Utils::Outcome<DeleteObjectTaggingResult, S3CrtError> DeleteObjectTaggingOutcome;
        typedef Aws::Utils::Outcome<DeleteObjectsResult, S3CrtError> DeleteObjectsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> DeletePublicAccessBlockOutcome;
        typedef Aws::Utils::Outcome<GetBucketAccelerateConfigurationResult, S3CrtError> GetBucketAccelerateConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketAclResult, S3CrtError> GetBucketAclOutcome;
        typedef Aws::Utils::Outcome<GetBucketAnalyticsConfigurationResult, S3CrtError> GetBucketAnalyticsConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketCorsResult, S3CrtError> GetBucketCorsOutcome;
        typedef Aws::Utils::Outcome<GetBucketEncryptionResult, S3CrtError> GetBucketEncryptionOutcome;
        typedef Aws::Utils::Outcome<GetBucketIntelligentTieringConfigurationResult, S3CrtError> GetBucketIntelligentTieringConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketInventoryConfigurationResult, S3CrtError> GetBucketInventoryConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketLifecycleConfigurationResult, S3CrtError> GetBucketLifecycleConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketLocationResult, S3CrtError> GetBucketLocationOutcome;
        typedef Aws::Utils::Outcome<GetBucketLoggingResult, S3CrtError> GetBucketLoggingOutcome;
        typedef Aws::Utils::Outcome<GetBucketMetricsConfigurationResult, S3CrtError> GetBucketMetricsConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketNotificationConfigurationResult, S3CrtError> GetBucketNotificationConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetBucketOwnershipControlsResult, S3CrtError> GetBucketOwnershipControlsOutcome;
        typedef Aws::Utils::Outcome<GetBucketPolicyResult, S3CrtError> GetBucketPolicyOutcome;
        typedef Aws::Utils::Outcome<GetBucketPolicyStatusResult, S3CrtError> GetBucketPolicyStatusOutcome;
        typedef Aws::Utils::Outcome<GetBucketReplicationResult, S3CrtError> GetBucketReplicationOutcome;
        typedef Aws::Utils::Outcome<GetBucketRequestPaymentResult, S3CrtError> GetBucketRequestPaymentOutcome;
        typedef Aws::Utils::Outcome<GetBucketTaggingResult, S3CrtError> GetBucketTaggingOutcome;
        typedef Aws::Utils::Outcome<GetBucketVersioningResult, S3CrtError> GetBucketVersioningOutcome;
        typedef Aws::Utils::Outcome<GetBucketWebsiteResult, S3CrtError> GetBucketWebsiteOutcome;
        typedef Aws::Utils::Outcome<GetObjectResult, S3CrtError> GetObjectOutcome;
        typedef Aws::Utils::Outcome<GetObjectAclResult, S3CrtError> GetObjectAclOutcome;
        typedef Aws::Utils::Outcome<GetObjectLegalHoldResult, S3CrtError> GetObjectLegalHoldOutcome;
        typedef Aws::Utils::Outcome<GetObjectLockConfigurationResult, S3CrtError> GetObjectLockConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetObjectRetentionResult, S3CrtError> GetObjectRetentionOutcome;
        typedef Aws::Utils::Outcome<GetObjectTaggingResult, S3CrtError> GetObjectTaggingOutcome;
        typedef Aws::Utils::Outcome<GetObjectTorrentResult, S3CrtError> GetObjectTorrentOutcome;
        typedef Aws::Utils::Outcome<GetPublicAccessBlockResult, S3CrtError> GetPublicAccessBlockOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> HeadBucketOutcome;
        typedef Aws::Utils::Outcome<HeadObjectResult, S3CrtError> HeadObjectOutcome;
        typedef Aws::Utils::Outcome<ListBucketAnalyticsConfigurationsResult, S3CrtError> ListBucketAnalyticsConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListBucketIntelligentTieringConfigurationsResult, S3CrtError> ListBucketIntelligentTieringConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListBucketInventoryConfigurationsResult, S3CrtError> ListBucketInventoryConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListBucketMetricsConfigurationsResult, S3CrtError> ListBucketMetricsConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListBucketsResult, S3CrtError> ListBucketsOutcome;
        typedef Aws::Utils::Outcome<ListMultipartUploadsResult, S3CrtError> ListMultipartUploadsOutcome;
        typedef Aws::Utils::Outcome<ListObjectVersionsResult, S3CrtError> ListObjectVersionsOutcome;
        typedef Aws::Utils::Outcome<ListObjectsResult, S3CrtError> ListObjectsOutcome;
        typedef Aws::Utils::Outcome<ListObjectsV2Result, S3CrtError> ListObjectsV2Outcome;
        typedef Aws::Utils::Outcome<ListPartsResult, S3CrtError> ListPartsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketAccelerateConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketAclOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketAnalyticsConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketCorsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketEncryptionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketIntelligentTieringConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketInventoryConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketLifecycleConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketLoggingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketMetricsConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketNotificationConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketOwnershipControlsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketReplicationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketRequestPaymentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketTaggingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketVersioningOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutBucketWebsiteOutcome;
        typedef Aws::Utils::Outcome<PutObjectResult, S3CrtError> PutObjectOutcome;
        typedef Aws::Utils::Outcome<PutObjectAclResult, S3CrtError> PutObjectAclOutcome;
        typedef Aws::Utils::Outcome<PutObjectLegalHoldResult, S3CrtError> PutObjectLegalHoldOutcome;
        typedef Aws::Utils::Outcome<PutObjectLockConfigurationResult, S3CrtError> PutObjectLockConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutObjectRetentionResult, S3CrtError> PutObjectRetentionOutcome;
        typedef Aws::Utils::Outcome<PutObjectTaggingResult, S3CrtError> PutObjectTaggingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> PutPublicAccessBlockOutcome;
        typedef Aws::Utils::Outcome<RestoreObjectResult, S3CrtError> RestoreObjectOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> SelectObjectContentOutcome;
        typedef Aws::Utils::Outcome<UploadPartResult, S3CrtError> UploadPartOutcome;
        typedef Aws::Utils::Outcome<UploadPartCopyResult, S3CrtError> UploadPartCopyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, S3CrtError> WriteGetObjectResponseOutcome;

        typedef std::future<AbortMultipartUploadOutcome> AbortMultipartUploadOutcomeCallable;
        typedef std::future<CompleteMultipartUploadOutcome> CompleteMultipartUploadOutcomeCallable;
        typedef std::future<CopyObjectOutcome> CopyObjectOutcomeCallable;
        typedef std::future<CreateBucketOutcome> CreateBucketOutcomeCallable;
        typedef std::future<CreateMultipartUploadOutcome> CreateMultipartUploadOutcomeCallable;
        typedef std::future<DeleteBucketOutcome> DeleteBucketOutcomeCallable;
        typedef std::future<DeleteBucketAnalyticsConfigurationOutcome> DeleteBucketAnalyticsConfigurationOutcomeCallable;
        typedef std::future<DeleteBucketCorsOutcome> DeleteBucketCorsOutcomeCallable;
        typedef std::future<DeleteBucketEncryptionOutcome> DeleteBucketEncryptionOutcomeCallable;
        typedef std::future<DeleteBucketIntelligentTieringConfigurationOutcome> DeleteBucketIntelligentTieringConfigurationOutcomeCallable;
        typedef std::future<DeleteBucketInventoryConfigurationOutcome> DeleteBucketInventoryConfigurationOutcomeCallable;
        typedef std::future<DeleteBucketLifecycleOutcome> DeleteBucketLifecycleOutcomeCallable;
        typedef std::future<DeleteBucketMetricsConfigurationOutcome> DeleteBucketMetricsConfigurationOutcomeCallable;
        typedef std::future<DeleteBucketOwnershipControlsOutcome> DeleteBucketOwnershipControlsOutcomeCallable;
        typedef std::future<DeleteBucketPolicyOutcome> DeleteBucketPolicyOutcomeCallable;
        typedef std::future<DeleteBucketReplicationOutcome> DeleteBucketReplicationOutcomeCallable;
        typedef std::future<DeleteBucketTaggingOutcome> DeleteBucketTaggingOutcomeCallable;
        typedef std::future<DeleteBucketWebsiteOutcome> DeleteBucketWebsiteOutcomeCallable;
        typedef std::future<DeleteObjectOutcome> DeleteObjectOutcomeCallable;
        typedef std::future<DeleteObjectTaggingOutcome> DeleteObjectTaggingOutcomeCallable;
        typedef std::future<DeleteObjectsOutcome> DeleteObjectsOutcomeCallable;
        typedef std::future<DeletePublicAccessBlockOutcome> DeletePublicAccessBlockOutcomeCallable;
        typedef std::future<GetBucketAccelerateConfigurationOutcome> GetBucketAccelerateConfigurationOutcomeCallable;
        typedef std::future<GetBucketAclOutcome> GetBucketAclOutcomeCallable;
        typedef std::future<GetBucketAnalyticsConfigurationOutcome> GetBucketAnalyticsConfigurationOutcomeCallable;
        typedef std::future<GetBucketCorsOutcome> GetBucketCorsOutcomeCallable;
        typedef std::future<GetBucketEncryptionOutcome> GetBucketEncryptionOutcomeCallable;
        typedef std::future<GetBucketIntelligentTieringConfigurationOutcome> GetBucketIntelligentTieringConfigurationOutcomeCallable;
        typedef std::future<GetBucketInventoryConfigurationOutcome> GetBucketInventoryConfigurationOutcomeCallable;
        typedef std::future<GetBucketLifecycleConfigurationOutcome> GetBucketLifecycleConfigurationOutcomeCallable;
        typedef std::future<GetBucketLocationOutcome> GetBucketLocationOutcomeCallable;
        typedef std::future<GetBucketLoggingOutcome> GetBucketLoggingOutcomeCallable;
        typedef std::future<GetBucketMetricsConfigurationOutcome> GetBucketMetricsConfigurationOutcomeCallable;
        typedef std::future<GetBucketNotificationConfigurationOutcome> GetBucketNotificationConfigurationOutcomeCallable;
        typedef std::future<GetBucketOwnershipControlsOutcome> GetBucketOwnershipControlsOutcomeCallable;
        typedef std::future<GetBucketPolicyOutcome> GetBucketPolicyOutcomeCallable;
        typedef std::future<GetBucketPolicyStatusOutcome> GetBucketPolicyStatusOutcomeCallable;
        typedef std::future<GetBucketReplicationOutcome> GetBucketReplicationOutcomeCallable;
        typedef std::future<GetBucketRequestPaymentOutcome> GetBucketRequestPaymentOutcomeCallable;
        typedef std::future<GetBucketTaggingOutcome> GetBucketTaggingOutcomeCallable;
        typedef std::future<GetBucketVersioningOutcome> GetBucketVersioningOutcomeCallable;
        typedef std::future<GetBucketWebsiteOutcome> GetBucketWebsiteOutcomeCallable;
        typedef std::future<GetObjectAclOutcome> GetObjectAclOutcomeCallable;
        typedef std::future<GetObjectLegalHoldOutcome> GetObjectLegalHoldOutcomeCallable;
        typedef std::future<GetObjectLockConfigurationOutcome> GetObjectLockConfigurationOutcomeCallable;
        typedef std::future<GetObjectRetentionOutcome> GetObjectRetentionOutcomeCallable;
        typedef std::future<GetObjectTaggingOutcome> GetObjectTaggingOutcomeCallable;
        typedef std::future<GetObjectTorrentOutcome> GetObjectTorrentOutcomeCallable;
        typedef std::future<GetPublicAccessBlockOutcome> GetPublicAccessBlockOutcomeCallable;
        typedef std::future<HeadBucketOutcome> HeadBucketOutcomeCallable;
        typedef std::future<HeadObjectOutcome> HeadObjectOutcomeCallable;
        typedef std::future<ListBucketAnalyticsConfigurationsOutcome> ListBucketAnalyticsConfigurationsOutcomeCallable;
        typedef std::future<ListBucketIntelligentTieringConfigurationsOutcome> ListBucketIntelligentTieringConfigurationsOutcomeCallable;
        typedef std::future<ListBucketInventoryConfigurationsOutcome> ListBucketInventoryConfigurationsOutcomeCallable;
        typedef std::future<ListBucketMetricsConfigurationsOutcome> ListBucketMetricsConfigurationsOutcomeCallable;
        typedef std::future<ListBucketsOutcome> ListBucketsOutcomeCallable;
        typedef std::future<ListMultipartUploadsOutcome> ListMultipartUploadsOutcomeCallable;
        typedef std::future<ListObjectVersionsOutcome> ListObjectVersionsOutcomeCallable;
        typedef std::future<ListObjectsOutcome> ListObjectsOutcomeCallable;
        typedef std::future<ListObjectsV2Outcome> ListObjectsV2OutcomeCallable;
        typedef std::future<ListPartsOutcome> ListPartsOutcomeCallable;
        typedef std::future<PutBucketAccelerateConfigurationOutcome> PutBucketAccelerateConfigurationOutcomeCallable;
        typedef std::future<PutBucketAclOutcome> PutBucketAclOutcomeCallable;
        typedef std::future<PutBucketAnalyticsConfigurationOutcome> PutBucketAnalyticsConfigurationOutcomeCallable;
        typedef std::future<PutBucketCorsOutcome> PutBucketCorsOutcomeCallable;
        typedef std::future<PutBucketEncryptionOutcome> PutBucketEncryptionOutcomeCallable;
        typedef std::future<PutBucketIntelligentTieringConfigurationOutcome> PutBucketIntelligentTieringConfigurationOutcomeCallable;
        typedef std::future<PutBucketInventoryConfigurationOutcome> PutBucketInventoryConfigurationOutcomeCallable;
        typedef std::future<PutBucketLifecycleConfigurationOutcome> PutBucketLifecycleConfigurationOutcomeCallable;
        typedef std::future<PutBucketLoggingOutcome> PutBucketLoggingOutcomeCallable;
        typedef std::future<PutBucketMetricsConfigurationOutcome> PutBucketMetricsConfigurationOutcomeCallable;
        typedef std::future<PutBucketNotificationConfigurationOutcome> PutBucketNotificationConfigurationOutcomeCallable;
        typedef std::future<PutBucketOwnershipControlsOutcome> PutBucketOwnershipControlsOutcomeCallable;
        typedef std::future<PutBucketPolicyOutcome> PutBucketPolicyOutcomeCallable;
        typedef std::future<PutBucketReplicationOutcome> PutBucketReplicationOutcomeCallable;
        typedef std::future<PutBucketRequestPaymentOutcome> PutBucketRequestPaymentOutcomeCallable;
        typedef std::future<PutBucketTaggingOutcome> PutBucketTaggingOutcomeCallable;
        typedef std::future<PutBucketVersioningOutcome> PutBucketVersioningOutcomeCallable;
        typedef std::future<PutBucketWebsiteOutcome> PutBucketWebsiteOutcomeCallable;
        typedef std::future<PutObjectAclOutcome> PutObjectAclOutcomeCallable;
        typedef std::future<PutObjectLegalHoldOutcome> PutObjectLegalHoldOutcomeCallable;
        typedef std::future<PutObjectLockConfigurationOutcome> PutObjectLockConfigurationOutcomeCallable;
        typedef std::future<PutObjectRetentionOutcome> PutObjectRetentionOutcomeCallable;
        typedef std::future<PutObjectTaggingOutcome> PutObjectTaggingOutcomeCallable;
        typedef std::future<PutPublicAccessBlockOutcome> PutPublicAccessBlockOutcomeCallable;
        typedef std::future<RestoreObjectOutcome> RestoreObjectOutcomeCallable;
        typedef std::future<SelectObjectContentOutcome> SelectObjectContentOutcomeCallable;
        typedef std::future<UploadPartOutcome> UploadPartOutcomeCallable;
        typedef std::future<UploadPartCopyOutcome> UploadPartCopyOutcomeCallable;
        typedef std::future<WriteGetObjectResponseOutcome> WriteGetObjectResponseOutcomeCallable;
    } // namespace Model

    namespace SSEHeaders
    {
        static const char SERVER_SIDE_ENCRYPTION[] = "x-amz-server-side-encryption";
        static const char SERVER_SIDE_ENCRYPTION_AWS_KMS_KEY_ID[] = "x-amz-server-side-encryption-aws-kms-key-id";
        static const char SERVER_SIDE_ENCRYPTION_CUSTOMER_ALGORITHM[] = "x-amz-server-side-encryption-customer-algorithm";
        static const char SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY[] = "x-amz-server-side-encryption-customer-key";
        static const char SERVER_SIDE_ENCRYPTION_CUSTOMER_KEY_MD5[] = "x-amz-server-side-encryption-customer-key-MD5";
    } // SS3Headers

    class S3CrtClient;

    typedef std::function<void(const S3CrtClient*, const Model::AbortMultipartUploadRequest&, const Model::AbortMultipartUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AbortMultipartUploadResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::CompleteMultipartUploadRequest&, const Model::CompleteMultipartUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CompleteMultipartUploadResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::CopyObjectRequest&, const Model::CopyObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyObjectResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::CreateBucketRequest&, const Model::CreateBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBucketResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::CreateMultipartUploadRequest&, const Model::CreateMultipartUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultipartUploadResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketRequest&, const Model::DeleteBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketAnalyticsConfigurationRequest&, const Model::DeleteBucketAnalyticsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketAnalyticsConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketCorsRequest&, const Model::DeleteBucketCorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketCorsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketEncryptionRequest&, const Model::DeleteBucketEncryptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketEncryptionResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketIntelligentTieringConfigurationRequest&, const Model::DeleteBucketIntelligentTieringConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketIntelligentTieringConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketInventoryConfigurationRequest&, const Model::DeleteBucketInventoryConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketInventoryConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketLifecycleRequest&, const Model::DeleteBucketLifecycleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketLifecycleResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketMetricsConfigurationRequest&, const Model::DeleteBucketMetricsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketMetricsConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketOwnershipControlsRequest&, const Model::DeleteBucketOwnershipControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketOwnershipControlsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketPolicyRequest&, const Model::DeleteBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketReplicationRequest&, const Model::DeleteBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketReplicationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketTaggingRequest&, const Model::DeleteBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteBucketWebsiteRequest&, const Model::DeleteBucketWebsiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketWebsiteResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteObjectRequest&, const Model::DeleteObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteObjectTaggingRequest&, const Model::DeleteObjectTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectTaggingResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeleteObjectsRequest&, const Model::DeleteObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::DeletePublicAccessBlockRequest&, const Model::DeletePublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketAccelerateConfigurationRequest&, const Model::GetBucketAccelerateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketAccelerateConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketAclRequest&, const Model::GetBucketAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketAclResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketAnalyticsConfigurationRequest&, const Model::GetBucketAnalyticsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketAnalyticsConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketCorsRequest&, const Model::GetBucketCorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketCorsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketEncryptionRequest&, const Model::GetBucketEncryptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketEncryptionResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketIntelligentTieringConfigurationRequest&, const Model::GetBucketIntelligentTieringConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketIntelligentTieringConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketInventoryConfigurationRequest&, const Model::GetBucketInventoryConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketInventoryConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketLifecycleConfigurationRequest&, const Model::GetBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketLocationRequest&, const Model::GetBucketLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketLocationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketLoggingRequest&, const Model::GetBucketLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketLoggingResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketMetricsConfigurationRequest&, const Model::GetBucketMetricsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketMetricsConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketNotificationConfigurationRequest&, const Model::GetBucketNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketOwnershipControlsRequest&, const Model::GetBucketOwnershipControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketOwnershipControlsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketPolicyRequest&, Model::GetBucketPolicyOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketPolicyStatusRequest&, const Model::GetBucketPolicyStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketPolicyStatusResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketReplicationRequest&, const Model::GetBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketReplicationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketRequestPaymentRequest&, const Model::GetBucketRequestPaymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketRequestPaymentResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketTaggingRequest&, const Model::GetBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketVersioningRequest&, const Model::GetBucketVersioningOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketVersioningResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetBucketWebsiteRequest&, const Model::GetBucketWebsiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketWebsiteResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetObjectRequest&, Model::GetObjectOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetObjectAclRequest&, const Model::GetObjectAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectAclResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetObjectLegalHoldRequest&, const Model::GetObjectLegalHoldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectLegalHoldResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetObjectLockConfigurationRequest&, const Model::GetObjectLockConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectLockConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetObjectRetentionRequest&, const Model::GetObjectRetentionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectRetentionResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetObjectTaggingRequest&, const Model::GetObjectTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectTaggingResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetObjectTorrentRequest&, Model::GetObjectTorrentOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectTorrentResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::GetPublicAccessBlockRequest&, const Model::GetPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::HeadBucketRequest&, const Model::HeadBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > HeadBucketResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::HeadObjectRequest&, const Model::HeadObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > HeadObjectResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListBucketAnalyticsConfigurationsRequest&, const Model::ListBucketAnalyticsConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBucketAnalyticsConfigurationsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListBucketIntelligentTieringConfigurationsRequest&, const Model::ListBucketIntelligentTieringConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBucketIntelligentTieringConfigurationsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListBucketInventoryConfigurationsRequest&, const Model::ListBucketInventoryConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBucketInventoryConfigurationsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListBucketMetricsConfigurationsRequest&, const Model::ListBucketMetricsConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBucketMetricsConfigurationsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListBucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBucketsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListMultipartUploadsRequest&, const Model::ListMultipartUploadsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultipartUploadsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListObjectVersionsRequest&, const Model::ListObjectVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectVersionsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListObjectsRequest&, const Model::ListObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListObjectsV2Request&, const Model::ListObjectsV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectsV2ResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::ListPartsRequest&, const Model::ListPartsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPartsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketAccelerateConfigurationRequest&, const Model::PutBucketAccelerateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketAccelerateConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketAclRequest&, const Model::PutBucketAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketAclResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketAnalyticsConfigurationRequest&, const Model::PutBucketAnalyticsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketAnalyticsConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketCorsRequest&, const Model::PutBucketCorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketCorsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketEncryptionRequest&, const Model::PutBucketEncryptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketEncryptionResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketIntelligentTieringConfigurationRequest&, const Model::PutBucketIntelligentTieringConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketIntelligentTieringConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketInventoryConfigurationRequest&, const Model::PutBucketInventoryConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketInventoryConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketLifecycleConfigurationRequest&, const Model::PutBucketLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketLoggingRequest&, const Model::PutBucketLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketLoggingResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketMetricsConfigurationRequest&, const Model::PutBucketMetricsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketMetricsConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketNotificationConfigurationRequest&, const Model::PutBucketNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketOwnershipControlsRequest&, const Model::PutBucketOwnershipControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketOwnershipControlsResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketPolicyRequest&, const Model::PutBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketPolicyResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketReplicationRequest&, const Model::PutBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketReplicationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketRequestPaymentRequest&, const Model::PutBucketRequestPaymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketRequestPaymentResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketTaggingRequest&, const Model::PutBucketTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketTaggingResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketVersioningRequest&, const Model::PutBucketVersioningOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketVersioningResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutBucketWebsiteRequest&, const Model::PutBucketWebsiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBucketWebsiteResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutObjectRequest&, const Model::PutObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutObjectAclRequest&, const Model::PutObjectAclOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectAclResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutObjectLegalHoldRequest&, const Model::PutObjectLegalHoldOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectLegalHoldResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutObjectLockConfigurationRequest&, const Model::PutObjectLockConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectLockConfigurationResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutObjectRetentionRequest&, const Model::PutObjectRetentionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectRetentionResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutObjectTaggingRequest&, const Model::PutObjectTaggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectTaggingResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::PutPublicAccessBlockRequest&, const Model::PutPublicAccessBlockOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPublicAccessBlockResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::RestoreObjectRequest&, const Model::RestoreObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreObjectResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::SelectObjectContentRequest&, const Model::SelectObjectContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SelectObjectContentResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::UploadPartRequest&, const Model::UploadPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadPartResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::UploadPartCopyRequest&, const Model::UploadPartCopyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadPartCopyResponseReceivedHandler;
    typedef std::function<void(const S3CrtClient*, const Model::WriteGetObjectResponseRequest&, const Model::WriteGetObjectResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > WriteGetObjectResponseResponseReceivedHandler;

    // Get endpoint, signer region and signer service name after computing the endpoint.
    struct ComputeEndpointResult
    {
      ComputeEndpointResult(const Aws::String& endpointName = {}, const Aws::String& region = {}, const Aws::String& serviceName = {}, const Aws::String signer = Aws::Auth::SIGV4_SIGNER) :
        endpoint(endpointName), signerRegion(region), signerServiceName(serviceName), signerName(signer) {}

      Aws::String endpoint;
      Aws::String signerRegion;
      Aws::String signerServiceName;
      Aws::String signerName;
    };
    typedef Aws::Utils::Outcome<ComputeEndpointResult, Aws::Client::AWSError<S3CrtErrors>> ComputeEndpointOutcome;

    //max expiration for presigned urls in s3 is 7 days.
    static const unsigned MAX_EXPIRATION_SECONDS = 7 * 24 * 60 * 60;

    /**
     * <p/>
     */
    enum class US_EAST_1_REGIONAL_ENDPOINT_OPTION
    {
      NOT_SET,
      LEGACY,   //stands for using global endpoint for us-east-1,
      REGIONAL //stands for using regional endpoint for us-east-1
    };
    class AWS_S3CRT_API S3CrtClient : public Aws::Client::AWSXMLClient
    {
    public:
        typedef Aws::Client::AWSXMLClient BASECLASS;
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3CrtClient(const Aws::S3Crt::ClientConfiguration& clientConfiguration = Aws::S3Crt::ClientConfiguration(), Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads = Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::Never, bool useVirtualAddressing = true, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption = Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::NOT_SET);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3CrtClient(const Aws::Auth::AWSCredentials& credentials, const Aws::S3Crt::ClientConfiguration& clientConfiguration = Aws::S3Crt::ClientConfiguration(), Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads = Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::Never, bool useVirtualAddressing = true, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption = Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::NOT_SET);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3CrtClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::S3Crt::ClientConfiguration& clientConfiguration = Aws::S3Crt::ClientConfiguration(), Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy signPayloads = Aws::Client::AWSAuthV4Signer::PayloadSigningPolicy::Never, bool useVirtualAddressing = true, Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION USEast1RegionalEndPointOption = Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION::NOT_SET);

        virtual ~S3CrtClient();

        /**
         * <p>This action aborts a multipart upload. After a multipart upload is aborted,
         * no additional parts can be uploaded using that upload ID. The storage consumed
         * by any previously uploaded parts will be freed. However, if any part uploads are
         * currently in progress, those part uploads might or might not succeed. As a
         * result, it might be necessary to abort a given multipart upload multiple times
         * in order to completely free all storage consumed by all parts. </p> <p>To verify
         * that all parts have been removed, so you don't get charged for the part storage,
         * you should call the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * action and ensure that the parts list is empty.</p> <p>For information about
         * permissions required to use the multipart upload, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>The following operations are related to
         * <code>AbortMultipartUpload</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AbortMultipartUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::AbortMultipartUploadOutcome AbortMultipartUpload(const Model::AbortMultipartUploadRequest& request) const;

        /**
         * <p>This action aborts a multipart upload. After a multipart upload is aborted,
         * no additional parts can be uploaded using that upload ID. The storage consumed
         * by any previously uploaded parts will be freed. However, if any part uploads are
         * currently in progress, those part uploads might or might not succeed. As a
         * result, it might be necessary to abort a given multipart upload multiple times
         * in order to completely free all storage consumed by all parts. </p> <p>To verify
         * that all parts have been removed, so you don't get charged for the part storage,
         * you should call the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * action and ensure that the parts list is empty.</p> <p>For information about
         * permissions required to use the multipart upload, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>The following operations are related to
         * <code>AbortMultipartUpload</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AbortMultipartUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AbortMultipartUploadOutcomeCallable AbortMultipartUploadCallable(const Model::AbortMultipartUploadRequest& request) const;

        /**
         * <p>This action aborts a multipart upload. After a multipart upload is aborted,
         * no additional parts can be uploaded using that upload ID. The storage consumed
         * by any previously uploaded parts will be freed. However, if any part uploads are
         * currently in progress, those part uploads might or might not succeed. As a
         * result, it might be necessary to abort a given multipart upload multiple times
         * in order to completely free all storage consumed by all parts. </p> <p>To verify
         * that all parts have been removed, so you don't get charged for the part storage,
         * you should call the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * action and ensure that the parts list is empty.</p> <p>For information about
         * permissions required to use the multipart upload, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>The following operations are related to
         * <code>AbortMultipartUpload</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AbortMultipartUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AbortMultipartUploadAsync(const Model::AbortMultipartUploadRequest& request, const AbortMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Completes a multipart upload by assembling previously uploaded parts.</p>
         * <p>You first initiate the multipart upload and then upload all parts using the
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * operation. After successfully uploading all relevant parts of an upload, you
         * call this action to complete the upload. Upon receiving this request, Amazon S3
         * concatenates all the parts in ascending order by part number to create a new
         * object. In the Complete Multipart Upload request, you must provide the parts
         * list. You must ensure that the parts list is complete. This action concatenates
         * the parts that you provide in the list. For each part in the list, you must
         * provide the part number and the <code>ETag</code> value, returned after that
         * part was uploaded.</p> <p>Processing of a Complete Multipart Upload request
         * could take several minutes to complete. After Amazon S3 begins processing the
         * request, it sends an HTTP response header that specifies a 200 OK response.
         * While processing is in progress, Amazon S3 periodically sends white space
         * characters to keep the connection from timing out. Because a request could fail
         * after the initial 200 OK response has been sent, it is important that you check
         * the response body to determine whether the request succeeded.</p> <p>Note that
         * if <code>CompleteMultipartUpload</code> fails, applications should be prepared
         * to retry the failed requests. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ErrorBestPractices.html">Amazon
         * S3 Error Best Practices</a>.</p>  <p>You cannot use
         * <code>Content-Type: application/x-www-form-urlencoded</code> with Complete
         * Multipart Upload requests. Also, if you do not provide a
         * <code>Content-Type</code> header, <code>CompleteMultipartUpload</code> returns a
         * 200 OK response.</p>  <p>For more information about multipart
         * uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a>.</p> <p>For information about permissions
         * required to use the multipart upload API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p> <code>CompleteMultipartUpload</code> has the
         * following special errors:</p> <ul> <li> <p>Error code:
         * <code>EntityTooSmall</code> </p> <ul> <li> <p>Description: Your proposed upload
         * is smaller than the minimum allowed object size. Each part must be at least 5 MB
         * in size, except the last part.</p> </li> <li> <p>400 Bad Request</p> </li> </ul>
         * </li> <li> <p>Error code: <code>InvalidPart</code> </p> <ul> <li>
         * <p>Description: One or more of the specified parts could not be found. The part
         * might not have been uploaded, or the specified entity tag might not have matched
         * the part's entity tag.</p> </li> <li> <p>400 Bad Request</p> </li> </ul> </li>
         * <li> <p>Error code: <code>InvalidPartOrder</code> </p> <ul> <li> <p>Description:
         * The list of parts was not in ascending order. The parts list must be specified
         * in order by part number.</p> </li> <li> <p>400 Bad Request</p> </li> </ul> </li>
         * <li> <p>Error code: <code>NoSuchUpload</code> </p> <ul> <li> <p>Description: The
         * specified multipart upload does not exist. The upload ID might be invalid, or
         * the multipart upload might have been aborted or completed.</p> </li> <li> <p>404
         * Not Found</p> </li> </ul> </li> </ul> <p>The following operations are related to
         * <code>CompleteMultipartUpload</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CompleteMultipartUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteMultipartUploadOutcome CompleteMultipartUpload(const Model::CompleteMultipartUploadRequest& request) const;

        /**
         * <p>Completes a multipart upload by assembling previously uploaded parts.</p>
         * <p>You first initiate the multipart upload and then upload all parts using the
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * operation. After successfully uploading all relevant parts of an upload, you
         * call this action to complete the upload. Upon receiving this request, Amazon S3
         * concatenates all the parts in ascending order by part number to create a new
         * object. In the Complete Multipart Upload request, you must provide the parts
         * list. You must ensure that the parts list is complete. This action concatenates
         * the parts that you provide in the list. For each part in the list, you must
         * provide the part number and the <code>ETag</code> value, returned after that
         * part was uploaded.</p> <p>Processing of a Complete Multipart Upload request
         * could take several minutes to complete. After Amazon S3 begins processing the
         * request, it sends an HTTP response header that specifies a 200 OK response.
         * While processing is in progress, Amazon S3 periodically sends white space
         * characters to keep the connection from timing out. Because a request could fail
         * after the initial 200 OK response has been sent, it is important that you check
         * the response body to determine whether the request succeeded.</p> <p>Note that
         * if <code>CompleteMultipartUpload</code> fails, applications should be prepared
         * to retry the failed requests. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ErrorBestPractices.html">Amazon
         * S3 Error Best Practices</a>.</p>  <p>You cannot use
         * <code>Content-Type: application/x-www-form-urlencoded</code> with Complete
         * Multipart Upload requests. Also, if you do not provide a
         * <code>Content-Type</code> header, <code>CompleteMultipartUpload</code> returns a
         * 200 OK response.</p>  <p>For more information about multipart
         * uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a>.</p> <p>For information about permissions
         * required to use the multipart upload API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p> <code>CompleteMultipartUpload</code> has the
         * following special errors:</p> <ul> <li> <p>Error code:
         * <code>EntityTooSmall</code> </p> <ul> <li> <p>Description: Your proposed upload
         * is smaller than the minimum allowed object size. Each part must be at least 5 MB
         * in size, except the last part.</p> </li> <li> <p>400 Bad Request</p> </li> </ul>
         * </li> <li> <p>Error code: <code>InvalidPart</code> </p> <ul> <li>
         * <p>Description: One or more of the specified parts could not be found. The part
         * might not have been uploaded, or the specified entity tag might not have matched
         * the part's entity tag.</p> </li> <li> <p>400 Bad Request</p> </li> </ul> </li>
         * <li> <p>Error code: <code>InvalidPartOrder</code> </p> <ul> <li> <p>Description:
         * The list of parts was not in ascending order. The parts list must be specified
         * in order by part number.</p> </li> <li> <p>400 Bad Request</p> </li> </ul> </li>
         * <li> <p>Error code: <code>NoSuchUpload</code> </p> <ul> <li> <p>Description: The
         * specified multipart upload does not exist. The upload ID might be invalid, or
         * the multipart upload might have been aborted or completed.</p> </li> <li> <p>404
         * Not Found</p> </li> </ul> </li> </ul> <p>The following operations are related to
         * <code>CompleteMultipartUpload</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CompleteMultipartUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompleteMultipartUploadOutcomeCallable CompleteMultipartUploadCallable(const Model::CompleteMultipartUploadRequest& request) const;

        /**
         * <p>Completes a multipart upload by assembling previously uploaded parts.</p>
         * <p>You first initiate the multipart upload and then upload all parts using the
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * operation. After successfully uploading all relevant parts of an upload, you
         * call this action to complete the upload. Upon receiving this request, Amazon S3
         * concatenates all the parts in ascending order by part number to create a new
         * object. In the Complete Multipart Upload request, you must provide the parts
         * list. You must ensure that the parts list is complete. This action concatenates
         * the parts that you provide in the list. For each part in the list, you must
         * provide the part number and the <code>ETag</code> value, returned after that
         * part was uploaded.</p> <p>Processing of a Complete Multipart Upload request
         * could take several minutes to complete. After Amazon S3 begins processing the
         * request, it sends an HTTP response header that specifies a 200 OK response.
         * While processing is in progress, Amazon S3 periodically sends white space
         * characters to keep the connection from timing out. Because a request could fail
         * after the initial 200 OK response has been sent, it is important that you check
         * the response body to determine whether the request succeeded.</p> <p>Note that
         * if <code>CompleteMultipartUpload</code> fails, applications should be prepared
         * to retry the failed requests. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ErrorBestPractices.html">Amazon
         * S3 Error Best Practices</a>.</p>  <p>You cannot use
         * <code>Content-Type: application/x-www-form-urlencoded</code> with Complete
         * Multipart Upload requests. Also, if you do not provide a
         * <code>Content-Type</code> header, <code>CompleteMultipartUpload</code> returns a
         * 200 OK response.</p>  <p>For more information about multipart
         * uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a>.</p> <p>For information about permissions
         * required to use the multipart upload API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p> <code>CompleteMultipartUpload</code> has the
         * following special errors:</p> <ul> <li> <p>Error code:
         * <code>EntityTooSmall</code> </p> <ul> <li> <p>Description: Your proposed upload
         * is smaller than the minimum allowed object size. Each part must be at least 5 MB
         * in size, except the last part.</p> </li> <li> <p>400 Bad Request</p> </li> </ul>
         * </li> <li> <p>Error code: <code>InvalidPart</code> </p> <ul> <li>
         * <p>Description: One or more of the specified parts could not be found. The part
         * might not have been uploaded, or the specified entity tag might not have matched
         * the part's entity tag.</p> </li> <li> <p>400 Bad Request</p> </li> </ul> </li>
         * <li> <p>Error code: <code>InvalidPartOrder</code> </p> <ul> <li> <p>Description:
         * The list of parts was not in ascending order. The parts list must be specified
         * in order by part number.</p> </li> <li> <p>400 Bad Request</p> </li> </ul> </li>
         * <li> <p>Error code: <code>NoSuchUpload</code> </p> <ul> <li> <p>Description: The
         * specified multipart upload does not exist. The upload ID might be invalid, or
         * the multipart upload might have been aborted or completed.</p> </li> <li> <p>404
         * Not Found</p> </li> </ul> </li> </ul> <p>The following operations are related to
         * <code>CompleteMultipartUpload</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CompleteMultipartUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteMultipartUploadAsync(const Model::CompleteMultipartUploadRequest& request, const CompleteMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a copy of an object that is already stored in Amazon S3.</p> 
         * <p>You can store individual objects of up to 5 TB in Amazon S3. You create a
         * copy of your object up to 5 GB in size in a single atomic action using this API.
         * However, to copy an object greater than 5 GB, you must use the multipart upload
         * Upload Part - Copy API. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CopyingObjctsUsingRESTMPUapi.html">Copy
         * Object Using the REST Multipart Upload API</a>.</p>  <p>All copy requests
         * must be authenticated. Additionally, you must have <i>read</i> access to the
         * source object and <i>write</i> access to the destination bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">REST
         * Authentication</a>. Both the Region that you want to copy the object from and
         * the Region that you want to copy the object to must be enabled for your
         * account.</p> <p>A copy request might return an error when Amazon S3 receives the
         * copy request or while Amazon S3 is copying the files. If the error occurs before
         * the copy action starts, you receive a standard Amazon S3 error. If the error
         * occurs during the copy operation, the error response is embedded in the
         * <code>200 OK</code> response. This means that a <code>200 OK</code> response can
         * contain either a success or an error. Design your application to parse the
         * contents of the response and handle it appropriately.</p> <p>If the copy is
         * successful, you receive a response with information about the copied object.</p>
         *  <p>If the request is an HTTP 1.1 request, the response is chunk encoded.
         * If it were not, it would not contain the content-length, and you would need to
         * read the entire body.</p>  <p>The copy request charge is based on the
         * storage class and Region that you specify for the destination object. For
         * pricing information, see <a href="http://aws.amazon.com/s3/pricing/">Amazon S3
         * pricing</a>.</p>  <p>Amazon S3 transfer acceleration does not support
         * cross-Region copies. If you request a cross-Region copy using a transfer
         * acceleration endpoint, you get a 400 <code>Bad Request</code> error. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
         * Acceleration</a>.</p>  <p> <b>Metadata</b> </p> <p>When copying an
         * object, you can preserve all metadata (default) or specify new metadata.
         * However, the ACL is not preserved and is set to private for the user making the
         * request. To override the default ACL setting, specify a new ACL when generating
         * a copy request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using
         * ACLs</a>. </p> <p>To specify whether you want the object metadata copied from
         * the source object or replaced with metadata provided in the request, you can
         * optionally add the <code>x-amz-metadata-directive</code> header. When you grant
         * permissions, you can use the <code>s3:x-amz-metadata-directive</code> condition
         * key to enforce certain metadata behavior when objects are uploaded. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/amazon-s3-policy-keys.html">Specifying
         * Conditions in a Policy</a> in the <i>Amazon S3 User Guide</i>. For a complete
         * list of Amazon S3-specific condition keys, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/list_amazons3.html">Actions,
         * Resources, and Condition Keys for Amazon S3</a>.</p> <p> <b>
         * <code>x-amz-copy-source-if</code> Headers</b> </p> <p>To only copy an object
         * under certain conditions, such as whether the <code>Etag</code> matches or
         * whether the object was modified before or after a specified date, use the
         * following request parameters:</p> <ul> <li> <p>
         * <code>x-amz-copy-source-if-match</code> </p> </li> <li> <p>
         * <code>x-amz-copy-source-if-none-match</code> </p> </li> <li> <p>
         * <code>x-amz-copy-source-if-unmodified-since</code> </p> </li> <li> <p>
         * <code>x-amz-copy-source-if-modified-since</code> </p> </li> </ul> <p> If both
         * the <code>x-amz-copy-source-if-match</code> and
         * <code>x-amz-copy-source-if-unmodified-since</code> headers are present in the
         * request and evaluate as follows, Amazon S3 returns <code>200 OK</code> and
         * copies the data:</p> <ul> <li> <p> <code>x-amz-copy-source-if-match</code>
         * condition evaluates to true</p> </li> <li> <p>
         * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
         * false</p> </li> </ul> <p>If both the
         * <code>x-amz-copy-source-if-none-match</code> and
         * <code>x-amz-copy-source-if-modified-since</code> headers are present in the
         * request and evaluate as follows, Amazon S3 returns the <code>412 Precondition
         * Failed</code> response code:</p> <ul> <li> <p>
         * <code>x-amz-copy-source-if-none-match</code> condition evaluates to false</p>
         * </li> <li> <p> <code>x-amz-copy-source-if-modified-since</code> condition
         * evaluates to true</p> </li> </ul>  <p>All headers with the
         * <code>x-amz-</code> prefix, including <code>x-amz-copy-source</code>, must be
         * signed.</p>  <p> <b>Server-side encryption</b> </p> <p>When you perform a
         * CopyObject operation, you can optionally use the appropriate encryption-related
         * headers to encrypt the object using server-side encryption with Amazon Web
         * Services managed encryption keys (SSE-S3 or SSE-KMS) or a customer-provided
         * encryption key. With server-side encryption, Amazon S3 encrypts your data as it
         * writes it to disks in its data centers and decrypts the data when you access it.
         * For more information about server-side encryption, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Using
         * Server-Side Encryption</a>.</p> <p>If a target object uses SSE-KMS, you can
         * enable an S3 Bucket Key for the object. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3
         * Bucket Keys</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Access Control
         * List (ACL)-Specific Request Headers</b> </p> <p>When copying an object, you can
         * optionally use headers to grant ACL-based permissions. By default, all objects
         * are private. Only the owner has full access control. When adding a new object,
         * you can grant permissions to individual Amazon Web Services accounts or to
         * predefined groups defined by Amazon S3. These permissions are then added to the
         * ACL on the object. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-using-rest-api.html">Managing
         * ACLs Using the REST API</a>. </p> <p> <b>Storage Class Options</b> </p> <p>You
         * can use the <code>CopyObject</code> action to change the storage class of an
         * object that is already stored in Amazon S3 using the <code>StorageClass</code>
         * parameter. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage
         * Classes</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Versioning</b> </p>
         * <p>By default, <code>x-amz-copy-source</code> identifies the current version of
         * an object to copy. If the current version is a delete marker, Amazon S3 behaves
         * as if the object was deleted. To copy a different version, use the
         * <code>versionId</code> subresource.</p> <p>If you enable versioning on the
         * target bucket, Amazon S3 generates a unique version ID for the object being
         * copied. This version ID is different from the version ID of the source object.
         * Amazon S3 returns the version ID of the copied object in the
         * <code>x-amz-version-id</code> response header in the response.</p> <p>If you do
         * not enable versioning or suspend it on the target bucket, the version ID that
         * Amazon S3 generates is always null.</p> <p>If the source object's storage class
         * is GLACIER, you must restore a copy of this object before you can use it as a
         * source object for the copy operation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_RestoreObject.html">RestoreObject</a>.</p>
         * <p>The following operations are related to <code>CopyObject</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CopyingObjectsExamples.html">Copying
         * Objects</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CopyObject">AWS API
         * Reference</a></p>
         */
        virtual Model::CopyObjectOutcome CopyObject(const Model::CopyObjectRequest& request) const;

        /**
         * <p>Creates a copy of an object that is already stored in Amazon S3.</p> 
         * <p>You can store individual objects of up to 5 TB in Amazon S3. You create a
         * copy of your object up to 5 GB in size in a single atomic action using this API.
         * However, to copy an object greater than 5 GB, you must use the multipart upload
         * Upload Part - Copy API. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CopyingObjctsUsingRESTMPUapi.html">Copy
         * Object Using the REST Multipart Upload API</a>.</p>  <p>All copy requests
         * must be authenticated. Additionally, you must have <i>read</i> access to the
         * source object and <i>write</i> access to the destination bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">REST
         * Authentication</a>. Both the Region that you want to copy the object from and
         * the Region that you want to copy the object to must be enabled for your
         * account.</p> <p>A copy request might return an error when Amazon S3 receives the
         * copy request or while Amazon S3 is copying the files. If the error occurs before
         * the copy action starts, you receive a standard Amazon S3 error. If the error
         * occurs during the copy operation, the error response is embedded in the
         * <code>200 OK</code> response. This means that a <code>200 OK</code> response can
         * contain either a success or an error. Design your application to parse the
         * contents of the response and handle it appropriately.</p> <p>If the copy is
         * successful, you receive a response with information about the copied object.</p>
         *  <p>If the request is an HTTP 1.1 request, the response is chunk encoded.
         * If it were not, it would not contain the content-length, and you would need to
         * read the entire body.</p>  <p>The copy request charge is based on the
         * storage class and Region that you specify for the destination object. For
         * pricing information, see <a href="http://aws.amazon.com/s3/pricing/">Amazon S3
         * pricing</a>.</p>  <p>Amazon S3 transfer acceleration does not support
         * cross-Region copies. If you request a cross-Region copy using a transfer
         * acceleration endpoint, you get a 400 <code>Bad Request</code> error. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
         * Acceleration</a>.</p>  <p> <b>Metadata</b> </p> <p>When copying an
         * object, you can preserve all metadata (default) or specify new metadata.
         * However, the ACL is not preserved and is set to private for the user making the
         * request. To override the default ACL setting, specify a new ACL when generating
         * a copy request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using
         * ACLs</a>. </p> <p>To specify whether you want the object metadata copied from
         * the source object or replaced with metadata provided in the request, you can
         * optionally add the <code>x-amz-metadata-directive</code> header. When you grant
         * permissions, you can use the <code>s3:x-amz-metadata-directive</code> condition
         * key to enforce certain metadata behavior when objects are uploaded. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/amazon-s3-policy-keys.html">Specifying
         * Conditions in a Policy</a> in the <i>Amazon S3 User Guide</i>. For a complete
         * list of Amazon S3-specific condition keys, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/list_amazons3.html">Actions,
         * Resources, and Condition Keys for Amazon S3</a>.</p> <p> <b>
         * <code>x-amz-copy-source-if</code> Headers</b> </p> <p>To only copy an object
         * under certain conditions, such as whether the <code>Etag</code> matches or
         * whether the object was modified before or after a specified date, use the
         * following request parameters:</p> <ul> <li> <p>
         * <code>x-amz-copy-source-if-match</code> </p> </li> <li> <p>
         * <code>x-amz-copy-source-if-none-match</code> </p> </li> <li> <p>
         * <code>x-amz-copy-source-if-unmodified-since</code> </p> </li> <li> <p>
         * <code>x-amz-copy-source-if-modified-since</code> </p> </li> </ul> <p> If both
         * the <code>x-amz-copy-source-if-match</code> and
         * <code>x-amz-copy-source-if-unmodified-since</code> headers are present in the
         * request and evaluate as follows, Amazon S3 returns <code>200 OK</code> and
         * copies the data:</p> <ul> <li> <p> <code>x-amz-copy-source-if-match</code>
         * condition evaluates to true</p> </li> <li> <p>
         * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
         * false</p> </li> </ul> <p>If both the
         * <code>x-amz-copy-source-if-none-match</code> and
         * <code>x-amz-copy-source-if-modified-since</code> headers are present in the
         * request and evaluate as follows, Amazon S3 returns the <code>412 Precondition
         * Failed</code> response code:</p> <ul> <li> <p>
         * <code>x-amz-copy-source-if-none-match</code> condition evaluates to false</p>
         * </li> <li> <p> <code>x-amz-copy-source-if-modified-since</code> condition
         * evaluates to true</p> </li> </ul>  <p>All headers with the
         * <code>x-amz-</code> prefix, including <code>x-amz-copy-source</code>, must be
         * signed.</p>  <p> <b>Server-side encryption</b> </p> <p>When you perform a
         * CopyObject operation, you can optionally use the appropriate encryption-related
         * headers to encrypt the object using server-side encryption with Amazon Web
         * Services managed encryption keys (SSE-S3 or SSE-KMS) or a customer-provided
         * encryption key. With server-side encryption, Amazon S3 encrypts your data as it
         * writes it to disks in its data centers and decrypts the data when you access it.
         * For more information about server-side encryption, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Using
         * Server-Side Encryption</a>.</p> <p>If a target object uses SSE-KMS, you can
         * enable an S3 Bucket Key for the object. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3
         * Bucket Keys</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Access Control
         * List (ACL)-Specific Request Headers</b> </p> <p>When copying an object, you can
         * optionally use headers to grant ACL-based permissions. By default, all objects
         * are private. Only the owner has full access control. When adding a new object,
         * you can grant permissions to individual Amazon Web Services accounts or to
         * predefined groups defined by Amazon S3. These permissions are then added to the
         * ACL on the object. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-using-rest-api.html">Managing
         * ACLs Using the REST API</a>. </p> <p> <b>Storage Class Options</b> </p> <p>You
         * can use the <code>CopyObject</code> action to change the storage class of an
         * object that is already stored in Amazon S3 using the <code>StorageClass</code>
         * parameter. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage
         * Classes</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Versioning</b> </p>
         * <p>By default, <code>x-amz-copy-source</code> identifies the current version of
         * an object to copy. If the current version is a delete marker, Amazon S3 behaves
         * as if the object was deleted. To copy a different version, use the
         * <code>versionId</code> subresource.</p> <p>If you enable versioning on the
         * target bucket, Amazon S3 generates a unique version ID for the object being
         * copied. This version ID is different from the version ID of the source object.
         * Amazon S3 returns the version ID of the copied object in the
         * <code>x-amz-version-id</code> response header in the response.</p> <p>If you do
         * not enable versioning or suspend it on the target bucket, the version ID that
         * Amazon S3 generates is always null.</p> <p>If the source object's storage class
         * is GLACIER, you must restore a copy of this object before you can use it as a
         * source object for the copy operation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_RestoreObject.html">RestoreObject</a>.</p>
         * <p>The following operations are related to <code>CopyObject</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CopyingObjectsExamples.html">Copying
         * Objects</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CopyObject">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopyObjectOutcomeCallable CopyObjectCallable(const Model::CopyObjectRequest& request) const;

        /**
         * <p>Creates a copy of an object that is already stored in Amazon S3.</p> 
         * <p>You can store individual objects of up to 5 TB in Amazon S3. You create a
         * copy of your object up to 5 GB in size in a single atomic action using this API.
         * However, to copy an object greater than 5 GB, you must use the multipart upload
         * Upload Part - Copy API. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CopyingObjctsUsingRESTMPUapi.html">Copy
         * Object Using the REST Multipart Upload API</a>.</p>  <p>All copy requests
         * must be authenticated. Additionally, you must have <i>read</i> access to the
         * source object and <i>write</i> access to the destination bucket. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">REST
         * Authentication</a>. Both the Region that you want to copy the object from and
         * the Region that you want to copy the object to must be enabled for your
         * account.</p> <p>A copy request might return an error when Amazon S3 receives the
         * copy request or while Amazon S3 is copying the files. If the error occurs before
         * the copy action starts, you receive a standard Amazon S3 error. If the error
         * occurs during the copy operation, the error response is embedded in the
         * <code>200 OK</code> response. This means that a <code>200 OK</code> response can
         * contain either a success or an error. Design your application to parse the
         * contents of the response and handle it appropriately.</p> <p>If the copy is
         * successful, you receive a response with information about the copied object.</p>
         *  <p>If the request is an HTTP 1.1 request, the response is chunk encoded.
         * If it were not, it would not contain the content-length, and you would need to
         * read the entire body.</p>  <p>The copy request charge is based on the
         * storage class and Region that you specify for the destination object. For
         * pricing information, see <a href="http://aws.amazon.com/s3/pricing/">Amazon S3
         * pricing</a>.</p>  <p>Amazon S3 transfer acceleration does not support
         * cross-Region copies. If you request a cross-Region copy using a transfer
         * acceleration endpoint, you get a 400 <code>Bad Request</code> error. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
         * Acceleration</a>.</p>  <p> <b>Metadata</b> </p> <p>When copying an
         * object, you can preserve all metadata (default) or specify new metadata.
         * However, the ACL is not preserved and is set to private for the user making the
         * request. To override the default ACL setting, specify a new ACL when generating
         * a copy request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using
         * ACLs</a>. </p> <p>To specify whether you want the object metadata copied from
         * the source object or replaced with metadata provided in the request, you can
         * optionally add the <code>x-amz-metadata-directive</code> header. When you grant
         * permissions, you can use the <code>s3:x-amz-metadata-directive</code> condition
         * key to enforce certain metadata behavior when objects are uploaded. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/amazon-s3-policy-keys.html">Specifying
         * Conditions in a Policy</a> in the <i>Amazon S3 User Guide</i>. For a complete
         * list of Amazon S3-specific condition keys, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/list_amazons3.html">Actions,
         * Resources, and Condition Keys for Amazon S3</a>.</p> <p> <b>
         * <code>x-amz-copy-source-if</code> Headers</b> </p> <p>To only copy an object
         * under certain conditions, such as whether the <code>Etag</code> matches or
         * whether the object was modified before or after a specified date, use the
         * following request parameters:</p> <ul> <li> <p>
         * <code>x-amz-copy-source-if-match</code> </p> </li> <li> <p>
         * <code>x-amz-copy-source-if-none-match</code> </p> </li> <li> <p>
         * <code>x-amz-copy-source-if-unmodified-since</code> </p> </li> <li> <p>
         * <code>x-amz-copy-source-if-modified-since</code> </p> </li> </ul> <p> If both
         * the <code>x-amz-copy-source-if-match</code> and
         * <code>x-amz-copy-source-if-unmodified-since</code> headers are present in the
         * request and evaluate as follows, Amazon S3 returns <code>200 OK</code> and
         * copies the data:</p> <ul> <li> <p> <code>x-amz-copy-source-if-match</code>
         * condition evaluates to true</p> </li> <li> <p>
         * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
         * false</p> </li> </ul> <p>If both the
         * <code>x-amz-copy-source-if-none-match</code> and
         * <code>x-amz-copy-source-if-modified-since</code> headers are present in the
         * request and evaluate as follows, Amazon S3 returns the <code>412 Precondition
         * Failed</code> response code:</p> <ul> <li> <p>
         * <code>x-amz-copy-source-if-none-match</code> condition evaluates to false</p>
         * </li> <li> <p> <code>x-amz-copy-source-if-modified-since</code> condition
         * evaluates to true</p> </li> </ul>  <p>All headers with the
         * <code>x-amz-</code> prefix, including <code>x-amz-copy-source</code>, must be
         * signed.</p>  <p> <b>Server-side encryption</b> </p> <p>When you perform a
         * CopyObject operation, you can optionally use the appropriate encryption-related
         * headers to encrypt the object using server-side encryption with Amazon Web
         * Services managed encryption keys (SSE-S3 or SSE-KMS) or a customer-provided
         * encryption key. With server-side encryption, Amazon S3 encrypts your data as it
         * writes it to disks in its data centers and decrypts the data when you access it.
         * For more information about server-side encryption, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Using
         * Server-Side Encryption</a>.</p> <p>If a target object uses SSE-KMS, you can
         * enable an S3 Bucket Key for the object. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3
         * Bucket Keys</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Access Control
         * List (ACL)-Specific Request Headers</b> </p> <p>When copying an object, you can
         * optionally use headers to grant ACL-based permissions. By default, all objects
         * are private. Only the owner has full access control. When adding a new object,
         * you can grant permissions to individual Amazon Web Services accounts or to
         * predefined groups defined by Amazon S3. These permissions are then added to the
         * ACL on the object. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-using-rest-api.html">Managing
         * ACLs Using the REST API</a>. </p> <p> <b>Storage Class Options</b> </p> <p>You
         * can use the <code>CopyObject</code> action to change the storage class of an
         * object that is already stored in Amazon S3 using the <code>StorageClass</code>
         * parameter. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage
         * Classes</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Versioning</b> </p>
         * <p>By default, <code>x-amz-copy-source</code> identifies the current version of
         * an object to copy. If the current version is a delete marker, Amazon S3 behaves
         * as if the object was deleted. To copy a different version, use the
         * <code>versionId</code> subresource.</p> <p>If you enable versioning on the
         * target bucket, Amazon S3 generates a unique version ID for the object being
         * copied. This version ID is different from the version ID of the source object.
         * Amazon S3 returns the version ID of the copied object in the
         * <code>x-amz-version-id</code> response header in the response.</p> <p>If you do
         * not enable versioning or suspend it on the target bucket, the version ID that
         * Amazon S3 generates is always null.</p> <p>If the source object's storage class
         * is GLACIER, you must restore a copy of this object before you can use it as a
         * source object for the copy operation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_RestoreObject.html">RestoreObject</a>.</p>
         * <p>The following operations are related to <code>CopyObject</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CopyingObjectsExamples.html">Copying
         * Objects</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CopyObject">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopyObjectAsync(const Model::CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new S3 bucket. To create a bucket, you must register with Amazon S3
         * and have a valid Amazon Web Services Access Key ID to authenticate requests.
         * Anonymous requests are never allowed to create buckets. By creating the bucket,
         * you become the bucket owner.</p> <p>Not every string is an acceptable bucket
         * name. For information about bucket naming restrictions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Bucket
         * naming rules</a>.</p> <p>If you want to create an Amazon S3 on Outposts bucket,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">Create
         * Bucket</a>. </p> <p>By default, the bucket is created in the US East (N.
         * Virginia) Region. You can optionally specify a Region in the request body. You
         * might choose a Region to optimize latency, minimize costs, or address regulatory
         * requirements. For example, if you reside in Europe, you will probably find it
         * advantageous to create buckets in the Europe (Ireland) Region. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingBucket.html#access-bucket-intro">Accessing
         * a bucket</a>.</p>  <p>If you send your create bucket request to the
         * <code>s3.amazonaws.com</code> endpoint, the request goes to the us-east-1
         * Region. Accordingly, the signature calculations in Signature Version 4 must use
         * us-east-1 as the Region, even if the location constraint in the request
         * specifies another Region where the bucket is to be created. If you create a
         * bucket in a Region other than US East (N. Virginia), your application must be
         * able to handle 307 redirect. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/VirtualHosting.html">Virtual
         * hosting of buckets</a>.</p>  <p>When creating a bucket using this
         * operation, you can optionally specify the accounts or groups that should be
         * granted specific permissions on the bucket. There are two ways to grant the
         * appropriate permissions using the request headers.</p> <ul> <li> <p>Specify a
         * canned ACL using the <code>x-amz-acl</code> request header. Amazon S3 supports a
         * set of predefined ACLs, known as <i>canned ACLs</i>. Each canned ACL has a
         * predefined set of grantees and permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly using the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-write</code>,
         * <code>x-amz-grant-read-acp</code>, <code>x-amz-grant-write-acp</code>, and
         * <code>x-amz-grant-full-control</code> headers. These headers map to the set of
         * permissions Amazon S3 supports in an ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * control list (ACL) overview</a>.</p> <p>You specify each grantee as a type=value
         * pair, where the type is one of the following:</p> <ul> <li> <p> <code>id</code>
         * – if the value specified is the canonical user ID of an Amazon Web Services
         * account</p> </li> <li> <p> <code>uri</code> – if you are granting permissions to
         * a predefined group</p> </li> <li> <p> <code>emailAddress</code> – if the value
         * specified is the email address of an Amazon Web Services account</p> 
         * <p>Using email addresses to specify a grantee is only supported in the following
         * Amazon Web Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li>
         * <li> <p>US West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li>
         * <li> <p> Asia Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p>
         * </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li>
         * <li> <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the
         * Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-read</code> header
         * grants the Amazon Web Services accounts identified by account IDs permissions to
         * read object data and its metadata:</p> <p> <code>x-amz-grant-read:
         * id="11112222333", id="444455556666" </code> </p> </li> </ul>  <p>You can
         * use either a canned ACL or specify access permissions explicitly. You cannot do
         * both.</p>  <p> <b>Permissions</b> </p> <p>If your
         * <code>CreateBucket</code> request specifies ACL permissions and the ACL is
         * public-read, public-read-write, authenticated-read, or if you specify access
         * permissions explicitly through any other ACL, both <code>s3:CreateBucket</code>
         * and <code>s3:PutBucketAcl</code> permissions are needed. If the ACL the
         * <code>CreateBucket</code> request is private, only <code>s3:CreateBucket</code>
         * permission is needed. </p> <p>If <code>ObjectLockEnabledForBucket</code> is set
         * to true in your <code>CreateBucket</code> request,
         * <code>s3:PutBucketObjectLockConfiguration</code> and
         * <code>s3:PutBucketVersioning</code> permissions are required.</p> <p>The
         * following operations are related to <code>CreateBucket</code>:</p> <ul> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CreateBucket">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateBucketOutcome CreateBucket(const Model::CreateBucketRequest& request) const;

        /**
         * <p>Creates a new S3 bucket. To create a bucket, you must register with Amazon S3
         * and have a valid Amazon Web Services Access Key ID to authenticate requests.
         * Anonymous requests are never allowed to create buckets. By creating the bucket,
         * you become the bucket owner.</p> <p>Not every string is an acceptable bucket
         * name. For information about bucket naming restrictions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Bucket
         * naming rules</a>.</p> <p>If you want to create an Amazon S3 on Outposts bucket,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">Create
         * Bucket</a>. </p> <p>By default, the bucket is created in the US East (N.
         * Virginia) Region. You can optionally specify a Region in the request body. You
         * might choose a Region to optimize latency, minimize costs, or address regulatory
         * requirements. For example, if you reside in Europe, you will probably find it
         * advantageous to create buckets in the Europe (Ireland) Region. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingBucket.html#access-bucket-intro">Accessing
         * a bucket</a>.</p>  <p>If you send your create bucket request to the
         * <code>s3.amazonaws.com</code> endpoint, the request goes to the us-east-1
         * Region. Accordingly, the signature calculations in Signature Version 4 must use
         * us-east-1 as the Region, even if the location constraint in the request
         * specifies another Region where the bucket is to be created. If you create a
         * bucket in a Region other than US East (N. Virginia), your application must be
         * able to handle 307 redirect. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/VirtualHosting.html">Virtual
         * hosting of buckets</a>.</p>  <p>When creating a bucket using this
         * operation, you can optionally specify the accounts or groups that should be
         * granted specific permissions on the bucket. There are two ways to grant the
         * appropriate permissions using the request headers.</p> <ul> <li> <p>Specify a
         * canned ACL using the <code>x-amz-acl</code> request header. Amazon S3 supports a
         * set of predefined ACLs, known as <i>canned ACLs</i>. Each canned ACL has a
         * predefined set of grantees and permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly using the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-write</code>,
         * <code>x-amz-grant-read-acp</code>, <code>x-amz-grant-write-acp</code>, and
         * <code>x-amz-grant-full-control</code> headers. These headers map to the set of
         * permissions Amazon S3 supports in an ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * control list (ACL) overview</a>.</p> <p>You specify each grantee as a type=value
         * pair, where the type is one of the following:</p> <ul> <li> <p> <code>id</code>
         * – if the value specified is the canonical user ID of an Amazon Web Services
         * account</p> </li> <li> <p> <code>uri</code> – if you are granting permissions to
         * a predefined group</p> </li> <li> <p> <code>emailAddress</code> – if the value
         * specified is the email address of an Amazon Web Services account</p> 
         * <p>Using email addresses to specify a grantee is only supported in the following
         * Amazon Web Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li>
         * <li> <p>US West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li>
         * <li> <p> Asia Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p>
         * </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li>
         * <li> <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the
         * Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-read</code> header
         * grants the Amazon Web Services accounts identified by account IDs permissions to
         * read object data and its metadata:</p> <p> <code>x-amz-grant-read:
         * id="11112222333", id="444455556666" </code> </p> </li> </ul>  <p>You can
         * use either a canned ACL or specify access permissions explicitly. You cannot do
         * both.</p>  <p> <b>Permissions</b> </p> <p>If your
         * <code>CreateBucket</code> request specifies ACL permissions and the ACL is
         * public-read, public-read-write, authenticated-read, or if you specify access
         * permissions explicitly through any other ACL, both <code>s3:CreateBucket</code>
         * and <code>s3:PutBucketAcl</code> permissions are needed. If the ACL the
         * <code>CreateBucket</code> request is private, only <code>s3:CreateBucket</code>
         * permission is needed. </p> <p>If <code>ObjectLockEnabledForBucket</code> is set
         * to true in your <code>CreateBucket</code> request,
         * <code>s3:PutBucketObjectLockConfiguration</code> and
         * <code>s3:PutBucketVersioning</code> permissions are required.</p> <p>The
         * following operations are related to <code>CreateBucket</code>:</p> <ul> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CreateBucket">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBucketOutcomeCallable CreateBucketCallable(const Model::CreateBucketRequest& request) const;

        /**
         * <p>Creates a new S3 bucket. To create a bucket, you must register with Amazon S3
         * and have a valid Amazon Web Services Access Key ID to authenticate requests.
         * Anonymous requests are never allowed to create buckets. By creating the bucket,
         * you become the bucket owner.</p> <p>Not every string is an acceptable bucket
         * name. For information about bucket naming restrictions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Bucket
         * naming rules</a>.</p> <p>If you want to create an Amazon S3 on Outposts bucket,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_control_CreateBucket.html">Create
         * Bucket</a>. </p> <p>By default, the bucket is created in the US East (N.
         * Virginia) Region. You can optionally specify a Region in the request body. You
         * might choose a Region to optimize latency, minimize costs, or address regulatory
         * requirements. For example, if you reside in Europe, you will probably find it
         * advantageous to create buckets in the Europe (Ireland) Region. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingBucket.html#access-bucket-intro">Accessing
         * a bucket</a>.</p>  <p>If you send your create bucket request to the
         * <code>s3.amazonaws.com</code> endpoint, the request goes to the us-east-1
         * Region. Accordingly, the signature calculations in Signature Version 4 must use
         * us-east-1 as the Region, even if the location constraint in the request
         * specifies another Region where the bucket is to be created. If you create a
         * bucket in a Region other than US East (N. Virginia), your application must be
         * able to handle 307 redirect. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/VirtualHosting.html">Virtual
         * hosting of buckets</a>.</p>  <p>When creating a bucket using this
         * operation, you can optionally specify the accounts or groups that should be
         * granted specific permissions on the bucket. There are two ways to grant the
         * appropriate permissions using the request headers.</p> <ul> <li> <p>Specify a
         * canned ACL using the <code>x-amz-acl</code> request header. Amazon S3 supports a
         * set of predefined ACLs, known as <i>canned ACLs</i>. Each canned ACL has a
         * predefined set of grantees and permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly using the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-write</code>,
         * <code>x-amz-grant-read-acp</code>, <code>x-amz-grant-write-acp</code>, and
         * <code>x-amz-grant-full-control</code> headers. These headers map to the set of
         * permissions Amazon S3 supports in an ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * control list (ACL) overview</a>.</p> <p>You specify each grantee as a type=value
         * pair, where the type is one of the following:</p> <ul> <li> <p> <code>id</code>
         * – if the value specified is the canonical user ID of an Amazon Web Services
         * account</p> </li> <li> <p> <code>uri</code> – if you are granting permissions to
         * a predefined group</p> </li> <li> <p> <code>emailAddress</code> – if the value
         * specified is the email address of an Amazon Web Services account</p> 
         * <p>Using email addresses to specify a grantee is only supported in the following
         * Amazon Web Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li>
         * <li> <p>US West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li>
         * <li> <p> Asia Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p>
         * </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li>
         * <li> <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the
         * Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-read</code> header
         * grants the Amazon Web Services accounts identified by account IDs permissions to
         * read object data and its metadata:</p> <p> <code>x-amz-grant-read:
         * id="11112222333", id="444455556666" </code> </p> </li> </ul>  <p>You can
         * use either a canned ACL or specify access permissions explicitly. You cannot do
         * both.</p>  <p> <b>Permissions</b> </p> <p>If your
         * <code>CreateBucket</code> request specifies ACL permissions and the ACL is
         * public-read, public-read-write, authenticated-read, or if you specify access
         * permissions explicitly through any other ACL, both <code>s3:CreateBucket</code>
         * and <code>s3:PutBucketAcl</code> permissions are needed. If the ACL the
         * <code>CreateBucket</code> request is private, only <code>s3:CreateBucket</code>
         * permission is needed. </p> <p>If <code>ObjectLockEnabledForBucket</code> is set
         * to true in your <code>CreateBucket</code> request,
         * <code>s3:PutBucketObjectLockConfiguration</code> and
         * <code>s3:PutBucketVersioning</code> permissions are required.</p> <p>The
         * following operations are related to <code>CreateBucket</code>:</p> <ul> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CreateBucket">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBucketAsync(const Model::CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action initiates a multipart upload and returns an upload ID. This
         * upload ID is used to associate all of the parts in the specific multipart
         * upload. You specify this upload ID in each of your subsequent upload part
         * requests (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>).
         * You also include this upload ID in the final request to either complete or abort
         * the multipart upload request.</p> <p>For more information about multipart
         * uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart
         * Upload Overview</a>.</p> <p>If you have configured a lifecycle rule to abort
         * incomplete multipart uploads, the upload must complete within the number of days
         * specified in the bucket lifecycle configuration. Otherwise, the incomplete
         * multipart upload becomes eligible for an abort action and Amazon S3 aborts the
         * multipart upload. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">Aborting
         * Incomplete Multipart Uploads Using a Bucket Lifecycle Policy</a>.</p> <p>For
         * information about the permissions required to use the multipart upload API, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>For request signing, multipart upload is just
         * a series of regular requests. You initiate a multipart upload, send one or more
         * requests to upload parts, and then complete the multipart upload process. You
         * sign each request individually. There is nothing special about signing multipart
         * upload requests. For more information about signing, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
         * Requests (Amazon Web Services Signature Version 4)</a>.</p>  <p> After you
         * initiate a multipart upload and upload one or more parts, to stop being charged
         * for storing the uploaded parts, you must either complete or abort the multipart
         * upload. Amazon S3 frees up the space used to store the parts and stop charging
         * you for storing them only after you either complete or abort a multipart upload.
         * </p>  <p>You can optionally request server-side encryption. For
         * server-side encryption, Amazon S3 encrypts your data as it writes it to disks in
         * its data centers and decrypts it when you access it. You can provide your own
         * encryption key, or use Amazon Web Services KMS keys or Amazon S3-managed
         * encryption keys. If you choose to provide your own encryption key, the request
         * headers you provide in <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a>
         * requests must match the headers you used in the request to initiate the upload
         * by using <code>CreateMultipartUpload</code>. </p> <p>To perform a multipart
         * upload with encryption using an Amazon Web Services KMS key, the requester must
         * have permission to the <code>kms:Decrypt</code> and
         * <code>kms:GenerateDataKey*</code> actions on the key. These permissions are
         * required because Amazon S3 must decrypt and read data from the encrypted file
         * parts before it completes the multipart upload. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/mpuoverview.html#mpuAndPermissions">Multipart
         * upload API and permissions</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If
         * your Identity and Access Management (IAM) user or role is in the same Amazon Web
         * Services account as the KMS key, then you must have these permissions on the key
         * policy. If your IAM user or role belongs to a different account than the key,
         * then you must have the permissions on both the key policy and your IAM user or
         * role.</p> <p> For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
         * Data Using Server-Side Encryption</a>.</p> <dl> <dt>Access Permissions</dt> <dd>
         * <p>When copying an object, you can optionally specify the accounts or groups
         * that should be granted specific permissions on the new object. There are two
         * ways to grant the permissions using the request headers:</p> <ul> <li>
         * <p>Specify a canned ACL with the <code>x-amz-acl</code> request header. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly with the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
         * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
         * headers. These parameters map to the set of permissions that Amazon S3 supports
         * in an ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>.</p> </li> </ul> <p>You can use either a canned
         * ACL or specify access permissions explicitly. You cannot do both.</p> </dd>
         * <dt>Server-Side- Encryption-Specific Request Headers</dt> <dd> <p>You can
         * optionally tell Amazon S3 to encrypt data at rest using server-side encryption.
         * Server-side encryption is for data encryption at rest. Amazon S3 encrypts your
         * data as it writes it to disks in its data centers and decrypts it when you
         * access it. The option you use depends on whether you want to use Amazon Web
         * Services managed encryption keys or provide your own encryption key. </p> <ul>
         * <li> <p>Use encryption keys managed by Amazon S3 or customer managed key stored
         * in Amazon Web Services Key Management Service (Amazon Web Services KMS) – If you
         * want Amazon Web Services to manage the keys used to encrypt data, specify the
         * following headers in the request.</p> <ul> <li>
         * <p>x-amz-server-side-encryption</p> </li> <li>
         * <p>x-amz-server-side-encryption-aws-kms-key-id</p> </li> <li>
         * <p>x-amz-server-side-encryption-context</p> </li> </ul>  <p>If you specify
         * <code>x-amz-server-side-encryption:aws:kms</code>, but don't provide
         * <code>x-amz-server-side-encryption-aws-kms-key-id</code>, Amazon S3 uses the
         * Amazon Web Services managed key in Amazon Web Services KMS to protect the
         * data.</p>   <p>All GET and PUT requests for an object
         * protected by Amazon Web Services KMS fail if you don't make them with SSL or by
         * using SigV4.</p>  <p>For more information about server-side
         * encryption with KMS key (SSE-KMS), see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">Protecting
         * Data Using Server-Side Encryption with KMS keys</a>.</p> </li> <li> <p>Use
         * customer-provided encryption keys – If you want to manage your own encryption
         * keys, provide all the following headers in the request.</p> <ul> <li>
         * <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p>For more
         * information about server-side encryption with KMS keys (SSE-KMS), see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">Protecting
         * Data Using Server-Side Encryption with KMS keys</a>.</p> </li> </ul> </dd>
         * <dt>Access-Control-List (ACL)-Specific Request Headers</dt> <dd> <p>You also can
         * use the following access control–related headers with this operation. By
         * default, all objects are private. Only the owner has full access control. When
         * adding a new object, you can grant permissions to individual Amazon Web Services
         * accounts or to predefined groups defined by Amazon S3. These permissions are
         * then added to the access control list (ACL) on the object. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using
         * ACLs</a>. With this operation, you can grant access permissions using one of the
         * following two methods:</p> <ul> <li> <p>Specify a canned ACL
         * (<code>x-amz-acl</code>) — Amazon S3 supports a set of predefined ACLs, known as
         * <i>canned ACLs</i>. Each canned ACL has a predefined set of grantees and
         * permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly — To explicitly
         * grant access permissions to specific Amazon Web Services accounts or groups, use
         * the following headers. Each header maps to specific permissions that Amazon S3
         * supports in an ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>. In the header, you specify a list of grantees
         * who get the specific permission. To grant permissions explicitly, use:</p> <ul>
         * <li> <p>x-amz-grant-read</p> </li> <li> <p>x-amz-grant-write</p> </li> <li>
         * <p>x-amz-grant-read-acp</p> </li> <li> <p>x-amz-grant-write-acp</p> </li> <li>
         * <p>x-amz-grant-full-control</p> </li> </ul> <p>You specify each grantee as a
         * type=value pair, where the type is one of the following:</p> <ul> <li> <p>
         * <code>id</code> – if the value specified is the canonical user ID of an Amazon
         * Web Services account</p> </li> <li> <p> <code>uri</code> – if you are granting
         * permissions to a predefined group</p> </li> <li> <p> <code>emailAddress</code> –
         * if the value specified is the email address of an Amazon Web Services
         * account</p>  <p>Using email addresses to specify a grantee is only
         * supported in the following Amazon Web Services Regions: </p> <ul> <li> <p>US
         * East (N. Virginia)</p> </li> <li> <p>US West (N. California)</p> </li> <li> <p>
         * US West (Oregon)</p> </li> <li> <p> Asia Pacific (Singapore)</p> </li> <li>
         * <p>Asia Pacific (Sydney)</p> </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li>
         * <p>Europe (Ireland)</p> </li> <li> <p>South America (São Paulo)</p> </li> </ul>
         * <p>For a list of all the Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-read</code> header
         * grants the Amazon Web Services accounts identified by account IDs permissions to
         * read object data and its metadata:</p> <p> <code>x-amz-grant-read:
         * id="11112222333", id="444455556666" </code> </p> </li> </ul> </dd> </dl> <p>The
         * following operations are related to <code>CreateMultipartUpload</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CreateMultipartUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMultipartUploadOutcome CreateMultipartUpload(const Model::CreateMultipartUploadRequest& request) const;

        /**
         * <p>This action initiates a multipart upload and returns an upload ID. This
         * upload ID is used to associate all of the parts in the specific multipart
         * upload. You specify this upload ID in each of your subsequent upload part
         * requests (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>).
         * You also include this upload ID in the final request to either complete or abort
         * the multipart upload request.</p> <p>For more information about multipart
         * uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart
         * Upload Overview</a>.</p> <p>If you have configured a lifecycle rule to abort
         * incomplete multipart uploads, the upload must complete within the number of days
         * specified in the bucket lifecycle configuration. Otherwise, the incomplete
         * multipart upload becomes eligible for an abort action and Amazon S3 aborts the
         * multipart upload. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">Aborting
         * Incomplete Multipart Uploads Using a Bucket Lifecycle Policy</a>.</p> <p>For
         * information about the permissions required to use the multipart upload API, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>For request signing, multipart upload is just
         * a series of regular requests. You initiate a multipart upload, send one or more
         * requests to upload parts, and then complete the multipart upload process. You
         * sign each request individually. There is nothing special about signing multipart
         * upload requests. For more information about signing, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
         * Requests (Amazon Web Services Signature Version 4)</a>.</p>  <p> After you
         * initiate a multipart upload and upload one or more parts, to stop being charged
         * for storing the uploaded parts, you must either complete or abort the multipart
         * upload. Amazon S3 frees up the space used to store the parts and stop charging
         * you for storing them only after you either complete or abort a multipart upload.
         * </p>  <p>You can optionally request server-side encryption. For
         * server-side encryption, Amazon S3 encrypts your data as it writes it to disks in
         * its data centers and decrypts it when you access it. You can provide your own
         * encryption key, or use Amazon Web Services KMS keys or Amazon S3-managed
         * encryption keys. If you choose to provide your own encryption key, the request
         * headers you provide in <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a>
         * requests must match the headers you used in the request to initiate the upload
         * by using <code>CreateMultipartUpload</code>. </p> <p>To perform a multipart
         * upload with encryption using an Amazon Web Services KMS key, the requester must
         * have permission to the <code>kms:Decrypt</code> and
         * <code>kms:GenerateDataKey*</code> actions on the key. These permissions are
         * required because Amazon S3 must decrypt and read data from the encrypted file
         * parts before it completes the multipart upload. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/mpuoverview.html#mpuAndPermissions">Multipart
         * upload API and permissions</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If
         * your Identity and Access Management (IAM) user or role is in the same Amazon Web
         * Services account as the KMS key, then you must have these permissions on the key
         * policy. If your IAM user or role belongs to a different account than the key,
         * then you must have the permissions on both the key policy and your IAM user or
         * role.</p> <p> For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
         * Data Using Server-Side Encryption</a>.</p> <dl> <dt>Access Permissions</dt> <dd>
         * <p>When copying an object, you can optionally specify the accounts or groups
         * that should be granted specific permissions on the new object. There are two
         * ways to grant the permissions using the request headers:</p> <ul> <li>
         * <p>Specify a canned ACL with the <code>x-amz-acl</code> request header. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly with the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
         * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
         * headers. These parameters map to the set of permissions that Amazon S3 supports
         * in an ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>.</p> </li> </ul> <p>You can use either a canned
         * ACL or specify access permissions explicitly. You cannot do both.</p> </dd>
         * <dt>Server-Side- Encryption-Specific Request Headers</dt> <dd> <p>You can
         * optionally tell Amazon S3 to encrypt data at rest using server-side encryption.
         * Server-side encryption is for data encryption at rest. Amazon S3 encrypts your
         * data as it writes it to disks in its data centers and decrypts it when you
         * access it. The option you use depends on whether you want to use Amazon Web
         * Services managed encryption keys or provide your own encryption key. </p> <ul>
         * <li> <p>Use encryption keys managed by Amazon S3 or customer managed key stored
         * in Amazon Web Services Key Management Service (Amazon Web Services KMS) – If you
         * want Amazon Web Services to manage the keys used to encrypt data, specify the
         * following headers in the request.</p> <ul> <li>
         * <p>x-amz-server-side-encryption</p> </li> <li>
         * <p>x-amz-server-side-encryption-aws-kms-key-id</p> </li> <li>
         * <p>x-amz-server-side-encryption-context</p> </li> </ul>  <p>If you specify
         * <code>x-amz-server-side-encryption:aws:kms</code>, but don't provide
         * <code>x-amz-server-side-encryption-aws-kms-key-id</code>, Amazon S3 uses the
         * Amazon Web Services managed key in Amazon Web Services KMS to protect the
         * data.</p>   <p>All GET and PUT requests for an object
         * protected by Amazon Web Services KMS fail if you don't make them with SSL or by
         * using SigV4.</p>  <p>For more information about server-side
         * encryption with KMS key (SSE-KMS), see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">Protecting
         * Data Using Server-Side Encryption with KMS keys</a>.</p> </li> <li> <p>Use
         * customer-provided encryption keys – If you want to manage your own encryption
         * keys, provide all the following headers in the request.</p> <ul> <li>
         * <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p>For more
         * information about server-side encryption with KMS keys (SSE-KMS), see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">Protecting
         * Data Using Server-Side Encryption with KMS keys</a>.</p> </li> </ul> </dd>
         * <dt>Access-Control-List (ACL)-Specific Request Headers</dt> <dd> <p>You also can
         * use the following access control–related headers with this operation. By
         * default, all objects are private. Only the owner has full access control. When
         * adding a new object, you can grant permissions to individual Amazon Web Services
         * accounts or to predefined groups defined by Amazon S3. These permissions are
         * then added to the access control list (ACL) on the object. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using
         * ACLs</a>. With this operation, you can grant access permissions using one of the
         * following two methods:</p> <ul> <li> <p>Specify a canned ACL
         * (<code>x-amz-acl</code>) — Amazon S3 supports a set of predefined ACLs, known as
         * <i>canned ACLs</i>. Each canned ACL has a predefined set of grantees and
         * permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly — To explicitly
         * grant access permissions to specific Amazon Web Services accounts or groups, use
         * the following headers. Each header maps to specific permissions that Amazon S3
         * supports in an ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>. In the header, you specify a list of grantees
         * who get the specific permission. To grant permissions explicitly, use:</p> <ul>
         * <li> <p>x-amz-grant-read</p> </li> <li> <p>x-amz-grant-write</p> </li> <li>
         * <p>x-amz-grant-read-acp</p> </li> <li> <p>x-amz-grant-write-acp</p> </li> <li>
         * <p>x-amz-grant-full-control</p> </li> </ul> <p>You specify each grantee as a
         * type=value pair, where the type is one of the following:</p> <ul> <li> <p>
         * <code>id</code> – if the value specified is the canonical user ID of an Amazon
         * Web Services account</p> </li> <li> <p> <code>uri</code> – if you are granting
         * permissions to a predefined group</p> </li> <li> <p> <code>emailAddress</code> –
         * if the value specified is the email address of an Amazon Web Services
         * account</p>  <p>Using email addresses to specify a grantee is only
         * supported in the following Amazon Web Services Regions: </p> <ul> <li> <p>US
         * East (N. Virginia)</p> </li> <li> <p>US West (N. California)</p> </li> <li> <p>
         * US West (Oregon)</p> </li> <li> <p> Asia Pacific (Singapore)</p> </li> <li>
         * <p>Asia Pacific (Sydney)</p> </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li>
         * <p>Europe (Ireland)</p> </li> <li> <p>South America (São Paulo)</p> </li> </ul>
         * <p>For a list of all the Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-read</code> header
         * grants the Amazon Web Services accounts identified by account IDs permissions to
         * read object data and its metadata:</p> <p> <code>x-amz-grant-read:
         * id="11112222333", id="444455556666" </code> </p> </li> </ul> </dd> </dl> <p>The
         * following operations are related to <code>CreateMultipartUpload</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CreateMultipartUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMultipartUploadOutcomeCallable CreateMultipartUploadCallable(const Model::CreateMultipartUploadRequest& request) const;

        /**
         * <p>This action initiates a multipart upload and returns an upload ID. This
         * upload ID is used to associate all of the parts in the specific multipart
         * upload. You specify this upload ID in each of your subsequent upload part
         * requests (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>).
         * You also include this upload ID in the final request to either complete or abort
         * the multipart upload request.</p> <p>For more information about multipart
         * uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart
         * Upload Overview</a>.</p> <p>If you have configured a lifecycle rule to abort
         * incomplete multipart uploads, the upload must complete within the number of days
         * specified in the bucket lifecycle configuration. Otherwise, the incomplete
         * multipart upload becomes eligible for an abort action and Amazon S3 aborts the
         * multipart upload. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html#mpu-abort-incomplete-mpu-lifecycle-config">Aborting
         * Incomplete Multipart Uploads Using a Bucket Lifecycle Policy</a>.</p> <p>For
         * information about the permissions required to use the multipart upload API, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>For request signing, multipart upload is just
         * a series of regular requests. You initiate a multipart upload, send one or more
         * requests to upload parts, and then complete the multipart upload process. You
         * sign each request individually. There is nothing special about signing multipart
         * upload requests. For more information about signing, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
         * Requests (Amazon Web Services Signature Version 4)</a>.</p>  <p> After you
         * initiate a multipart upload and upload one or more parts, to stop being charged
         * for storing the uploaded parts, you must either complete or abort the multipart
         * upload. Amazon S3 frees up the space used to store the parts and stop charging
         * you for storing them only after you either complete or abort a multipart upload.
         * </p>  <p>You can optionally request server-side encryption. For
         * server-side encryption, Amazon S3 encrypts your data as it writes it to disks in
         * its data centers and decrypts it when you access it. You can provide your own
         * encryption key, or use Amazon Web Services KMS keys or Amazon S3-managed
         * encryption keys. If you choose to provide your own encryption key, the request
         * headers you provide in <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a>
         * requests must match the headers you used in the request to initiate the upload
         * by using <code>CreateMultipartUpload</code>. </p> <p>To perform a multipart
         * upload with encryption using an Amazon Web Services KMS key, the requester must
         * have permission to the <code>kms:Decrypt</code> and
         * <code>kms:GenerateDataKey*</code> actions on the key. These permissions are
         * required because Amazon S3 must decrypt and read data from the encrypted file
         * parts before it completes the multipart upload. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/mpuoverview.html#mpuAndPermissions">Multipart
         * upload API and permissions</a> in the <i>Amazon S3 User Guide</i>.</p> <p>If
         * your Identity and Access Management (IAM) user or role is in the same Amazon Web
         * Services account as the KMS key, then you must have these permissions on the key
         * policy. If your IAM user or role belongs to a different account than the key,
         * then you must have the permissions on both the key policy and your IAM user or
         * role.</p> <p> For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
         * Data Using Server-Side Encryption</a>.</p> <dl> <dt>Access Permissions</dt> <dd>
         * <p>When copying an object, you can optionally specify the accounts or groups
         * that should be granted specific permissions on the new object. There are two
         * ways to grant the permissions using the request headers:</p> <ul> <li>
         * <p>Specify a canned ACL with the <code>x-amz-acl</code> request header. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly with the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
         * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
         * headers. These parameters map to the set of permissions that Amazon S3 supports
         * in an ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>.</p> </li> </ul> <p>You can use either a canned
         * ACL or specify access permissions explicitly. You cannot do both.</p> </dd>
         * <dt>Server-Side- Encryption-Specific Request Headers</dt> <dd> <p>You can
         * optionally tell Amazon S3 to encrypt data at rest using server-side encryption.
         * Server-side encryption is for data encryption at rest. Amazon S3 encrypts your
         * data as it writes it to disks in its data centers and decrypts it when you
         * access it. The option you use depends on whether you want to use Amazon Web
         * Services managed encryption keys or provide your own encryption key. </p> <ul>
         * <li> <p>Use encryption keys managed by Amazon S3 or customer managed key stored
         * in Amazon Web Services Key Management Service (Amazon Web Services KMS) – If you
         * want Amazon Web Services to manage the keys used to encrypt data, specify the
         * following headers in the request.</p> <ul> <li>
         * <p>x-amz-server-side-encryption</p> </li> <li>
         * <p>x-amz-server-side-encryption-aws-kms-key-id</p> </li> <li>
         * <p>x-amz-server-side-encryption-context</p> </li> </ul>  <p>If you specify
         * <code>x-amz-server-side-encryption:aws:kms</code>, but don't provide
         * <code>x-amz-server-side-encryption-aws-kms-key-id</code>, Amazon S3 uses the
         * Amazon Web Services managed key in Amazon Web Services KMS to protect the
         * data.</p>   <p>All GET and PUT requests for an object
         * protected by Amazon Web Services KMS fail if you don't make them with SSL or by
         * using SigV4.</p>  <p>For more information about server-side
         * encryption with KMS key (SSE-KMS), see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">Protecting
         * Data Using Server-Side Encryption with KMS keys</a>.</p> </li> <li> <p>Use
         * customer-provided encryption keys – If you want to manage your own encryption
         * keys, provide all the following headers in the request.</p> <ul> <li>
         * <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p>For more
         * information about server-side encryption with KMS keys (SSE-KMS), see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">Protecting
         * Data Using Server-Side Encryption with KMS keys</a>.</p> </li> </ul> </dd>
         * <dt>Access-Control-List (ACL)-Specific Request Headers</dt> <dd> <p>You also can
         * use the following access control–related headers with this operation. By
         * default, all objects are private. Only the owner has full access control. When
         * adding a new object, you can grant permissions to individual Amazon Web Services
         * accounts or to predefined groups defined by Amazon S3. These permissions are
         * then added to the access control list (ACL) on the object. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using
         * ACLs</a>. With this operation, you can grant access permissions using one of the
         * following two methods:</p> <ul> <li> <p>Specify a canned ACL
         * (<code>x-amz-acl</code>) — Amazon S3 supports a set of predefined ACLs, known as
         * <i>canned ACLs</i>. Each canned ACL has a predefined set of grantees and
         * permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly — To explicitly
         * grant access permissions to specific Amazon Web Services accounts or groups, use
         * the following headers. Each header maps to specific permissions that Amazon S3
         * supports in an ACL. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>. In the header, you specify a list of grantees
         * who get the specific permission. To grant permissions explicitly, use:</p> <ul>
         * <li> <p>x-amz-grant-read</p> </li> <li> <p>x-amz-grant-write</p> </li> <li>
         * <p>x-amz-grant-read-acp</p> </li> <li> <p>x-amz-grant-write-acp</p> </li> <li>
         * <p>x-amz-grant-full-control</p> </li> </ul> <p>You specify each grantee as a
         * type=value pair, where the type is one of the following:</p> <ul> <li> <p>
         * <code>id</code> – if the value specified is the canonical user ID of an Amazon
         * Web Services account</p> </li> <li> <p> <code>uri</code> – if you are granting
         * permissions to a predefined group</p> </li> <li> <p> <code>emailAddress</code> –
         * if the value specified is the email address of an Amazon Web Services
         * account</p>  <p>Using email addresses to specify a grantee is only
         * supported in the following Amazon Web Services Regions: </p> <ul> <li> <p>US
         * East (N. Virginia)</p> </li> <li> <p>US West (N. California)</p> </li> <li> <p>
         * US West (Oregon)</p> </li> <li> <p> Asia Pacific (Singapore)</p> </li> <li>
         * <p>Asia Pacific (Sydney)</p> </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li>
         * <p>Europe (Ireland)</p> </li> <li> <p>South America (São Paulo)</p> </li> </ul>
         * <p>For a list of all the Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-read</code> header
         * grants the Amazon Web Services accounts identified by account IDs permissions to
         * read object data and its metadata:</p> <p> <code>x-amz-grant-read:
         * id="11112222333", id="444455556666" </code> </p> </li> </ul> </dd> </dl> <p>The
         * following operations are related to <code>CreateMultipartUpload</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CreateMultipartUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMultipartUploadAsync(const Model::CreateMultipartUploadRequest& request, const CreateMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the S3 bucket. All objects (including all object versions and delete
         * markers) in the bucket must be deleted before the bucket itself can be
         * deleted.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucket">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteBucketOutcome DeleteBucket(const Model::DeleteBucketRequest& request) const;

        /**
         * <p>Deletes the S3 bucket. All objects (including all object versions and delete
         * markers) in the bucket must be deleted before the bucket itself can be
         * deleted.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucket">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketOutcomeCallable DeleteBucketCallable(const Model::DeleteBucketRequest& request) const;

        /**
         * <p>Deletes the S3 bucket. All objects (including all object versions and delete
         * markers) in the bucket must be deleted before the bucket itself can be
         * deleted.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucket">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketAsync(const Model::DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an analytics configuration for the bucket (specified by the analytics
         * configuration ID).</p> <p>To use this operation, you must have permissions to
         * perform the <code>s3:PutAnalyticsConfiguration</code> action. The bucket owner
         * has this permission by default. The bucket owner can grant this permission to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 analytics feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a>. </p> <p>The following operations are
         * related to <code>DeleteBucketAnalyticsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketAnalyticsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketAnalyticsConfigurationOutcome DeleteBucketAnalyticsConfiguration(const Model::DeleteBucketAnalyticsConfigurationRequest& request) const;

        /**
         * <p>Deletes an analytics configuration for the bucket (specified by the analytics
         * configuration ID).</p> <p>To use this operation, you must have permissions to
         * perform the <code>s3:PutAnalyticsConfiguration</code> action. The bucket owner
         * has this permission by default. The bucket owner can grant this permission to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 analytics feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a>. </p> <p>The following operations are
         * related to <code>DeleteBucketAnalyticsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketAnalyticsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketAnalyticsConfigurationOutcomeCallable DeleteBucketAnalyticsConfigurationCallable(const Model::DeleteBucketAnalyticsConfigurationRequest& request) const;

        /**
         * <p>Deletes an analytics configuration for the bucket (specified by the analytics
         * configuration ID).</p> <p>To use this operation, you must have permissions to
         * perform the <code>s3:PutAnalyticsConfiguration</code> action. The bucket owner
         * has this permission by default. The bucket owner can grant this permission to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 analytics feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a>. </p> <p>The following operations are
         * related to <code>DeleteBucketAnalyticsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketAnalyticsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketAnalyticsConfigurationAsync(const Model::DeleteBucketAnalyticsConfigurationRequest& request, const DeleteBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the <code>cors</code> configuration information set for the
         * bucket.</p> <p>To use this operation, you must have permission to perform the
         * <code>s3:PutBucketCORS</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. </p> <p>For information about
         * <code>cors</code>, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html">Enabling
         * Cross-Origin Resource Sharing</a> in the <i>Amazon S3 User Guide</i>.</p> <p
         * class="title"> <b>Related Resources:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketCors.html">PutBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTOPTIONSobject.html">RESTOPTIONSobject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketCors">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketCorsOutcome DeleteBucketCors(const Model::DeleteBucketCorsRequest& request) const;

        /**
         * <p>Deletes the <code>cors</code> configuration information set for the
         * bucket.</p> <p>To use this operation, you must have permission to perform the
         * <code>s3:PutBucketCORS</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. </p> <p>For information about
         * <code>cors</code>, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html">Enabling
         * Cross-Origin Resource Sharing</a> in the <i>Amazon S3 User Guide</i>.</p> <p
         * class="title"> <b>Related Resources:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketCors.html">PutBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTOPTIONSobject.html">RESTOPTIONSobject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketCors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketCorsOutcomeCallable DeleteBucketCorsCallable(const Model::DeleteBucketCorsRequest& request) const;

        /**
         * <p>Deletes the <code>cors</code> configuration information set for the
         * bucket.</p> <p>To use this operation, you must have permission to perform the
         * <code>s3:PutBucketCORS</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. </p> <p>For information about
         * <code>cors</code>, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html">Enabling
         * Cross-Origin Resource Sharing</a> in the <i>Amazon S3 User Guide</i>.</p> <p
         * class="title"> <b>Related Resources:</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketCors.html">PutBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTOPTIONSobject.html">RESTOPTIONSobject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketCors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketCorsAsync(const Model::DeleteBucketCorsRequest& request, const DeleteBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This implementation of the DELETE action removes default encryption from the
         * bucket. For information about the Amazon S3 default encryption feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
         * S3 Default Bucket Encryption</a> in the <i>Amazon S3 User Guide</i>.</p> <p>To
         * use this operation, you must have permissions to perform the
         * <code>s3:PutEncryptionConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketEncryption.html">PutBucketEncryption</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketEncryption.html">GetBucketEncryption</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketEncryption">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketEncryptionOutcome DeleteBucketEncryption(const Model::DeleteBucketEncryptionRequest& request) const;

        /**
         * <p>This implementation of the DELETE action removes default encryption from the
         * bucket. For information about the Amazon S3 default encryption feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
         * S3 Default Bucket Encryption</a> in the <i>Amazon S3 User Guide</i>.</p> <p>To
         * use this operation, you must have permissions to perform the
         * <code>s3:PutEncryptionConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketEncryption.html">PutBucketEncryption</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketEncryption.html">GetBucketEncryption</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketEncryption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketEncryptionOutcomeCallable DeleteBucketEncryptionCallable(const Model::DeleteBucketEncryptionRequest& request) const;

        /**
         * <p>This implementation of the DELETE action removes default encryption from the
         * bucket. For information about the Amazon S3 default encryption feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
         * S3 Default Bucket Encryption</a> in the <i>Amazon S3 User Guide</i>.</p> <p>To
         * use this operation, you must have permissions to perform the
         * <code>s3:PutEncryptionConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketEncryption.html">PutBucketEncryption</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketEncryption.html">GetBucketEncryption</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketEncryption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketEncryptionAsync(const Model::DeleteBucketEncryptionRequest& request, const DeleteBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the S3 Intelligent-Tiering configuration from the specified
         * bucket.</p> <p>The S3 Intelligent-Tiering storage class is designed to optimize
         * storage costs by automatically moving data to the most cost-effective storage
         * access tier, without performance impact or operational overhead. S3
         * Intelligent-Tiering delivers automatic cost savings in two low latency and high
         * throughput access tiers. For data that can be accessed asynchronously, you can
         * choose to activate automatic archiving capabilities within the S3
         * Intelligent-Tiering storage class.</p> <p>The S3 Intelligent-Tiering storage
         * class is the ideal storage class for data with unknown, changing, or
         * unpredictable access patterns, independent of object size or retention period.
         * If the size of an object is less than 128 KB, it is not eligible for
         * auto-tiering. Smaller objects can be stored, but they are always charged at the
         * Frequent Access tier rates in the S3 Intelligent-Tiering storage class.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>DeleteBucketIntelligentTieringConfiguration</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketIntelligentTieringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketIntelligentTieringConfigurationOutcome DeleteBucketIntelligentTieringConfiguration(const Model::DeleteBucketIntelligentTieringConfigurationRequest& request) const;

        /**
         * <p>Deletes the S3 Intelligent-Tiering configuration from the specified
         * bucket.</p> <p>The S3 Intelligent-Tiering storage class is designed to optimize
         * storage costs by automatically moving data to the most cost-effective storage
         * access tier, without performance impact or operational overhead. S3
         * Intelligent-Tiering delivers automatic cost savings in two low latency and high
         * throughput access tiers. For data that can be accessed asynchronously, you can
         * choose to activate automatic archiving capabilities within the S3
         * Intelligent-Tiering storage class.</p> <p>The S3 Intelligent-Tiering storage
         * class is the ideal storage class for data with unknown, changing, or
         * unpredictable access patterns, independent of object size or retention period.
         * If the size of an object is less than 128 KB, it is not eligible for
         * auto-tiering. Smaller objects can be stored, but they are always charged at the
         * Frequent Access tier rates in the S3 Intelligent-Tiering storage class.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>DeleteBucketIntelligentTieringConfiguration</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketIntelligentTieringConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketIntelligentTieringConfigurationOutcomeCallable DeleteBucketIntelligentTieringConfigurationCallable(const Model::DeleteBucketIntelligentTieringConfigurationRequest& request) const;

        /**
         * <p>Deletes the S3 Intelligent-Tiering configuration from the specified
         * bucket.</p> <p>The S3 Intelligent-Tiering storage class is designed to optimize
         * storage costs by automatically moving data to the most cost-effective storage
         * access tier, without performance impact or operational overhead. S3
         * Intelligent-Tiering delivers automatic cost savings in two low latency and high
         * throughput access tiers. For data that can be accessed asynchronously, you can
         * choose to activate automatic archiving capabilities within the S3
         * Intelligent-Tiering storage class.</p> <p>The S3 Intelligent-Tiering storage
         * class is the ideal storage class for data with unknown, changing, or
         * unpredictable access patterns, independent of object size or retention period.
         * If the size of an object is less than 128 KB, it is not eligible for
         * auto-tiering. Smaller objects can be stored, but they are always charged at the
         * Frequent Access tier rates in the S3 Intelligent-Tiering storage class.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>DeleteBucketIntelligentTieringConfiguration</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketIntelligentTieringConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketIntelligentTieringConfigurationAsync(const Model::DeleteBucketIntelligentTieringConfigurationRequest& request, const DeleteBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an inventory configuration (identified by the inventory ID) from the
         * bucket.</p> <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutInventoryConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 inventory feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a>.</p> <p>Operations related to
         * <code>DeleteBucketInventoryConfiguration</code> include: </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketInventoryConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketInventoryConfigurationOutcome DeleteBucketInventoryConfiguration(const Model::DeleteBucketInventoryConfigurationRequest& request) const;

        /**
         * <p>Deletes an inventory configuration (identified by the inventory ID) from the
         * bucket.</p> <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutInventoryConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 inventory feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a>.</p> <p>Operations related to
         * <code>DeleteBucketInventoryConfiguration</code> include: </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketInventoryConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketInventoryConfigurationOutcomeCallable DeleteBucketInventoryConfigurationCallable(const Model::DeleteBucketInventoryConfigurationRequest& request) const;

        /**
         * <p>Deletes an inventory configuration (identified by the inventory ID) from the
         * bucket.</p> <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutInventoryConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 inventory feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a>.</p> <p>Operations related to
         * <code>DeleteBucketInventoryConfiguration</code> include: </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketInventoryConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketInventoryConfigurationAsync(const Model::DeleteBucketInventoryConfigurationRequest& request, const DeleteBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the lifecycle configuration from the specified bucket. Amazon S3
         * removes all the lifecycle configuration rules in the lifecycle subresource
         * associated with the bucket. Your objects never expire, and Amazon S3 no longer
         * automatically deletes any objects on the basis of rules contained in the deleted
         * lifecycle configuration.</p> <p>To use this operation, you must have permission
         * to perform the <code>s3:PutLifecycleConfiguration</code> action. By default, the
         * bucket owner has this permission and the bucket owner can grant this permission
         * to others.</p> <p>There is usually some time lag before lifecycle configuration
         * deletion is fully propagated to all the Amazon S3 systems.</p> <p>For more
         * information about the object expiration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
         * to Describe Lifecycle Actions</a>.</p> <p>Related actions include:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketLifecycle">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketLifecycleOutcome DeleteBucketLifecycle(const Model::DeleteBucketLifecycleRequest& request) const;

        /**
         * <p>Deletes the lifecycle configuration from the specified bucket. Amazon S3
         * removes all the lifecycle configuration rules in the lifecycle subresource
         * associated with the bucket. Your objects never expire, and Amazon S3 no longer
         * automatically deletes any objects on the basis of rules contained in the deleted
         * lifecycle configuration.</p> <p>To use this operation, you must have permission
         * to perform the <code>s3:PutLifecycleConfiguration</code> action. By default, the
         * bucket owner has this permission and the bucket owner can grant this permission
         * to others.</p> <p>There is usually some time lag before lifecycle configuration
         * deletion is fully propagated to all the Amazon S3 systems.</p> <p>For more
         * information about the object expiration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
         * to Describe Lifecycle Actions</a>.</p> <p>Related actions include:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketLifecycle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketLifecycleOutcomeCallable DeleteBucketLifecycleCallable(const Model::DeleteBucketLifecycleRequest& request) const;

        /**
         * <p>Deletes the lifecycle configuration from the specified bucket. Amazon S3
         * removes all the lifecycle configuration rules in the lifecycle subresource
         * associated with the bucket. Your objects never expire, and Amazon S3 no longer
         * automatically deletes any objects on the basis of rules contained in the deleted
         * lifecycle configuration.</p> <p>To use this operation, you must have permission
         * to perform the <code>s3:PutLifecycleConfiguration</code> action. By default, the
         * bucket owner has this permission and the bucket owner can grant this permission
         * to others.</p> <p>There is usually some time lag before lifecycle configuration
         * deletion is fully propagated to all the Amazon S3 systems.</p> <p>For more
         * information about the object expiration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html#intro-lifecycle-rules-actions">Elements
         * to Describe Lifecycle Actions</a>.</p> <p>Related actions include:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketLifecycle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketLifecycleAsync(const Model::DeleteBucketLifecycleRequest& request, const DeleteBucketLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a metrics configuration for the Amazon CloudWatch request metrics
         * (specified by the metrics configuration ID) from the bucket. Note that this
         * doesn't include the daily storage metrics.</p> <p> To use this operation, you
         * must have permissions to perform the <code>s3:PutMetricsConfiguration</code>
         * action. The bucket owner has this permission by default. The bucket owner can
         * grant this permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * CloudWatch request metrics for Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>. </p> <p>The following operations are related
         * to <code>DeleteBucketMetricsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketMetricsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketMetricsConfigurationOutcome DeleteBucketMetricsConfiguration(const Model::DeleteBucketMetricsConfigurationRequest& request) const;

        /**
         * <p>Deletes a metrics configuration for the Amazon CloudWatch request metrics
         * (specified by the metrics configuration ID) from the bucket. Note that this
         * doesn't include the daily storage metrics.</p> <p> To use this operation, you
         * must have permissions to perform the <code>s3:PutMetricsConfiguration</code>
         * action. The bucket owner has this permission by default. The bucket owner can
         * grant this permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * CloudWatch request metrics for Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>. </p> <p>The following operations are related
         * to <code>DeleteBucketMetricsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketMetricsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketMetricsConfigurationOutcomeCallable DeleteBucketMetricsConfigurationCallable(const Model::DeleteBucketMetricsConfigurationRequest& request) const;

        /**
         * <p>Deletes a metrics configuration for the Amazon CloudWatch request metrics
         * (specified by the metrics configuration ID) from the bucket. Note that this
         * doesn't include the daily storage metrics.</p> <p> To use this operation, you
         * must have permissions to perform the <code>s3:PutMetricsConfiguration</code>
         * action. The bucket owner has this permission by default. The bucket owner can
         * grant this permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * CloudWatch request metrics for Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>. </p> <p>The following operations are related
         * to <code>DeleteBucketMetricsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketMetricsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketMetricsConfigurationAsync(const Model::DeleteBucketMetricsConfigurationRequest& request, const DeleteBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes <code>OwnershipControls</code> for an Amazon S3 bucket. To use this
         * operation, you must have the <code>s3:PutBucketOwnershipControls</code>
         * permission. For more information about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p> <p>For information about Amazon S3 Object
         * Ownership, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using
         * Object Ownership</a>. </p> <p>The following operations are related to
         * <code>DeleteBucketOwnershipControls</code>:</p> <ul> <li> <p>
         * <a>GetBucketOwnershipControls</a> </p> </li> <li> <p>
         * <a>PutBucketOwnershipControls</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketOwnershipControls">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketOwnershipControlsOutcome DeleteBucketOwnershipControls(const Model::DeleteBucketOwnershipControlsRequest& request) const;

        /**
         * <p>Removes <code>OwnershipControls</code> for an Amazon S3 bucket. To use this
         * operation, you must have the <code>s3:PutBucketOwnershipControls</code>
         * permission. For more information about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p> <p>For information about Amazon S3 Object
         * Ownership, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using
         * Object Ownership</a>. </p> <p>The following operations are related to
         * <code>DeleteBucketOwnershipControls</code>:</p> <ul> <li> <p>
         * <a>GetBucketOwnershipControls</a> </p> </li> <li> <p>
         * <a>PutBucketOwnershipControls</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketOwnershipControls">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketOwnershipControlsOutcomeCallable DeleteBucketOwnershipControlsCallable(const Model::DeleteBucketOwnershipControlsRequest& request) const;

        /**
         * <p>Removes <code>OwnershipControls</code> for an Amazon S3 bucket. To use this
         * operation, you must have the <code>s3:PutBucketOwnershipControls</code>
         * permission. For more information about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p> <p>For information about Amazon S3 Object
         * Ownership, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using
         * Object Ownership</a>. </p> <p>The following operations are related to
         * <code>DeleteBucketOwnershipControls</code>:</p> <ul> <li> <p>
         * <a>GetBucketOwnershipControls</a> </p> </li> <li> <p>
         * <a>PutBucketOwnershipControls</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketOwnershipControls">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketOwnershipControlsAsync(const Model::DeleteBucketOwnershipControlsRequest& request, const DeleteBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This implementation of the DELETE action uses the policy subresource to
         * delete the policy of a specified bucket. If you are using an identity other than
         * the root user of the Amazon Web Services account that owns the bucket, the
         * calling identity must have the <code>DeleteBucketPolicy</code> permissions on
         * the specified bucket and belong to the bucket owner's account to use this
         * operation. </p> <p>If you don't have <code>DeleteBucketPolicy</code>
         * permissions, Amazon S3 returns a <code>403 Access Denied</code> error. If you
         * have the correct permissions, but you're not using an identity that belongs to
         * the bucket owner's account, Amazon S3 returns a <code>405 Method Not
         * Allowed</code> error. </p>  <p>As a security precaution, the root
         * user of the Amazon Web Services account that owns a bucket can always use this
         * operation, even if the policy explicitly denies the root user the ability to
         * perform this action.</p>  <p>For more information about bucket
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and UserPolicies</a>. </p> <p>The following operations are
         * related to <code>DeleteBucketPolicy</code> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketPolicyOutcome DeleteBucketPolicy(const Model::DeleteBucketPolicyRequest& request) const;

        /**
         * <p>This implementation of the DELETE action uses the policy subresource to
         * delete the policy of a specified bucket. If you are using an identity other than
         * the root user of the Amazon Web Services account that owns the bucket, the
         * calling identity must have the <code>DeleteBucketPolicy</code> permissions on
         * the specified bucket and belong to the bucket owner's account to use this
         * operation. </p> <p>If you don't have <code>DeleteBucketPolicy</code>
         * permissions, Amazon S3 returns a <code>403 Access Denied</code> error. If you
         * have the correct permissions, but you're not using an identity that belongs to
         * the bucket owner's account, Amazon S3 returns a <code>405 Method Not
         * Allowed</code> error. </p>  <p>As a security precaution, the root
         * user of the Amazon Web Services account that owns a bucket can always use this
         * operation, even if the policy explicitly denies the root user the ability to
         * perform this action.</p>  <p>For more information about bucket
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and UserPolicies</a>. </p> <p>The following operations are
         * related to <code>DeleteBucketPolicy</code> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketPolicyOutcomeCallable DeleteBucketPolicyCallable(const Model::DeleteBucketPolicyRequest& request) const;

        /**
         * <p>This implementation of the DELETE action uses the policy subresource to
         * delete the policy of a specified bucket. If you are using an identity other than
         * the root user of the Amazon Web Services account that owns the bucket, the
         * calling identity must have the <code>DeleteBucketPolicy</code> permissions on
         * the specified bucket and belong to the bucket owner's account to use this
         * operation. </p> <p>If you don't have <code>DeleteBucketPolicy</code>
         * permissions, Amazon S3 returns a <code>403 Access Denied</code> error. If you
         * have the correct permissions, but you're not using an identity that belongs to
         * the bucket owner's account, Amazon S3 returns a <code>405 Method Not
         * Allowed</code> error. </p>  <p>As a security precaution, the root
         * user of the Amazon Web Services account that owns a bucket can always use this
         * operation, even if the policy explicitly denies the root user the ability to
         * perform this action.</p>  <p>For more information about bucket
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and UserPolicies</a>. </p> <p>The following operations are
         * related to <code>DeleteBucketPolicy</code> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketPolicyAsync(const Model::DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes the replication configuration from the bucket.</p> <p>To use this
         * operation, you must have permissions to perform the
         * <code>s3:PutReplicationConfiguration</code> action. The bucket owner has these
         * permissions by default and can grant it to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>. </p>  <p>It can take a
         * while for the deletion of a replication configuration to fully propagate.</p>
         *  <p> For information about replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>The following operations are related
         * to <code>DeleteBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketReplication.html">PutBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketReplication.html">GetBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketReplicationOutcome DeleteBucketReplication(const Model::DeleteBucketReplicationRequest& request) const;

        /**
         * <p> Deletes the replication configuration from the bucket.</p> <p>To use this
         * operation, you must have permissions to perform the
         * <code>s3:PutReplicationConfiguration</code> action. The bucket owner has these
         * permissions by default and can grant it to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>. </p>  <p>It can take a
         * while for the deletion of a replication configuration to fully propagate.</p>
         *  <p> For information about replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>The following operations are related
         * to <code>DeleteBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketReplication.html">PutBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketReplication.html">GetBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketReplicationOutcomeCallable DeleteBucketReplicationCallable(const Model::DeleteBucketReplicationRequest& request) const;

        /**
         * <p> Deletes the replication configuration from the bucket.</p> <p>To use this
         * operation, you must have permissions to perform the
         * <code>s3:PutReplicationConfiguration</code> action. The bucket owner has these
         * permissions by default and can grant it to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>. </p>  <p>It can take a
         * while for the deletion of a replication configuration to fully propagate.</p>
         *  <p> For information about replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>The following operations are related
         * to <code>DeleteBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketReplication.html">PutBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketReplication.html">GetBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketReplicationAsync(const Model::DeleteBucketReplicationRequest& request, const DeleteBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the tags from the bucket.</p> <p>To use this operation, you must have
         * permission to perform the <code>s3:PutBucketTagging</code> action. By default,
         * the bucket owner has this permission and can grant this permission to others.
         * </p> <p>The following operations are related to
         * <code>DeleteBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketTaggingOutcome DeleteBucketTagging(const Model::DeleteBucketTaggingRequest& request) const;

        /**
         * <p>Deletes the tags from the bucket.</p> <p>To use this operation, you must have
         * permission to perform the <code>s3:PutBucketTagging</code> action. By default,
         * the bucket owner has this permission and can grant this permission to others.
         * </p> <p>The following operations are related to
         * <code>DeleteBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketTaggingOutcomeCallable DeleteBucketTaggingCallable(const Model::DeleteBucketTaggingRequest& request) const;

        /**
         * <p>Deletes the tags from the bucket.</p> <p>To use this operation, you must have
         * permission to perform the <code>s3:PutBucketTagging</code> action. By default,
         * the bucket owner has this permission and can grant this permission to others.
         * </p> <p>The following operations are related to
         * <code>DeleteBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketTaggingAsync(const Model::DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action removes the website configuration for a bucket. Amazon S3 returns
         * a <code>200 OK</code> response upon successfully deleting a website
         * configuration on the specified bucket. You will get a <code>200 OK</code>
         * response if the website configuration you are trying to delete does not exist on
         * the bucket. Amazon S3 returns a <code>404</code> response if the bucket
         * specified in the request does not exist.</p> <p>This DELETE action requires the
         * <code>S3:DeleteBucketWebsite</code> permission. By default, only the bucket
         * owner can delete the website configuration attached to a bucket. However, bucket
         * owners can grant other users permission to delete the website configuration by
         * writing a bucket policy granting them the <code>S3:DeleteBucketWebsite</code>
         * permission. </p> <p>For more information about hosting websites, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
         * Websites on Amazon S3</a>. </p> <p>The following operations are related to
         * <code>DeleteBucketWebsite</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketWebsite.html">GetBucketWebsite</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketWebsite.html">PutBucketWebsite</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketWebsite">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketWebsiteOutcome DeleteBucketWebsite(const Model::DeleteBucketWebsiteRequest& request) const;

        /**
         * <p>This action removes the website configuration for a bucket. Amazon S3 returns
         * a <code>200 OK</code> response upon successfully deleting a website
         * configuration on the specified bucket. You will get a <code>200 OK</code>
         * response if the website configuration you are trying to delete does not exist on
         * the bucket. Amazon S3 returns a <code>404</code> response if the bucket
         * specified in the request does not exist.</p> <p>This DELETE action requires the
         * <code>S3:DeleteBucketWebsite</code> permission. By default, only the bucket
         * owner can delete the website configuration attached to a bucket. However, bucket
         * owners can grant other users permission to delete the website configuration by
         * writing a bucket policy granting them the <code>S3:DeleteBucketWebsite</code>
         * permission. </p> <p>For more information about hosting websites, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
         * Websites on Amazon S3</a>. </p> <p>The following operations are related to
         * <code>DeleteBucketWebsite</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketWebsite.html">GetBucketWebsite</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketWebsite.html">PutBucketWebsite</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketWebsite">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketWebsiteOutcomeCallable DeleteBucketWebsiteCallable(const Model::DeleteBucketWebsiteRequest& request) const;

        /**
         * <p>This action removes the website configuration for a bucket. Amazon S3 returns
         * a <code>200 OK</code> response upon successfully deleting a website
         * configuration on the specified bucket. You will get a <code>200 OK</code>
         * response if the website configuration you are trying to delete does not exist on
         * the bucket. Amazon S3 returns a <code>404</code> response if the bucket
         * specified in the request does not exist.</p> <p>This DELETE action requires the
         * <code>S3:DeleteBucketWebsite</code> permission. By default, only the bucket
         * owner can delete the website configuration attached to a bucket. However, bucket
         * owners can grant other users permission to delete the website configuration by
         * writing a bucket policy granting them the <code>S3:DeleteBucketWebsite</code>
         * permission. </p> <p>For more information about hosting websites, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
         * Websites on Amazon S3</a>. </p> <p>The following operations are related to
         * <code>DeleteBucketWebsite</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketWebsite.html">GetBucketWebsite</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketWebsite.html">PutBucketWebsite</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteBucketWebsite">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketWebsiteAsync(const Model::DeleteBucketWebsiteRequest& request, const DeleteBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the null version (if there is one) of an object and inserts a delete
         * marker, which becomes the latest version of the object. If there isn't a null
         * version, Amazon S3 does not remove any objects but will still respond that the
         * command was successful.</p> <p>To remove a specific version, you must be the
         * bucket owner and you must use the version Id subresource. Using this subresource
         * permanently deletes the version. If the object deleted is a delete marker,
         * Amazon S3 sets the response header, <code>x-amz-delete-marker</code>, to true.
         * </p> <p>If the object you want to delete is in a bucket where the bucket
         * versioning configuration is MFA Delete enabled, you must include the
         * <code>x-amz-mfa</code> request header in the DELETE <code>versionId</code>
         * request. Requests that include <code>x-amz-mfa</code> must use HTTPS. </p> <p>
         * For more information about MFA Delete, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMFADelete.html">Using
         * MFA Delete</a>. To see sample requests that use versioning, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectDELETE.html#ExampleVersionObjectDelete">Sample
         * Request</a>. </p> <p>You can delete objects by explicitly calling DELETE Object
         * or configure its lifecycle (<a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>)
         * to enable Amazon S3 to remove them for you. If you want to block users or
         * accounts from removing or deleting objects from your bucket, you must deny them
         * the <code>s3:DeleteObject</code>, <code>s3:DeleteObjectVersion</code>, and
         * <code>s3:PutLifeCycleConfiguration</code> actions. </p> <p>The following action
         * is related to <code>DeleteObject</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteObject">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteObjectOutcome DeleteObject(const Model::DeleteObjectRequest& request) const;

        /**
         * <p>Removes the null version (if there is one) of an object and inserts a delete
         * marker, which becomes the latest version of the object. If there isn't a null
         * version, Amazon S3 does not remove any objects but will still respond that the
         * command was successful.</p> <p>To remove a specific version, you must be the
         * bucket owner and you must use the version Id subresource. Using this subresource
         * permanently deletes the version. If the object deleted is a delete marker,
         * Amazon S3 sets the response header, <code>x-amz-delete-marker</code>, to true.
         * </p> <p>If the object you want to delete is in a bucket where the bucket
         * versioning configuration is MFA Delete enabled, you must include the
         * <code>x-amz-mfa</code> request header in the DELETE <code>versionId</code>
         * request. Requests that include <code>x-amz-mfa</code> must use HTTPS. </p> <p>
         * For more information about MFA Delete, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMFADelete.html">Using
         * MFA Delete</a>. To see sample requests that use versioning, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectDELETE.html#ExampleVersionObjectDelete">Sample
         * Request</a>. </p> <p>You can delete objects by explicitly calling DELETE Object
         * or configure its lifecycle (<a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>)
         * to enable Amazon S3 to remove them for you. If you want to block users or
         * accounts from removing or deleting objects from your bucket, you must deny them
         * the <code>s3:DeleteObject</code>, <code>s3:DeleteObjectVersion</code>, and
         * <code>s3:PutLifeCycleConfiguration</code> actions. </p> <p>The following action
         * is related to <code>DeleteObject</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteObject">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteObjectOutcomeCallable DeleteObjectCallable(const Model::DeleteObjectRequest& request) const;

        /**
         * <p>Removes the null version (if there is one) of an object and inserts a delete
         * marker, which becomes the latest version of the object. If there isn't a null
         * version, Amazon S3 does not remove any objects but will still respond that the
         * command was successful.</p> <p>To remove a specific version, you must be the
         * bucket owner and you must use the version Id subresource. Using this subresource
         * permanently deletes the version. If the object deleted is a delete marker,
         * Amazon S3 sets the response header, <code>x-amz-delete-marker</code>, to true.
         * </p> <p>If the object you want to delete is in a bucket where the bucket
         * versioning configuration is MFA Delete enabled, you must include the
         * <code>x-amz-mfa</code> request header in the DELETE <code>versionId</code>
         * request. Requests that include <code>x-amz-mfa</code> must use HTTPS. </p> <p>
         * For more information about MFA Delete, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMFADelete.html">Using
         * MFA Delete</a>. To see sample requests that use versioning, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectDELETE.html#ExampleVersionObjectDelete">Sample
         * Request</a>. </p> <p>You can delete objects by explicitly calling DELETE Object
         * or configure its lifecycle (<a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>)
         * to enable Amazon S3 to remove them for you. If you want to block users or
         * accounts from removing or deleting objects from your bucket, you must deny them
         * the <code>s3:DeleteObject</code>, <code>s3:DeleteObjectVersion</code>, and
         * <code>s3:PutLifeCycleConfiguration</code> actions. </p> <p>The following action
         * is related to <code>DeleteObject</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteObject">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObjectAsync(const Model::DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the entire tag set from the specified object. For more information
         * about managing object tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">
         * Object Tagging</a>.</p> <p>To use this operation, you must have permission to
         * perform the <code>s3:DeleteObjectTagging</code> action.</p> <p>To delete tags of
         * a specific object version, add the <code>versionId</code> query parameter in the
         * request. You will need permission for the
         * <code>s3:DeleteObjectVersionTagging</code> action.</p> <p>The following
         * operations are related to <code>DeleteBucketMetricsConfiguration</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObjectTagging.html">PutObjectTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteObjectTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteObjectTaggingOutcome DeleteObjectTagging(const Model::DeleteObjectTaggingRequest& request) const;

        /**
         * <p>Removes the entire tag set from the specified object. For more information
         * about managing object tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">
         * Object Tagging</a>.</p> <p>To use this operation, you must have permission to
         * perform the <code>s3:DeleteObjectTagging</code> action.</p> <p>To delete tags of
         * a specific object version, add the <code>versionId</code> query parameter in the
         * request. You will need permission for the
         * <code>s3:DeleteObjectVersionTagging</code> action.</p> <p>The following
         * operations are related to <code>DeleteBucketMetricsConfiguration</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObjectTagging.html">PutObjectTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteObjectTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteObjectTaggingOutcomeCallable DeleteObjectTaggingCallable(const Model::DeleteObjectTaggingRequest& request) const;

        /**
         * <p>Removes the entire tag set from the specified object. For more information
         * about managing object tags, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">
         * Object Tagging</a>.</p> <p>To use this operation, you must have permission to
         * perform the <code>s3:DeleteObjectTagging</code> action.</p> <p>To delete tags of
         * a specific object version, add the <code>versionId</code> query parameter in the
         * request. You will need permission for the
         * <code>s3:DeleteObjectVersionTagging</code> action.</p> <p>The following
         * operations are related to <code>DeleteBucketMetricsConfiguration</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObjectTagging.html">PutObjectTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteObjectTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObjectTaggingAsync(const Model::DeleteObjectTaggingRequest& request, const DeleteObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action enables you to delete multiple objects from a bucket using a
         * single HTTP request. If you know the object keys that you want to delete, then
         * this action provides a suitable alternative to sending individual delete
         * requests, reducing per-request overhead.</p> <p>The request contains a list of
         * up to 1000 keys that you want to delete. In the XML, you provide the object key
         * names, and optionally, version IDs if you want to delete a specific version of
         * the object from a versioning-enabled bucket. For each key, Amazon S3 performs a
         * delete action and returns the result of that delete, success, or failure, in the
         * response. Note that if the object specified in the request is not found, Amazon
         * S3 returns the result as deleted.</p> <p> The action supports two modes for the
         * response: verbose and quiet. By default, the action uses verbose mode in which
         * the response includes the result of deletion of each key in your request. In
         * quiet mode the response includes only keys where the delete action encountered
         * an error. For a successful deletion, the action does not return any information
         * about the delete in the response body.</p> <p>When performing this action on an
         * MFA Delete enabled bucket, that attempts to delete any versioned objects, you
         * must include an MFA token. If you do not provide one, the entire request will
         * fail, even if there are non-versioned objects you are trying to delete. If you
         * provide an invalid token, whether there are versioned keys in the request or
         * not, the entire Multi-Object Delete request will fail. For information about MFA
         * Delete, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/Versioning.html#MultiFactorAuthenticationDelete">
         * MFA Delete</a>.</p> <p>Finally, the Content-MD5 header is required for all
         * Multi-Object Delete requests. Amazon S3 uses the header value to ensure that
         * your request body has not been altered in transit.</p> <p>The following
         * operations are related to <code>DeleteObjects</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteObjectsOutcome DeleteObjects(const Model::DeleteObjectsRequest& request) const;

        /**
         * <p>This action enables you to delete multiple objects from a bucket using a
         * single HTTP request. If you know the object keys that you want to delete, then
         * this action provides a suitable alternative to sending individual delete
         * requests, reducing per-request overhead.</p> <p>The request contains a list of
         * up to 1000 keys that you want to delete. In the XML, you provide the object key
         * names, and optionally, version IDs if you want to delete a specific version of
         * the object from a versioning-enabled bucket. For each key, Amazon S3 performs a
         * delete action and returns the result of that delete, success, or failure, in the
         * response. Note that if the object specified in the request is not found, Amazon
         * S3 returns the result as deleted.</p> <p> The action supports two modes for the
         * response: verbose and quiet. By default, the action uses verbose mode in which
         * the response includes the result of deletion of each key in your request. In
         * quiet mode the response includes only keys where the delete action encountered
         * an error. For a successful deletion, the action does not return any information
         * about the delete in the response body.</p> <p>When performing this action on an
         * MFA Delete enabled bucket, that attempts to delete any versioned objects, you
         * must include an MFA token. If you do not provide one, the entire request will
         * fail, even if there are non-versioned objects you are trying to delete. If you
         * provide an invalid token, whether there are versioned keys in the request or
         * not, the entire Multi-Object Delete request will fail. For information about MFA
         * Delete, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/Versioning.html#MultiFactorAuthenticationDelete">
         * MFA Delete</a>.</p> <p>Finally, the Content-MD5 header is required for all
         * Multi-Object Delete requests. Amazon S3 uses the header value to ensure that
         * your request body has not been altered in transit.</p> <p>The following
         * operations are related to <code>DeleteObjects</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteObjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteObjectsOutcomeCallable DeleteObjectsCallable(const Model::DeleteObjectsRequest& request) const;

        /**
         * <p>This action enables you to delete multiple objects from a bucket using a
         * single HTTP request. If you know the object keys that you want to delete, then
         * this action provides a suitable alternative to sending individual delete
         * requests, reducing per-request overhead.</p> <p>The request contains a list of
         * up to 1000 keys that you want to delete. In the XML, you provide the object key
         * names, and optionally, version IDs if you want to delete a specific version of
         * the object from a versioning-enabled bucket. For each key, Amazon S3 performs a
         * delete action and returns the result of that delete, success, or failure, in the
         * response. Note that if the object specified in the request is not found, Amazon
         * S3 returns the result as deleted.</p> <p> The action supports two modes for the
         * response: verbose and quiet. By default, the action uses verbose mode in which
         * the response includes the result of deletion of each key in your request. In
         * quiet mode the response includes only keys where the delete action encountered
         * an error. For a successful deletion, the action does not return any information
         * about the delete in the response body.</p> <p>When performing this action on an
         * MFA Delete enabled bucket, that attempts to delete any versioned objects, you
         * must include an MFA token. If you do not provide one, the entire request will
         * fail, even if there are non-versioned objects you are trying to delete. If you
         * provide an invalid token, whether there are versioned keys in the request or
         * not, the entire Multi-Object Delete request will fail. For information about MFA
         * Delete, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/Versioning.html#MultiFactorAuthenticationDelete">
         * MFA Delete</a>.</p> <p>Finally, the Content-MD5 header is required for all
         * Multi-Object Delete requests. Amazon S3 uses the header value to ensure that
         * your request body has not been altered in transit.</p> <p>The following
         * operations are related to <code>DeleteObjects</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteObjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObjectsAsync(const Model::DeleteObjectsRequest& request, const DeleteObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an Amazon S3
         * bucket. To use this operation, you must have the
         * <code>s3:PutBucketPublicAccessBlock</code> permission. For more information
         * about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>The following
         * operations are related to <code>DeletePublicAccessBlock</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicyStatus.html">GetBucketPolicyStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicAccessBlockOutcome DeletePublicAccessBlock(const Model::DeletePublicAccessBlockRequest& request) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an Amazon S3
         * bucket. To use this operation, you must have the
         * <code>s3:PutBucketPublicAccessBlock</code> permission. For more information
         * about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>The following
         * operations are related to <code>DeletePublicAccessBlock</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicyStatus.html">GetBucketPolicyStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublicAccessBlockOutcomeCallable DeletePublicAccessBlockCallable(const Model::DeletePublicAccessBlockRequest& request) const;

        /**
         * <p>Removes the <code>PublicAccessBlock</code> configuration for an Amazon S3
         * bucket. To use this operation, you must have the
         * <code>s3:PutBucketPublicAccessBlock</code> permission. For more information
         * about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>The following
         * operations are related to <code>DeletePublicAccessBlock</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicyStatus.html">GetBucketPolicyStatus</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeletePublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublicAccessBlockAsync(const Model::DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This implementation of the GET action uses the <code>accelerate</code>
         * subresource to return the Transfer Acceleration state of a bucket, which is
         * either <code>Enabled</code> or <code>Suspended</code>. Amazon S3 Transfer
         * Acceleration is a bucket-level feature that enables you to perform faster data
         * transfers to and from Amazon S3.</p> <p>To use this operation, you must have
         * permission to perform the <code>s3:GetAccelerateConfiguration</code> action. The
         * bucket owner has this permission by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p>You set the Transfer Acceleration state of an existing bucket
         * to <code>Enabled</code> or <code>Suspended</code> by using the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAccelerateConfiguration.html">PutBucketAccelerateConfiguration</a>
         * operation. </p> <p>A GET <code>accelerate</code> request does not return a state
         * value for a bucket that has no transfer acceleration state. A bucket has no
         * Transfer Acceleration state if a state has never been set on the bucket. </p>
         * <p>For more information about transfer acceleration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
         * Acceleration</a> in the Amazon S3 User Guide.</p> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAccelerateConfiguration.html">PutBucketAccelerateConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketAccelerateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketAccelerateConfigurationOutcome GetBucketAccelerateConfiguration(const Model::GetBucketAccelerateConfigurationRequest& request) const;

        /**
         * <p>This implementation of the GET action uses the <code>accelerate</code>
         * subresource to return the Transfer Acceleration state of a bucket, which is
         * either <code>Enabled</code> or <code>Suspended</code>. Amazon S3 Transfer
         * Acceleration is a bucket-level feature that enables you to perform faster data
         * transfers to and from Amazon S3.</p> <p>To use this operation, you must have
         * permission to perform the <code>s3:GetAccelerateConfiguration</code> action. The
         * bucket owner has this permission by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p>You set the Transfer Acceleration state of an existing bucket
         * to <code>Enabled</code> or <code>Suspended</code> by using the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAccelerateConfiguration.html">PutBucketAccelerateConfiguration</a>
         * operation. </p> <p>A GET <code>accelerate</code> request does not return a state
         * value for a bucket that has no transfer acceleration state. A bucket has no
         * Transfer Acceleration state if a state has never been set on the bucket. </p>
         * <p>For more information about transfer acceleration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
         * Acceleration</a> in the Amazon S3 User Guide.</p> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAccelerateConfiguration.html">PutBucketAccelerateConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketAccelerateConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketAccelerateConfigurationOutcomeCallable GetBucketAccelerateConfigurationCallable(const Model::GetBucketAccelerateConfigurationRequest& request) const;

        /**
         * <p>This implementation of the GET action uses the <code>accelerate</code>
         * subresource to return the Transfer Acceleration state of a bucket, which is
         * either <code>Enabled</code> or <code>Suspended</code>. Amazon S3 Transfer
         * Acceleration is a bucket-level feature that enables you to perform faster data
         * transfers to and from Amazon S3.</p> <p>To use this operation, you must have
         * permission to perform the <code>s3:GetAccelerateConfiguration</code> action. The
         * bucket owner has this permission by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p>You set the Transfer Acceleration state of an existing bucket
         * to <code>Enabled</code> or <code>Suspended</code> by using the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAccelerateConfiguration.html">PutBucketAccelerateConfiguration</a>
         * operation. </p> <p>A GET <code>accelerate</code> request does not return a state
         * value for a bucket that has no transfer acceleration state. A bucket has no
         * Transfer Acceleration state if a state has never been set on the bucket. </p>
         * <p>For more information about transfer acceleration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
         * Acceleration</a> in the Amazon S3 User Guide.</p> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAccelerateConfiguration.html">PutBucketAccelerateConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketAccelerateConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketAccelerateConfigurationAsync(const Model::GetBucketAccelerateConfigurationRequest& request, const GetBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This implementation of the <code>GET</code> action uses the <code>acl</code>
         * subresource to return the access control list (ACL) of a bucket. To use
         * <code>GET</code> to return the ACL of the bucket, you must have
         * <code>READ_ACP</code> access to the bucket. If <code>READ_ACP</code> permission
         * is granted to the anonymous user, you can return the ACL of the bucket without
         * using an authorization header.</p> <p class="title"> <b>Related Resources</b>
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketAcl">AWS API
         * Reference</a></p>
         */
        virtual Model::GetBucketAclOutcome GetBucketAcl(const Model::GetBucketAclRequest& request) const;

        /**
         * <p>This implementation of the <code>GET</code> action uses the <code>acl</code>
         * subresource to return the access control list (ACL) of a bucket. To use
         * <code>GET</code> to return the ACL of the bucket, you must have
         * <code>READ_ACP</code> access to the bucket. If <code>READ_ACP</code> permission
         * is granted to the anonymous user, you can return the ACL of the bucket without
         * using an authorization header.</p> <p class="title"> <b>Related Resources</b>
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketAcl">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketAclOutcomeCallable GetBucketAclCallable(const Model::GetBucketAclRequest& request) const;

        /**
         * <p>This implementation of the <code>GET</code> action uses the <code>acl</code>
         * subresource to return the access control list (ACL) of a bucket. To use
         * <code>GET</code> to return the ACL of the bucket, you must have
         * <code>READ_ACP</code> access to the bucket. If <code>READ_ACP</code> permission
         * is granted to the anonymous user, you can return the ACL of the bucket without
         * using an authorization header.</p> <p class="title"> <b>Related Resources</b>
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketAcl">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketAclAsync(const Model::GetBucketAclRequest& request, const GetBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This implementation of the GET action returns an analytics configuration
         * (identified by the analytics configuration ID) from the bucket.</p> <p>To use
         * this operation, you must have permissions to perform the
         * <code>s3:GetAnalyticsConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
         * Permissions Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>. </p> <p>For information about Amazon S3 analytics feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketAnalyticsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketAnalyticsConfigurationOutcome GetBucketAnalyticsConfiguration(const Model::GetBucketAnalyticsConfigurationRequest& request) const;

        /**
         * <p>This implementation of the GET action returns an analytics configuration
         * (identified by the analytics configuration ID) from the bucket.</p> <p>To use
         * this operation, you must have permissions to perform the
         * <code>s3:GetAnalyticsConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
         * Permissions Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>. </p> <p>For information about Amazon S3 analytics feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketAnalyticsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketAnalyticsConfigurationOutcomeCallable GetBucketAnalyticsConfigurationCallable(const Model::GetBucketAnalyticsConfigurationRequest& request) const;

        /**
         * <p>This implementation of the GET action returns an analytics configuration
         * (identified by the analytics configuration ID) from the bucket.</p> <p>To use
         * this operation, you must have permissions to perform the
         * <code>s3:GetAnalyticsConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">
         * Permissions Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>. </p> <p>For information about Amazon S3 analytics feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketAnalyticsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketAnalyticsConfigurationAsync(const Model::GetBucketAnalyticsConfigurationRequest& request, const GetBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the cors configuration information set for the bucket.</p> <p> To use
         * this operation, you must have permission to perform the s3:GetBucketCORS action.
         * By default, the bucket owner has this permission and can grant it to others.</p>
         * <p> For more information about cors, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html"> Enabling
         * Cross-Origin Resource Sharing</a>.</p> <p>The following operations are related
         * to <code>GetBucketCors</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketCors.html">PutBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketCors.html">DeleteBucketCors</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketCors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketCorsOutcome GetBucketCors(const Model::GetBucketCorsRequest& request) const;

        /**
         * <p>Returns the cors configuration information set for the bucket.</p> <p> To use
         * this operation, you must have permission to perform the s3:GetBucketCORS action.
         * By default, the bucket owner has this permission and can grant it to others.</p>
         * <p> For more information about cors, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html"> Enabling
         * Cross-Origin Resource Sharing</a>.</p> <p>The following operations are related
         * to <code>GetBucketCors</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketCors.html">PutBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketCors.html">DeleteBucketCors</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketCors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketCorsOutcomeCallable GetBucketCorsCallable(const Model::GetBucketCorsRequest& request) const;

        /**
         * <p>Returns the cors configuration information set for the bucket.</p> <p> To use
         * this operation, you must have permission to perform the s3:GetBucketCORS action.
         * By default, the bucket owner has this permission and can grant it to others.</p>
         * <p> For more information about cors, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html"> Enabling
         * Cross-Origin Resource Sharing</a>.</p> <p>The following operations are related
         * to <code>GetBucketCors</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketCors.html">PutBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketCors.html">DeleteBucketCors</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketCors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketCorsAsync(const Model::GetBucketCorsRequest& request, const GetBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the default encryption configuration for an Amazon S3 bucket. If the
         * bucket does not have a default encryption configuration, GetBucketEncryption
         * returns <code>ServerSideEncryptionConfigurationNotFoundError</code>. </p> <p>For
         * information about the Amazon S3 default encryption feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
         * S3 Default Bucket Encryption</a>.</p> <p> To use this operation, you must have
         * permission to perform the <code>s3:GetEncryptionConfiguration</code> action. The
         * bucket owner has this permission by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>The following
         * operations are related to <code>GetBucketEncryption</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketEncryption.html">PutBucketEncryption</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketEncryption.html">DeleteBucketEncryption</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketEncryption">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketEncryptionOutcome GetBucketEncryption(const Model::GetBucketEncryptionRequest& request) const;

        /**
         * <p>Returns the default encryption configuration for an Amazon S3 bucket. If the
         * bucket does not have a default encryption configuration, GetBucketEncryption
         * returns <code>ServerSideEncryptionConfigurationNotFoundError</code>. </p> <p>For
         * information about the Amazon S3 default encryption feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
         * S3 Default Bucket Encryption</a>.</p> <p> To use this operation, you must have
         * permission to perform the <code>s3:GetEncryptionConfiguration</code> action. The
         * bucket owner has this permission by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>The following
         * operations are related to <code>GetBucketEncryption</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketEncryption.html">PutBucketEncryption</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketEncryption.html">DeleteBucketEncryption</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketEncryption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketEncryptionOutcomeCallable GetBucketEncryptionCallable(const Model::GetBucketEncryptionRequest& request) const;

        /**
         * <p>Returns the default encryption configuration for an Amazon S3 bucket. If the
         * bucket does not have a default encryption configuration, GetBucketEncryption
         * returns <code>ServerSideEncryptionConfigurationNotFoundError</code>. </p> <p>For
         * information about the Amazon S3 default encryption feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
         * S3 Default Bucket Encryption</a>.</p> <p> To use this operation, you must have
         * permission to perform the <code>s3:GetEncryptionConfiguration</code> action. The
         * bucket owner has this permission by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>The following
         * operations are related to <code>GetBucketEncryption</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketEncryption.html">PutBucketEncryption</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketEncryption.html">DeleteBucketEncryption</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketEncryption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketEncryptionAsync(const Model::GetBucketEncryptionRequest& request, const GetBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the S3 Intelligent-Tiering configuration from the specified bucket.</p>
         * <p>The S3 Intelligent-Tiering storage class is designed to optimize storage
         * costs by automatically moving data to the most cost-effective storage access
         * tier, without performance impact or operational overhead. S3 Intelligent-Tiering
         * delivers automatic cost savings in two low latency and high throughput access
         * tiers. For data that can be accessed asynchronously, you can choose to activate
         * automatic archiving capabilities within the S3 Intelligent-Tiering storage
         * class.</p> <p>The S3 Intelligent-Tiering storage class is the ideal storage
         * class for data with unknown, changing, or unpredictable access patterns,
         * independent of object size or retention period. If the size of an object is less
         * than 128 KB, it is not eligible for auto-tiering. Smaller objects can be stored,
         * but they are always charged at the Frequent Access tier rates in the S3
         * Intelligent-Tiering storage class.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>GetBucketIntelligentTieringConfiguration</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketIntelligentTieringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketIntelligentTieringConfigurationOutcome GetBucketIntelligentTieringConfiguration(const Model::GetBucketIntelligentTieringConfigurationRequest& request) const;

        /**
         * <p>Gets the S3 Intelligent-Tiering configuration from the specified bucket.</p>
         * <p>The S3 Intelligent-Tiering storage class is designed to optimize storage
         * costs by automatically moving data to the most cost-effective storage access
         * tier, without performance impact or operational overhead. S3 Intelligent-Tiering
         * delivers automatic cost savings in two low latency and high throughput access
         * tiers. For data that can be accessed asynchronously, you can choose to activate
         * automatic archiving capabilities within the S3 Intelligent-Tiering storage
         * class.</p> <p>The S3 Intelligent-Tiering storage class is the ideal storage
         * class for data with unknown, changing, or unpredictable access patterns,
         * independent of object size or retention period. If the size of an object is less
         * than 128 KB, it is not eligible for auto-tiering. Smaller objects can be stored,
         * but they are always charged at the Frequent Access tier rates in the S3
         * Intelligent-Tiering storage class.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>GetBucketIntelligentTieringConfiguration</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketIntelligentTieringConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketIntelligentTieringConfigurationOutcomeCallable GetBucketIntelligentTieringConfigurationCallable(const Model::GetBucketIntelligentTieringConfigurationRequest& request) const;

        /**
         * <p>Gets the S3 Intelligent-Tiering configuration from the specified bucket.</p>
         * <p>The S3 Intelligent-Tiering storage class is designed to optimize storage
         * costs by automatically moving data to the most cost-effective storage access
         * tier, without performance impact or operational overhead. S3 Intelligent-Tiering
         * delivers automatic cost savings in two low latency and high throughput access
         * tiers. For data that can be accessed asynchronously, you can choose to activate
         * automatic archiving capabilities within the S3 Intelligent-Tiering storage
         * class.</p> <p>The S3 Intelligent-Tiering storage class is the ideal storage
         * class for data with unknown, changing, or unpredictable access patterns,
         * independent of object size or retention period. If the size of an object is less
         * than 128 KB, it is not eligible for auto-tiering. Smaller objects can be stored,
         * but they are always charged at the Frequent Access tier rates in the S3
         * Intelligent-Tiering storage class.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>GetBucketIntelligentTieringConfiguration</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketIntelligentTieringConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketIntelligentTieringConfigurationAsync(const Model::GetBucketIntelligentTieringConfigurationRequest& request, const GetBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an inventory configuration (identified by the inventory configuration
         * ID) from the bucket.</p> <p>To use this operation, you must have permissions to
         * perform the <code>s3:GetInventoryConfiguration</code> action. The bucket owner
         * has this permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 inventory feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a>.</p> <p>The following operations are related to
         * <code>GetBucketInventoryConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketInventoryConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketInventoryConfigurationOutcome GetBucketInventoryConfiguration(const Model::GetBucketInventoryConfigurationRequest& request) const;

        /**
         * <p>Returns an inventory configuration (identified by the inventory configuration
         * ID) from the bucket.</p> <p>To use this operation, you must have permissions to
         * perform the <code>s3:GetInventoryConfiguration</code> action. The bucket owner
         * has this permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 inventory feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a>.</p> <p>The following operations are related to
         * <code>GetBucketInventoryConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketInventoryConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketInventoryConfigurationOutcomeCallable GetBucketInventoryConfigurationCallable(const Model::GetBucketInventoryConfigurationRequest& request) const;

        /**
         * <p>Returns an inventory configuration (identified by the inventory configuration
         * ID) from the bucket.</p> <p>To use this operation, you must have permissions to
         * perform the <code>s3:GetInventoryConfiguration</code> action. The bucket owner
         * has this permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 inventory feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a>.</p> <p>The following operations are related to
         * <code>GetBucketInventoryConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketInventoryConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketInventoryConfigurationAsync(const Model::GetBucketInventoryConfigurationRequest& request, const GetBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         *  <p>Bucket lifecycle configuration now supports specifying a lifecycle
         * rule using an object key name prefix, one or more object tags, or a combination
         * of both. Accordingly, this section describes the latest API. The response
         * describes the new filter element that you can use to specify a filter to select
         * a subset of objects to which the rule applies. If you are using a previous
         * version of the lifecycle configuration, it still works. For the earlier action,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycle.html">GetBucketLifecycle</a>.</p>
         *  <p>Returns the lifecycle configuration information set on the bucket.
         * For information about lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
         * Lifecycle Management</a>.</p> <p>To use this operation, you must have permission
         * to perform the <code>s3:GetLifecycleConfiguration</code> action. The bucket
         * owner has this permission, by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>
         * <code>GetBucketLifecycleConfiguration</code> has the following special
         * error:</p> <ul> <li> <p>Error code: <code>NoSuchLifecycleConfiguration</code>
         * </p> <ul> <li> <p>Description: The lifecycle configuration does not exist.</p>
         * </li> <li> <p>HTTP Status Code: 404 Not Found</p> </li> <li> <p>SOAP Fault Code
         * Prefix: Client</p> </li> </ul> </li> </ul> <p>The following operations are
         * related to <code>GetBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycle.html">GetBucketLifecycle</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketLifecycleConfigurationOutcome GetBucketLifecycleConfiguration(const Model::GetBucketLifecycleConfigurationRequest& request) const;

        /**
         *  <p>Bucket lifecycle configuration now supports specifying a lifecycle
         * rule using an object key name prefix, one or more object tags, or a combination
         * of both. Accordingly, this section describes the latest API. The response
         * describes the new filter element that you can use to specify a filter to select
         * a subset of objects to which the rule applies. If you are using a previous
         * version of the lifecycle configuration, it still works. For the earlier action,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycle.html">GetBucketLifecycle</a>.</p>
         *  <p>Returns the lifecycle configuration information set on the bucket.
         * For information about lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
         * Lifecycle Management</a>.</p> <p>To use this operation, you must have permission
         * to perform the <code>s3:GetLifecycleConfiguration</code> action. The bucket
         * owner has this permission, by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>
         * <code>GetBucketLifecycleConfiguration</code> has the following special
         * error:</p> <ul> <li> <p>Error code: <code>NoSuchLifecycleConfiguration</code>
         * </p> <ul> <li> <p>Description: The lifecycle configuration does not exist.</p>
         * </li> <li> <p>HTTP Status Code: 404 Not Found</p> </li> <li> <p>SOAP Fault Code
         * Prefix: Client</p> </li> </ul> </li> </ul> <p>The following operations are
         * related to <code>GetBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycle.html">GetBucketLifecycle</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketLifecycleConfigurationOutcomeCallable GetBucketLifecycleConfigurationCallable(const Model::GetBucketLifecycleConfigurationRequest& request) const;

        /**
         *  <p>Bucket lifecycle configuration now supports specifying a lifecycle
         * rule using an object key name prefix, one or more object tags, or a combination
         * of both. Accordingly, this section describes the latest API. The response
         * describes the new filter element that you can use to specify a filter to select
         * a subset of objects to which the rule applies. If you are using a previous
         * version of the lifecycle configuration, it still works. For the earlier action,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycle.html">GetBucketLifecycle</a>.</p>
         *  <p>Returns the lifecycle configuration information set on the bucket.
         * For information about lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
         * Lifecycle Management</a>.</p> <p>To use this operation, you must have permission
         * to perform the <code>s3:GetLifecycleConfiguration</code> action. The bucket
         * owner has this permission, by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>
         * <code>GetBucketLifecycleConfiguration</code> has the following special
         * error:</p> <ul> <li> <p>Error code: <code>NoSuchLifecycleConfiguration</code>
         * </p> <ul> <li> <p>Description: The lifecycle configuration does not exist.</p>
         * </li> <li> <p>HTTP Status Code: 404 Not Found</p> </li> <li> <p>SOAP Fault Code
         * Prefix: Client</p> </li> </ul> </li> </ul> <p>The following operations are
         * related to <code>GetBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycle.html">GetBucketLifecycle</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketLifecycleConfigurationAsync(const Model::GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the Region the bucket resides in. You set the bucket's Region using
         * the <code>LocationConstraint</code> request parameter in a
         * <code>CreateBucket</code> request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>.</p>
         * <p>To use this implementation of the operation, you must be the bucket
         * owner.</p> <p>To use this API against an access point, provide the alias of the
         * access point in place of the bucket name.</p> <p>The following operations are
         * related to <code>GetBucketLocation</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketLocationOutcome GetBucketLocation(const Model::GetBucketLocationRequest& request) const;

        /**
         * <p>Returns the Region the bucket resides in. You set the bucket's Region using
         * the <code>LocationConstraint</code> request parameter in a
         * <code>CreateBucket</code> request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>.</p>
         * <p>To use this implementation of the operation, you must be the bucket
         * owner.</p> <p>To use this API against an access point, provide the alias of the
         * access point in place of the bucket name.</p> <p>The following operations are
         * related to <code>GetBucketLocation</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketLocation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketLocationOutcomeCallable GetBucketLocationCallable(const Model::GetBucketLocationRequest& request) const;

        /**
         * <p>Returns the Region the bucket resides in. You set the bucket's Region using
         * the <code>LocationConstraint</code> request parameter in a
         * <code>CreateBucket</code> request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>.</p>
         * <p>To use this implementation of the operation, you must be the bucket
         * owner.</p> <p>To use this API against an access point, provide the alias of the
         * access point in place of the bucket name.</p> <p>The following operations are
         * related to <code>GetBucketLocation</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketLocation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketLocationAsync(const Model::GetBucketLocationRequest& request, const GetBucketLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the logging status of a bucket and the permissions users have to view
         * and modify that status. To use GET, you must be the bucket owner.</p> <p>The
         * following operations are related to <code>GetBucketLogging</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLogging.html">PutBucketLogging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketLoggingOutcome GetBucketLogging(const Model::GetBucketLoggingRequest& request) const;

        /**
         * <p>Returns the logging status of a bucket and the permissions users have to view
         * and modify that status. To use GET, you must be the bucket owner.</p> <p>The
         * following operations are related to <code>GetBucketLogging</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLogging.html">PutBucketLogging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketLogging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketLoggingOutcomeCallable GetBucketLoggingCallable(const Model::GetBucketLoggingRequest& request) const;

        /**
         * <p>Returns the logging status of a bucket and the permissions users have to view
         * and modify that status. To use GET, you must be the bucket owner.</p> <p>The
         * following operations are related to <code>GetBucketLogging</code>:</p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLogging.html">PutBucketLogging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketLogging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketLoggingAsync(const Model::GetBucketLoggingRequest& request, const GetBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a metrics configuration (specified by the metrics configuration ID) from
         * the bucket. Note that this doesn't include the daily storage metrics.</p> <p> To
         * use this operation, you must have permissions to perform the
         * <code>s3:GetMetricsConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p> For information
         * about CloudWatch request metrics for Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>.</p> <p>The following operations are related
         * to <code>GetBucketMetricsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketMetricsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketMetricsConfigurationOutcome GetBucketMetricsConfiguration(const Model::GetBucketMetricsConfigurationRequest& request) const;

        /**
         * <p>Gets a metrics configuration (specified by the metrics configuration ID) from
         * the bucket. Note that this doesn't include the daily storage metrics.</p> <p> To
         * use this operation, you must have permissions to perform the
         * <code>s3:GetMetricsConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p> For information
         * about CloudWatch request metrics for Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>.</p> <p>The following operations are related
         * to <code>GetBucketMetricsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketMetricsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketMetricsConfigurationOutcomeCallable GetBucketMetricsConfigurationCallable(const Model::GetBucketMetricsConfigurationRequest& request) const;

        /**
         * <p>Gets a metrics configuration (specified by the metrics configuration ID) from
         * the bucket. Note that this doesn't include the daily storage metrics.</p> <p> To
         * use this operation, you must have permissions to perform the
         * <code>s3:GetMetricsConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p> For information
         * about CloudWatch request metrics for Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>.</p> <p>The following operations are related
         * to <code>GetBucketMetricsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketMetricsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketMetricsConfigurationAsync(const Model::GetBucketMetricsConfigurationRequest& request, const GetBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the notification configuration of a bucket.</p> <p>If notifications
         * are not enabled on the bucket, the action returns an empty
         * <code>NotificationConfiguration</code> element.</p> <p>By default, you must be
         * the bucket owner to read the notification configuration of a bucket. However,
         * the bucket owner can use a bucket policy to grant permission to other users to
         * read this configuration with the <code>s3:GetBucketNotification</code>
         * permission.</p> <p>For more information about setting and reading the
         * notification configuration on a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Setting
         * Up Notification of Bucket Events</a>. For more information about bucket
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies</a>.</p> <p>The following action is related to
         * <code>GetBucketNotification</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketNotification.html">PutBucketNotification</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketNotificationConfigurationOutcome GetBucketNotificationConfiguration(const Model::GetBucketNotificationConfigurationRequest& request) const;

        /**
         * <p>Returns the notification configuration of a bucket.</p> <p>If notifications
         * are not enabled on the bucket, the action returns an empty
         * <code>NotificationConfiguration</code> element.</p> <p>By default, you must be
         * the bucket owner to read the notification configuration of a bucket. However,
         * the bucket owner can use a bucket policy to grant permission to other users to
         * read this configuration with the <code>s3:GetBucketNotification</code>
         * permission.</p> <p>For more information about setting and reading the
         * notification configuration on a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Setting
         * Up Notification of Bucket Events</a>. For more information about bucket
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies</a>.</p> <p>The following action is related to
         * <code>GetBucketNotification</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketNotification.html">PutBucketNotification</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketNotificationConfigurationOutcomeCallable GetBucketNotificationConfigurationCallable(const Model::GetBucketNotificationConfigurationRequest& request) const;

        /**
         * <p>Returns the notification configuration of a bucket.</p> <p>If notifications
         * are not enabled on the bucket, the action returns an empty
         * <code>NotificationConfiguration</code> element.</p> <p>By default, you must be
         * the bucket owner to read the notification configuration of a bucket. However,
         * the bucket owner can use a bucket policy to grant permission to other users to
         * read this configuration with the <code>s3:GetBucketNotification</code>
         * permission.</p> <p>For more information about setting and reading the
         * notification configuration on a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Setting
         * Up Notification of Bucket Events</a>. For more information about bucket
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies</a>.</p> <p>The following action is related to
         * <code>GetBucketNotification</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketNotification.html">PutBucketNotification</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketNotificationConfigurationAsync(const Model::GetBucketNotificationConfigurationRequest& request, const GetBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves <code>OwnershipControls</code> for an Amazon S3 bucket. To use this
         * operation, you must have the <code>s3:GetBucketOwnershipControls</code>
         * permission. For more information about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. </p> <p>For information about Amazon S3 Object
         * Ownership, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using
         * Object Ownership</a>. </p> <p>The following operations are related to
         * <code>GetBucketOwnershipControls</code>:</p> <ul> <li> <p>
         * <a>PutBucketOwnershipControls</a> </p> </li> <li> <p>
         * <a>DeleteBucketOwnershipControls</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketOwnershipControls">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketOwnershipControlsOutcome GetBucketOwnershipControls(const Model::GetBucketOwnershipControlsRequest& request) const;

        /**
         * <p>Retrieves <code>OwnershipControls</code> for an Amazon S3 bucket. To use this
         * operation, you must have the <code>s3:GetBucketOwnershipControls</code>
         * permission. For more information about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. </p> <p>For information about Amazon S3 Object
         * Ownership, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using
         * Object Ownership</a>. </p> <p>The following operations are related to
         * <code>GetBucketOwnershipControls</code>:</p> <ul> <li> <p>
         * <a>PutBucketOwnershipControls</a> </p> </li> <li> <p>
         * <a>DeleteBucketOwnershipControls</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketOwnershipControls">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketOwnershipControlsOutcomeCallable GetBucketOwnershipControlsCallable(const Model::GetBucketOwnershipControlsRequest& request) const;

        /**
         * <p>Retrieves <code>OwnershipControls</code> for an Amazon S3 bucket. To use this
         * operation, you must have the <code>s3:GetBucketOwnershipControls</code>
         * permission. For more information about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. </p> <p>For information about Amazon S3 Object
         * Ownership, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using
         * Object Ownership</a>. </p> <p>The following operations are related to
         * <code>GetBucketOwnershipControls</code>:</p> <ul> <li> <p>
         * <a>PutBucketOwnershipControls</a> </p> </li> <li> <p>
         * <a>DeleteBucketOwnershipControls</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketOwnershipControls">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketOwnershipControlsAsync(const Model::GetBucketOwnershipControlsRequest& request, const GetBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the policy of a specified bucket. If you are using an identity other
         * than the root user of the Amazon Web Services account that owns the bucket, the
         * calling identity must have the <code>GetBucketPolicy</code> permissions on the
         * specified bucket and belong to the bucket owner's account in order to use this
         * operation.</p> <p>If you don't have <code>GetBucketPolicy</code> permissions,
         * Amazon S3 returns a <code>403 Access Denied</code> error. If you have the
         * correct permissions, but you're not using an identity that belongs to the bucket
         * owner's account, Amazon S3 returns a <code>405 Method Not Allowed</code>
         * error.</p>  <p>As a security precaution, the root user of the Amazon
         * Web Services account that owns a bucket can always use this operation, even if
         * the policy explicitly denies the root user the ability to perform this
         * action.</p>  <p>For more information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>The following action is related to
         * <code>GetBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketPolicyOutcome GetBucketPolicy(const Model::GetBucketPolicyRequest& request) const;

        /**
         * <p>Returns the policy of a specified bucket. If you are using an identity other
         * than the root user of the Amazon Web Services account that owns the bucket, the
         * calling identity must have the <code>GetBucketPolicy</code> permissions on the
         * specified bucket and belong to the bucket owner's account in order to use this
         * operation.</p> <p>If you don't have <code>GetBucketPolicy</code> permissions,
         * Amazon S3 returns a <code>403 Access Denied</code> error. If you have the
         * correct permissions, but you're not using an identity that belongs to the bucket
         * owner's account, Amazon S3 returns a <code>405 Method Not Allowed</code>
         * error.</p>  <p>As a security precaution, the root user of the Amazon
         * Web Services account that owns a bucket can always use this operation, even if
         * the policy explicitly denies the root user the ability to perform this
         * action.</p>  <p>For more information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>The following action is related to
         * <code>GetBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketPolicyOutcomeCallable GetBucketPolicyCallable(const Model::GetBucketPolicyRequest& request) const;

        /**
         * <p>Returns the policy of a specified bucket. If you are using an identity other
         * than the root user of the Amazon Web Services account that owns the bucket, the
         * calling identity must have the <code>GetBucketPolicy</code> permissions on the
         * specified bucket and belong to the bucket owner's account in order to use this
         * operation.</p> <p>If you don't have <code>GetBucketPolicy</code> permissions,
         * Amazon S3 returns a <code>403 Access Denied</code> error. If you have the
         * correct permissions, but you're not using an identity that belongs to the bucket
         * owner's account, Amazon S3 returns a <code>405 Method Not Allowed</code>
         * error.</p>  <p>As a security precaution, the root user of the Amazon
         * Web Services account that owns a bucket can always use this operation, even if
         * the policy explicitly denies the root user the ability to perform this
         * action.</p>  <p>For more information about bucket policies, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>The following action is related to
         * <code>GetBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketPolicyAsync(const Model::GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the policy status for an Amazon S3 bucket, indicating whether the
         * bucket is public. In order to use this operation, you must have the
         * <code>s3:GetBucketPolicyStatus</code> permission. For more information about
         * Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p> <p> For more information about when Amazon S3
         * considers a bucket public, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
         * Meaning of "Public"</a>. </p> <p>The following operations are related to
         * <code>GetBucketPolicyStatus</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketPolicyStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketPolicyStatusOutcome GetBucketPolicyStatus(const Model::GetBucketPolicyStatusRequest& request) const;

        /**
         * <p>Retrieves the policy status for an Amazon S3 bucket, indicating whether the
         * bucket is public. In order to use this operation, you must have the
         * <code>s3:GetBucketPolicyStatus</code> permission. For more information about
         * Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p> <p> For more information about when Amazon S3
         * considers a bucket public, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
         * Meaning of "Public"</a>. </p> <p>The following operations are related to
         * <code>GetBucketPolicyStatus</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketPolicyStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketPolicyStatusOutcomeCallable GetBucketPolicyStatusCallable(const Model::GetBucketPolicyStatusRequest& request) const;

        /**
         * <p>Retrieves the policy status for an Amazon S3 bucket, indicating whether the
         * bucket is public. In order to use this operation, you must have the
         * <code>s3:GetBucketPolicyStatus</code> permission. For more information about
         * Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p> <p> For more information about when Amazon S3
         * considers a bucket public, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
         * Meaning of "Public"</a>. </p> <p>The following operations are related to
         * <code>GetBucketPolicyStatus</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketPolicyStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketPolicyStatusAsync(const Model::GetBucketPolicyStatusRequest& request, const GetBucketPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the replication configuration of a bucket.</p>  <p> It can take
         * a while to propagate the put or delete a replication configuration to all Amazon
         * S3 systems. Therefore, a get request soon after put or delete can return a wrong
         * result. </p>  <p> For information about replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>This action requires permissions for
         * the <code>s3:GetReplicationConfiguration</code> action. For more information
         * about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>If you include the
         * <code>Filter</code> element in a replication configuration, you must also
         * include the <code>DeleteMarkerReplication</code> and <code>Priority</code>
         * elements. The response also returns those elements.</p> <p>For information about
         * <code>GetBucketReplication</code> errors, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ReplicationErrorCodeList">List
         * of replication-related error codes</a> </p> <p>The following operations are
         * related to <code>GetBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketReplication.html">PutBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketReplication.html">DeleteBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketReplicationOutcome GetBucketReplication(const Model::GetBucketReplicationRequest& request) const;

        /**
         * <p>Returns the replication configuration of a bucket.</p>  <p> It can take
         * a while to propagate the put or delete a replication configuration to all Amazon
         * S3 systems. Therefore, a get request soon after put or delete can return a wrong
         * result. </p>  <p> For information about replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>This action requires permissions for
         * the <code>s3:GetReplicationConfiguration</code> action. For more information
         * about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>If you include the
         * <code>Filter</code> element in a replication configuration, you must also
         * include the <code>DeleteMarkerReplication</code> and <code>Priority</code>
         * elements. The response also returns those elements.</p> <p>For information about
         * <code>GetBucketReplication</code> errors, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ReplicationErrorCodeList">List
         * of replication-related error codes</a> </p> <p>The following operations are
         * related to <code>GetBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketReplication.html">PutBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketReplication.html">DeleteBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketReplicationOutcomeCallable GetBucketReplicationCallable(const Model::GetBucketReplicationRequest& request) const;

        /**
         * <p>Returns the replication configuration of a bucket.</p>  <p> It can take
         * a while to propagate the put or delete a replication configuration to all Amazon
         * S3 systems. Therefore, a get request soon after put or delete can return a wrong
         * result. </p>  <p> For information about replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
         * in the <i>Amazon S3 User Guide</i>.</p> <p>This action requires permissions for
         * the <code>s3:GetReplicationConfiguration</code> action. For more information
         * about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-iam-policies.html">Using
         * Bucket Policies and User Policies</a>.</p> <p>If you include the
         * <code>Filter</code> element in a replication configuration, you must also
         * include the <code>DeleteMarkerReplication</code> and <code>Priority</code>
         * elements. The response also returns those elements.</p> <p>For information about
         * <code>GetBucketReplication</code> errors, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ReplicationErrorCodeList">List
         * of replication-related error codes</a> </p> <p>The following operations are
         * related to <code>GetBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketReplication.html">PutBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketReplication.html">DeleteBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketReplicationAsync(const Model::GetBucketReplicationRequest& request, const GetBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the request payment configuration of a bucket. To use this version of
         * the operation, you must be the bucket owner. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester
         * Pays Buckets</a>.</p> <p>The following operations are related to
         * <code>GetBucketRequestPayment</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketRequestPayment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketRequestPaymentOutcome GetBucketRequestPayment(const Model::GetBucketRequestPaymentRequest& request) const;

        /**
         * <p>Returns the request payment configuration of a bucket. To use this version of
         * the operation, you must be the bucket owner. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester
         * Pays Buckets</a>.</p> <p>The following operations are related to
         * <code>GetBucketRequestPayment</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketRequestPayment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketRequestPaymentOutcomeCallable GetBucketRequestPaymentCallable(const Model::GetBucketRequestPaymentRequest& request) const;

        /**
         * <p>Returns the request payment configuration of a bucket. To use this version of
         * the operation, you must be the bucket owner. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester
         * Pays Buckets</a>.</p> <p>The following operations are related to
         * <code>GetBucketRequestPayment</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketRequestPayment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketRequestPaymentAsync(const Model::GetBucketRequestPaymentRequest& request, const GetBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tag set associated with the bucket.</p> <p>To use this operation,
         * you must have permission to perform the <code>s3:GetBucketTagging</code> action.
         * By default, the bucket owner has this permission and can grant this permission
         * to others.</p> <p> <code>GetBucketTagging</code> has the following special
         * error:</p> <ul> <li> <p>Error code: <code>NoSuchTagSetError</code> </p> <ul>
         * <li> <p>Description: There is no tag set associated with the bucket.</p> </li>
         * </ul> </li> </ul> <p>The following operations are related to
         * <code>GetBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketTaggingOutcome GetBucketTagging(const Model::GetBucketTaggingRequest& request) const;

        /**
         * <p>Returns the tag set associated with the bucket.</p> <p>To use this operation,
         * you must have permission to perform the <code>s3:GetBucketTagging</code> action.
         * By default, the bucket owner has this permission and can grant this permission
         * to others.</p> <p> <code>GetBucketTagging</code> has the following special
         * error:</p> <ul> <li> <p>Error code: <code>NoSuchTagSetError</code> </p> <ul>
         * <li> <p>Description: There is no tag set associated with the bucket.</p> </li>
         * </ul> </li> </ul> <p>The following operations are related to
         * <code>GetBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketTaggingOutcomeCallable GetBucketTaggingCallable(const Model::GetBucketTaggingRequest& request) const;

        /**
         * <p>Returns the tag set associated with the bucket.</p> <p>To use this operation,
         * you must have permission to perform the <code>s3:GetBucketTagging</code> action.
         * By default, the bucket owner has this permission and can grant this permission
         * to others.</p> <p> <code>GetBucketTagging</code> has the following special
         * error:</p> <ul> <li> <p>Error code: <code>NoSuchTagSetError</code> </p> <ul>
         * <li> <p>Description: There is no tag set associated with the bucket.</p> </li>
         * </ul> </li> </ul> <p>The following operations are related to
         * <code>GetBucketTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketTagging.html">PutBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketTaggingAsync(const Model::GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the versioning state of a bucket.</p> <p>To retrieve the versioning
         * state of a bucket, you must be the bucket owner.</p> <p>This implementation also
         * returns the MFA Delete status of the versioning state. If the MFA Delete status
         * is <code>enabled</code>, the bucket owner must use an authentication device to
         * change the versioning state of the bucket.</p> <p>The following operations are
         * related to <code>GetBucketVersioning</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketVersioning">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketVersioningOutcome GetBucketVersioning(const Model::GetBucketVersioningRequest& request) const;

        /**
         * <p>Returns the versioning state of a bucket.</p> <p>To retrieve the versioning
         * state of a bucket, you must be the bucket owner.</p> <p>This implementation also
         * returns the MFA Delete status of the versioning state. If the MFA Delete status
         * is <code>enabled</code>, the bucket owner must use an authentication device to
         * change the versioning state of the bucket.</p> <p>The following operations are
         * related to <code>GetBucketVersioning</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketVersioning">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketVersioningOutcomeCallable GetBucketVersioningCallable(const Model::GetBucketVersioningRequest& request) const;

        /**
         * <p>Returns the versioning state of a bucket.</p> <p>To retrieve the versioning
         * state of a bucket, you must be the bucket owner.</p> <p>This implementation also
         * returns the MFA Delete status of the versioning state. If the MFA Delete status
         * is <code>enabled</code>, the bucket owner must use an authentication device to
         * change the versioning state of the bucket.</p> <p>The following operations are
         * related to <code>GetBucketVersioning</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketVersioning">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketVersioningAsync(const Model::GetBucketVersioningRequest& request, const GetBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the website configuration for a bucket. To host website on Amazon S3,
         * you can configure a bucket as website by adding a website configuration. For
         * more information about hosting websites, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
         * Websites on Amazon S3</a>. </p> <p>This GET action requires the
         * <code>S3:GetBucketWebsite</code> permission. By default, only the bucket owner
         * can read the bucket website configuration. However, bucket owners can allow
         * other users to read the website configuration by writing a bucket policy
         * granting them the <code>S3:GetBucketWebsite</code> permission.</p> <p>The
         * following operations are related to <code>DeleteBucketWebsite</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketWebsite.html">DeleteBucketWebsite</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketWebsite.html">PutBucketWebsite</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketWebsite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketWebsiteOutcome GetBucketWebsite(const Model::GetBucketWebsiteRequest& request) const;

        /**
         * <p>Returns the website configuration for a bucket. To host website on Amazon S3,
         * you can configure a bucket as website by adding a website configuration. For
         * more information about hosting websites, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
         * Websites on Amazon S3</a>. </p> <p>This GET action requires the
         * <code>S3:GetBucketWebsite</code> permission. By default, only the bucket owner
         * can read the bucket website configuration. However, bucket owners can allow
         * other users to read the website configuration by writing a bucket policy
         * granting them the <code>S3:GetBucketWebsite</code> permission.</p> <p>The
         * following operations are related to <code>DeleteBucketWebsite</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketWebsite.html">DeleteBucketWebsite</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketWebsite.html">PutBucketWebsite</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketWebsite">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketWebsiteOutcomeCallable GetBucketWebsiteCallable(const Model::GetBucketWebsiteRequest& request) const;

        /**
         * <p>Returns the website configuration for a bucket. To host website on Amazon S3,
         * you can configure a bucket as website by adding a website configuration. For
         * more information about hosting websites, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
         * Websites on Amazon S3</a>. </p> <p>This GET action requires the
         * <code>S3:GetBucketWebsite</code> permission. By default, only the bucket owner
         * can read the bucket website configuration. However, bucket owners can allow
         * other users to read the website configuration by writing a bucket policy
         * granting them the <code>S3:GetBucketWebsite</code> permission.</p> <p>The
         * following operations are related to <code>DeleteBucketWebsite</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketWebsite.html">DeleteBucketWebsite</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketWebsite.html">PutBucketWebsite</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetBucketWebsite">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketWebsiteAsync(const Model::GetBucketWebsiteRequest& request, const GetBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves objects from Amazon S3. To use <code>GET</code>, you must have
         * <code>READ</code> access to the object. If you grant <code>READ</code> access to
         * the anonymous user, you can return the object without using an authorization
         * header.</p> <p>An Amazon S3 bucket has no directory hierarchy such as you would
         * find in a typical computer file system. You can, however, create a logical
         * hierarchy by using object key names that imply a folder structure. For example,
         * instead of naming an object <code>sample.jpg</code>, you can name it
         * <code>photos/2006/February/sample.jpg</code>.</p> <p>To get an object from such
         * a logical hierarchy, specify the full key name for the object in the
         * <code>GET</code> operation. For a virtual hosted-style request example, if you
         * have the object <code>photos/2006/February/sample.jpg</code>, specify the
         * resource as <code>/photos/2006/February/sample.jpg</code>. For a path-style
         * request example, if you have the object
         * <code>photos/2006/February/sample.jpg</code> in the bucket named
         * <code>examplebucket</code>, specify the resource as
         * <code>/examplebucket/photos/2006/February/sample.jpg</code>. For more
         * information about request types, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/VirtualHosting.html#VirtualHostingSpecifyBucket">HTTP
         * Host Header Bucket Specification</a>.</p> <p>To distribute large files to many
         * people, you can save bandwidth costs by using BitTorrent. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3Torrent.html">Amazon S3
         * Torrent</a>. For more information about returning the ACL of an object, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>.</p>
         * <p>If the object you are retrieving is stored in the S3 Glacier or S3 Glacier
         * Deep Archive storage class, or S3 Intelligent-Tiering Archive or S3
         * Intelligent-Tiering Deep Archive tiers, before you can retrieve the object you
         * must first restore a copy using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_RestoreObject.html">RestoreObject</a>.
         * Otherwise, this action returns an <code>InvalidObjectStateError</code> error.
         * For information about restoring archived objects, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html">Restoring
         * Archived Objects</a>.</p> <p>Encryption request headers, like
         * <code>x-amz-server-side-encryption</code>, should not be sent for GET requests
         * if your object uses server-side encryption with KMS keys (SSE-KMS) or
         * server-side encryption with Amazon S3–managed encryption keys (SSE-S3). If your
         * object does use these types of keys, you’ll get an HTTP 400 BadRequest
         * error.</p> <p>If you encrypt an object by using server-side encryption with
         * customer-provided encryption keys (SSE-C) when you store the object in Amazon
         * S3, then when you GET the object, you must use the following headers:</p> <ul>
         * <li> <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p>For more
         * information about SSE-C, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
         * Encryption (Using Customer-Provided Encryption Keys)</a>.</p> <p>Assuming you
         * have the relevant permission to read object tags, the response also returns the
         * <code>x-amz-tagging-count</code> header that provides the count of number of
         * tags associated with the object. You can use <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
         * to retrieve the tag set associated with an object.</p> <p> <b>Permissions</b>
         * </p> <p>You need the relevant read object (or version) permission for this
         * operation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. If the object you request does not exist, the error
         * Amazon S3 returns depends on whether you also have the
         * <code>s3:ListBucket</code> permission.</p> <ul> <li> <p>If you have the
         * <code>s3:ListBucket</code> permission on the bucket, Amazon S3 will return an
         * HTTP status code 404 ("no such key") error.</p> </li> <li> <p>If you don’t have
         * the <code>s3:ListBucket</code> permission, Amazon S3 will return an HTTP status
         * code 403 ("access denied") error.</p> </li> </ul> <p> <b>Versioning</b> </p>
         * <p>By default, the GET action returns the current version of an object. To
         * return a different version, use the <code>versionId</code> subresource.</p>
         *  <ul> <li> <p> If you supply a <code>versionId</code>, you need the
         * <code>s3:GetObjectVersion</code> permission to access a specific version of an
         * object. If you request a specific version, you do not need to have the
         * <code>s3:GetObject</code> permission. </p> </li> <li> <p>If the current version
         * of the object is a delete marker, Amazon S3 behaves as if the object was deleted
         * and includes <code>x-amz-delete-marker: true</code> in the response.</p> </li>
         * </ul>  <p>For more information about versioning, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketVersioning.html">PutBucketVersioning</a>.
         * </p> <p> <b>Overriding Response Header Values</b> </p> <p>There are times when
         * you want to override certain response header values in a GET response. For
         * example, you might override the Content-Disposition response header value in
         * your GET request.</p> <p>You can override values for a set of response headers
         * using the following query parameters. These response header values are sent only
         * on a successful request, that is, when status code 200 OK is returned. The set
         * of headers you can override using these parameters is a subset of the headers
         * that Amazon S3 accepts when you create an object. The response headers that you
         * can override for the GET response are <code>Content-Type</code>,
         * <code>Content-Language</code>, <code>Expires</code>, <code>Cache-Control</code>,
         * <code>Content-Disposition</code>, and <code>Content-Encoding</code>. To override
         * these header values in the GET response, you use the following request
         * parameters.</p>  <p>You must sign the request, either using an
         * Authorization header or a presigned URL, when using these parameters. They
         * cannot be used with an unsigned (anonymous) request.</p>  <ul> <li> <p>
         * <code>response-content-type</code> </p> </li> <li> <p>
         * <code>response-content-language</code> </p> </li> <li> <p>
         * <code>response-expires</code> </p> </li> <li> <p>
         * <code>response-cache-control</code> </p> </li> <li> <p>
         * <code>response-content-disposition</code> </p> </li> <li> <p>
         * <code>response-content-encoding</code> </p> </li> </ul> <p> <b>Additional
         * Considerations about Request Headers</b> </p> <p>If both of the
         * <code>If-Match</code> and <code>If-Unmodified-Since</code> headers are present
         * in the request as follows: <code>If-Match</code> condition evaluates to
         * <code>true</code>, and; <code>If-Unmodified-Since</code> condition evaluates to
         * <code>false</code>; then, S3 returns 200 OK and the data requested. </p> <p>If
         * both of the <code>If-None-Match</code> and <code>If-Modified-Since</code>
         * headers are present in the request as follows:<code> If-None-Match</code>
         * condition evaluates to <code>false</code>, and; <code>If-Modified-Since</code>
         * condition evaluates to <code>true</code>; then, S3 returns 304 Not Modified
         * response code.</p> <p>For more information about conditional requests, see <a
         * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p> <p>The following
         * operations are related to <code>GetObject</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObject">AWS API
         * Reference</a></p>
         */
        virtual Model::GetObjectOutcome GetObject(const Model::GetObjectRequest& request) const;


        /**
         * <p>Retrieves objects from Amazon S3. To use <code>GET</code>, you must have
         * <code>READ</code> access to the object. If you grant <code>READ</code> access to
         * the anonymous user, you can return the object without using an authorization
         * header.</p> <p>An Amazon S3 bucket has no directory hierarchy such as you would
         * find in a typical computer file system. You can, however, create a logical
         * hierarchy by using object key names that imply a folder structure. For example,
         * instead of naming an object <code>sample.jpg</code>, you can name it
         * <code>photos/2006/February/sample.jpg</code>.</p> <p>To get an object from such
         * a logical hierarchy, specify the full key name for the object in the
         * <code>GET</code> operation. For a virtual hosted-style request example, if you
         * have the object <code>photos/2006/February/sample.jpg</code>, specify the
         * resource as <code>/photos/2006/February/sample.jpg</code>. For a path-style
         * request example, if you have the object
         * <code>photos/2006/February/sample.jpg</code> in the bucket named
         * <code>examplebucket</code>, specify the resource as
         * <code>/examplebucket/photos/2006/February/sample.jpg</code>. For more
         * information about request types, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/VirtualHosting.html#VirtualHostingSpecifyBucket">HTTP
         * Host Header Bucket Specification</a>.</p> <p>To distribute large files to many
         * people, you can save bandwidth costs by using BitTorrent. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3Torrent.html">Amazon S3
         * Torrent</a>. For more information about returning the ACL of an object, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>.</p>
         * <p>If the object you are retrieving is stored in the S3 Glacier or S3 Glacier
         * Deep Archive storage class, or S3 Intelligent-Tiering Archive or S3
         * Intelligent-Tiering Deep Archive tiers, before you can retrieve the object you
         * must first restore a copy using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_RestoreObject.html">RestoreObject</a>.
         * Otherwise, this action returns an <code>InvalidObjectStateError</code> error.
         * For information about restoring archived objects, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html">Restoring
         * Archived Objects</a>.</p> <p>Encryption request headers, like
         * <code>x-amz-server-side-encryption</code>, should not be sent for GET requests
         * if your object uses server-side encryption with KMS keys (SSE-KMS) or
         * server-side encryption with Amazon S3–managed encryption keys (SSE-S3). If your
         * object does use these types of keys, you’ll get an HTTP 400 BadRequest
         * error.</p> <p>If you encrypt an object by using server-side encryption with
         * customer-provided encryption keys (SSE-C) when you store the object in Amazon
         * S3, then when you GET the object, you must use the following headers:</p> <ul>
         * <li> <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p>For more
         * information about SSE-C, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
         * Encryption (Using Customer-Provided Encryption Keys)</a>.</p> <p>Assuming you
         * have the relevant permission to read object tags, the response also returns the
         * <code>x-amz-tagging-count</code> header that provides the count of number of
         * tags associated with the object. You can use <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
         * to retrieve the tag set associated with an object.</p> <p> <b>Permissions</b>
         * </p> <p>You need the relevant read object (or version) permission for this
         * operation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. If the object you request does not exist, the error
         * Amazon S3 returns depends on whether you also have the
         * <code>s3:ListBucket</code> permission.</p> <ul> <li> <p>If you have the
         * <code>s3:ListBucket</code> permission on the bucket, Amazon S3 will return an
         * HTTP status code 404 ("no such key") error.</p> </li> <li> <p>If you don’t have
         * the <code>s3:ListBucket</code> permission, Amazon S3 will return an HTTP status
         * code 403 ("access denied") error.</p> </li> </ul> <p> <b>Versioning</b> </p>
         * <p>By default, the GET action returns the current version of an object. To
         * return a different version, use the <code>versionId</code> subresource.</p>
         *  <ul> <li> <p> If you supply a <code>versionId</code>, you need the
         * <code>s3:GetObjectVersion</code> permission to access a specific version of an
         * object. If you request a specific version, you do not need to have the
         * <code>s3:GetObject</code> permission. </p> </li> <li> <p>If the current version
         * of the object is a delete marker, Amazon S3 behaves as if the object was deleted
         * and includes <code>x-amz-delete-marker: true</code> in the response.</p> </li>
         * </ul>  <p>For more information about versioning, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketVersioning.html">PutBucketVersioning</a>.
         * </p> <p> <b>Overriding Response Header Values</b> </p> <p>There are times when
         * you want to override certain response header values in a GET response. For
         * example, you might override the Content-Disposition response header value in
         * your GET request.</p> <p>You can override values for a set of response headers
         * using the following query parameters. These response header values are sent only
         * on a successful request, that is, when status code 200 OK is returned. The set
         * of headers you can override using these parameters is a subset of the headers
         * that Amazon S3 accepts when you create an object. The response headers that you
         * can override for the GET response are <code>Content-Type</code>,
         * <code>Content-Language</code>, <code>Expires</code>, <code>Cache-Control</code>,
         * <code>Content-Disposition</code>, and <code>Content-Encoding</code>. To override
         * these header values in the GET response, you use the following request
         * parameters.</p>  <p>You must sign the request, either using an
         * Authorization header or a presigned URL, when using these parameters. They
         * cannot be used with an unsigned (anonymous) request.</p>  <ul> <li> <p>
         * <code>response-content-type</code> </p> </li> <li> <p>
         * <code>response-content-language</code> </p> </li> <li> <p>
         * <code>response-expires</code> </p> </li> <li> <p>
         * <code>response-cache-control</code> </p> </li> <li> <p>
         * <code>response-content-disposition</code> </p> </li> <li> <p>
         * <code>response-content-encoding</code> </p> </li> </ul> <p> <b>Additional
         * Considerations about Request Headers</b> </p> <p>If both of the
         * <code>If-Match</code> and <code>If-Unmodified-Since</code> headers are present
         * in the request as follows: <code>If-Match</code> condition evaluates to
         * <code>true</code>, and; <code>If-Unmodified-Since</code> condition evaluates to
         * <code>false</code>; then, S3 returns 200 OK and the data requested. </p> <p>If
         * both of the <code>If-None-Match</code> and <code>If-Modified-Since</code>
         * headers are present in the request as follows:<code> If-None-Match</code>
         * condition evaluates to <code>false</code>, and; <code>If-Modified-Since</code>
         * condition evaluates to <code>true</code>; then, S3 returns 304 Not Modified
         * response code.</p> <p>For more information about conditional requests, see <a
         * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p> <p>The following
         * operations are related to <code>GetObject</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObject">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectAsync(const Model::GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the access control list (ACL) of an object. To use this operation,
         * you must have <code>READ_ACP</code> access to the object.</p> <p>This action is
         * not supported by Amazon S3 on Outposts.</p> <p> <b>Versioning</b> </p> <p>By
         * default, GET returns ACL information about the current version of an object. To
         * return ACL information about a different version, use the versionId
         * subresource.</p> <p>The following operations are related to
         * <code>GetObjectAcl</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectAcl">AWS API
         * Reference</a></p>
         */
        virtual Model::GetObjectAclOutcome GetObjectAcl(const Model::GetObjectAclRequest& request) const;

        /**
         * <p>Returns the access control list (ACL) of an object. To use this operation,
         * you must have <code>READ_ACP</code> access to the object.</p> <p>This action is
         * not supported by Amazon S3 on Outposts.</p> <p> <b>Versioning</b> </p> <p>By
         * default, GET returns ACL information about the current version of an object. To
         * return ACL information about a different version, use the versionId
         * subresource.</p> <p>The following operations are related to
         * <code>GetObjectAcl</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectAcl">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectAclOutcomeCallable GetObjectAclCallable(const Model::GetObjectAclRequest& request) const;

        /**
         * <p>Returns the access control list (ACL) of an object. To use this operation,
         * you must have <code>READ_ACP</code> access to the object.</p> <p>This action is
         * not supported by Amazon S3 on Outposts.</p> <p> <b>Versioning</b> </p> <p>By
         * default, GET returns ACL information about the current version of an object. To
         * return ACL information about a different version, use the versionId
         * subresource.</p> <p>The following operations are related to
         * <code>GetObjectAcl</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectAcl">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectAclAsync(const Model::GetObjectAclRequest& request, const GetObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an object's current Legal Hold status. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p> <p>This action is not supported by Amazon S3 on
         * Outposts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectLegalHold">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectLegalHoldOutcome GetObjectLegalHold(const Model::GetObjectLegalHoldRequest& request) const;

        /**
         * <p>Gets an object's current Legal Hold status. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p> <p>This action is not supported by Amazon S3 on
         * Outposts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectLegalHold">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectLegalHoldOutcomeCallable GetObjectLegalHoldCallable(const Model::GetObjectLegalHoldRequest& request) const;

        /**
         * <p>Gets an object's current Legal Hold status. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p> <p>This action is not supported by Amazon S3 on
         * Outposts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectLegalHold">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectLegalHoldAsync(const Model::GetObjectLegalHoldRequest& request, const GetObjectLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Object Lock configuration for a bucket. The rule specified in the
         * Object Lock configuration will be applied by default to every new object placed
         * in the specified bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectLockConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectLockConfigurationOutcome GetObjectLockConfiguration(const Model::GetObjectLockConfigurationRequest& request) const;

        /**
         * <p>Gets the Object Lock configuration for a bucket. The rule specified in the
         * Object Lock configuration will be applied by default to every new object placed
         * in the specified bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectLockConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectLockConfigurationOutcomeCallable GetObjectLockConfigurationCallable(const Model::GetObjectLockConfigurationRequest& request) const;

        /**
         * <p>Gets the Object Lock configuration for a bucket. The rule specified in the
         * Object Lock configuration will be applied by default to every new object placed
         * in the specified bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectLockConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectLockConfigurationAsync(const Model::GetObjectLockConfigurationRequest& request, const GetObjectLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an object's retention settings. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p> <p>This action is not supported by Amazon S3 on
         * Outposts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectRetention">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectRetentionOutcome GetObjectRetention(const Model::GetObjectRetentionRequest& request) const;

        /**
         * <p>Retrieves an object's retention settings. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p> <p>This action is not supported by Amazon S3 on
         * Outposts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectRetention">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectRetentionOutcomeCallable GetObjectRetentionCallable(const Model::GetObjectRetentionRequest& request) const;

        /**
         * <p>Retrieves an object's retention settings. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p> <p>This action is not supported by Amazon S3 on
         * Outposts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectRetention">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectRetentionAsync(const Model::GetObjectRetentionRequest& request, const GetObjectRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tag-set of an object. You send the GET request against the
         * tagging subresource associated with the object.</p> <p>To use this operation,
         * you must have permission to perform the <code>s3:GetObjectTagging</code> action.
         * By default, the GET action returns information about current version of an
         * object. For a versioned bucket, you can have multiple versions of an object in
         * your bucket. To retrieve tags of any other version, use the versionId query
         * parameter. You also need permission for the
         * <code>s3:GetObjectVersionTagging</code> action.</p> <p> By default, the bucket
         * owner has this permission and can grant this permission to others.</p> <p> For
         * information about the Amazon S3 object tagging feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
         * Tagging</a>.</p> <p>The following action is related to
         * <code>GetObjectTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObjectTagging.html">PutObjectTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObjectTagging.html">DeleteObjectTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectTaggingOutcome GetObjectTagging(const Model::GetObjectTaggingRequest& request) const;

        /**
         * <p>Returns the tag-set of an object. You send the GET request against the
         * tagging subresource associated with the object.</p> <p>To use this operation,
         * you must have permission to perform the <code>s3:GetObjectTagging</code> action.
         * By default, the GET action returns information about current version of an
         * object. For a versioned bucket, you can have multiple versions of an object in
         * your bucket. To retrieve tags of any other version, use the versionId query
         * parameter. You also need permission for the
         * <code>s3:GetObjectVersionTagging</code> action.</p> <p> By default, the bucket
         * owner has this permission and can grant this permission to others.</p> <p> For
         * information about the Amazon S3 object tagging feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
         * Tagging</a>.</p> <p>The following action is related to
         * <code>GetObjectTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObjectTagging.html">PutObjectTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObjectTagging.html">DeleteObjectTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectTaggingOutcomeCallable GetObjectTaggingCallable(const Model::GetObjectTaggingRequest& request) const;

        /**
         * <p>Returns the tag-set of an object. You send the GET request against the
         * tagging subresource associated with the object.</p> <p>To use this operation,
         * you must have permission to perform the <code>s3:GetObjectTagging</code> action.
         * By default, the GET action returns information about current version of an
         * object. For a versioned bucket, you can have multiple versions of an object in
         * your bucket. To retrieve tags of any other version, use the versionId query
         * parameter. You also need permission for the
         * <code>s3:GetObjectVersionTagging</code> action.</p> <p> By default, the bucket
         * owner has this permission and can grant this permission to others.</p> <p> For
         * information about the Amazon S3 object tagging feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
         * Tagging</a>.</p> <p>The following action is related to
         * <code>GetObjectTagging</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObjectTagging.html">PutObjectTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObjectTagging.html">DeleteObjectTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectTaggingAsync(const Model::GetObjectTaggingRequest& request, const GetObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns torrent files from a bucket. BitTorrent can save you bandwidth when
         * you're distributing large files. For more information about BitTorrent, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3Torrent.html">Using
         * BitTorrent with Amazon S3</a>.</p>  <p>You can get torrent only for
         * objects that are less than 5 GB in size, and that are not encrypted using
         * server-side encryption with a customer-provided encryption key.</p> 
         * <p>To use GET, you must have READ access to the object.</p> <p>This action is
         * not supported by Amazon S3 on Outposts.</p> <p>The following action is related
         * to <code>GetObjectTorrent</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectTorrent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetObjectTorrentOutcome GetObjectTorrent(const Model::GetObjectTorrentRequest& request) const;

        /**
         * <p>Returns torrent files from a bucket. BitTorrent can save you bandwidth when
         * you're distributing large files. For more information about BitTorrent, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3Torrent.html">Using
         * BitTorrent with Amazon S3</a>.</p>  <p>You can get torrent only for
         * objects that are less than 5 GB in size, and that are not encrypted using
         * server-side encryption with a customer-provided encryption key.</p> 
         * <p>To use GET, you must have READ access to the object.</p> <p>This action is
         * not supported by Amazon S3 on Outposts.</p> <p>The following action is related
         * to <code>GetObjectTorrent</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectTorrent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetObjectTorrentOutcomeCallable GetObjectTorrentCallable(const Model::GetObjectTorrentRequest& request) const;

        /**
         * <p>Returns torrent files from a bucket. BitTorrent can save you bandwidth when
         * you're distributing large files. For more information about BitTorrent, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3Torrent.html">Using
         * BitTorrent with Amazon S3</a>.</p>  <p>You can get torrent only for
         * objects that are less than 5 GB in size, and that are not encrypted using
         * server-side encryption with a customer-provided encryption key.</p> 
         * <p>To use GET, you must have READ access to the object.</p> <p>This action is
         * not supported by Amazon S3 on Outposts.</p> <p>The following action is related
         * to <code>GetObjectTorrent</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetObjectTorrent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetObjectTorrentAsync(const Model::GetObjectTorrentRequest& request, const GetObjectTorrentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an Amazon S3
         * bucket. To use this operation, you must have the
         * <code>s3:GetBucketPublicAccessBlock</code> permission. For more information
         * about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p>  <p>When Amazon S3 evaluates the
         * <code>PublicAccessBlock</code> configuration for a bucket or an object, it
         * checks the <code>PublicAccessBlock</code> configuration for both the bucket (or
         * the bucket that contains the object) and the bucket owner's account. If the
         * <code>PublicAccessBlock</code> settings are different between the bucket and the
         * account, Amazon S3 uses the most restrictive combination of the bucket-level and
         * account-level settings.</p>  <p>For more information about when
         * Amazon S3 considers a bucket or an object public, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
         * Meaning of "Public"</a>.</p> <p>The following operations are related to
         * <code>GetPublicAccessBlock</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicAccessBlockOutcome GetPublicAccessBlock(const Model::GetPublicAccessBlockRequest& request) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an Amazon S3
         * bucket. To use this operation, you must have the
         * <code>s3:GetBucketPublicAccessBlock</code> permission. For more information
         * about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p>  <p>When Amazon S3 evaluates the
         * <code>PublicAccessBlock</code> configuration for a bucket or an object, it
         * checks the <code>PublicAccessBlock</code> configuration for both the bucket (or
         * the bucket that contains the object) and the bucket owner's account. If the
         * <code>PublicAccessBlock</code> settings are different between the bucket and the
         * account, Amazon S3 uses the most restrictive combination of the bucket-level and
         * account-level settings.</p>  <p>For more information about when
         * Amazon S3 considers a bucket or an object public, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
         * Meaning of "Public"</a>.</p> <p>The following operations are related to
         * <code>GetPublicAccessBlock</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicAccessBlockOutcomeCallable GetPublicAccessBlockCallable(const Model::GetPublicAccessBlockRequest& request) const;

        /**
         * <p>Retrieves the <code>PublicAccessBlock</code> configuration for an Amazon S3
         * bucket. To use this operation, you must have the
         * <code>s3:GetBucketPublicAccessBlock</code> permission. For more information
         * about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p>  <p>When Amazon S3 evaluates the
         * <code>PublicAccessBlock</code> configuration for a bucket or an object, it
         * checks the <code>PublicAccessBlock</code> configuration for both the bucket (or
         * the bucket that contains the object) and the bucket owner's account. If the
         * <code>PublicAccessBlock</code> settings are different between the bucket and the
         * account, Amazon S3 uses the most restrictive combination of the bucket-level and
         * account-level settings.</p>  <p>For more information about when
         * Amazon S3 considers a bucket or an object public, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
         * Meaning of "Public"</a>.</p> <p>The following operations are related to
         * <code>GetPublicAccessBlock</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutPublicAccessBlock.html">PutPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GetPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicAccessBlockAsync(const Model::GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action is useful to determine if a bucket exists and you have permission
         * to access it. The action returns a <code>200 OK</code> if the bucket exists and
         * you have permission to access it.</p> <p>If the bucket does not exist or you do
         * not have permission to access it, the <code>HEAD</code> request returns a
         * generic <code>404 Not Found</code> or <code>403 Forbidden</code> code. A message
         * body is not included, so you cannot determine the exception beyond these error
         * codes.</p> <p>To use this operation, you must have permissions to perform the
         * <code>s3:ListBucket</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>To use this API
         * against an access point, you must provide the alias of the access point in place
         * of the bucket name or specify the access point ARN. When using the access point
         * ARN, you must direct requests to the access point hostname. The access point
         * hostname takes the form
         * AccessPointName-AccountId.s3-accesspoint.Region.amazonaws.com. When using the
         * Amazon Web Services SDKs, you provide the ARN in place of the bucket name. For
         * more information see, <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
         * access points</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/HeadBucket">AWS API
         * Reference</a></p>
         */
        virtual Model::HeadBucketOutcome HeadBucket(const Model::HeadBucketRequest& request) const;

        /**
         * <p>This action is useful to determine if a bucket exists and you have permission
         * to access it. The action returns a <code>200 OK</code> if the bucket exists and
         * you have permission to access it.</p> <p>If the bucket does not exist or you do
         * not have permission to access it, the <code>HEAD</code> request returns a
         * generic <code>404 Not Found</code> or <code>403 Forbidden</code> code. A message
         * body is not included, so you cannot determine the exception beyond these error
         * codes.</p> <p>To use this operation, you must have permissions to perform the
         * <code>s3:ListBucket</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>To use this API
         * against an access point, you must provide the alias of the access point in place
         * of the bucket name or specify the access point ARN. When using the access point
         * ARN, you must direct requests to the access point hostname. The access point
         * hostname takes the form
         * AccessPointName-AccountId.s3-accesspoint.Region.amazonaws.com. When using the
         * Amazon Web Services SDKs, you provide the ARN in place of the bucket name. For
         * more information see, <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
         * access points</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/HeadBucket">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::HeadBucketOutcomeCallable HeadBucketCallable(const Model::HeadBucketRequest& request) const;

        /**
         * <p>This action is useful to determine if a bucket exists and you have permission
         * to access it. The action returns a <code>200 OK</code> if the bucket exists and
         * you have permission to access it.</p> <p>If the bucket does not exist or you do
         * not have permission to access it, the <code>HEAD</code> request returns a
         * generic <code>404 Not Found</code> or <code>403 Forbidden</code> code. A message
         * body is not included, so you cannot determine the exception beyond these error
         * codes.</p> <p>To use this operation, you must have permissions to perform the
         * <code>s3:ListBucket</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>To use this API
         * against an access point, you must provide the alias of the access point in place
         * of the bucket name or specify the access point ARN. When using the access point
         * ARN, you must direct requests to the access point hostname. The access point
         * hostname takes the form
         * AccessPointName-AccountId.s3-accesspoint.Region.amazonaws.com. When using the
         * Amazon Web Services SDKs, you provide the ARN in place of the bucket name. For
         * more information see, <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
         * access points</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/HeadBucket">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void HeadBucketAsync(const Model::HeadBucketRequest& request, const HeadBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The HEAD action retrieves metadata from an object without returning the
         * object itself. This action is useful if you're only interested in an object's
         * metadata. To use HEAD, you must have READ access to the object.</p> <p>A
         * <code>HEAD</code> request has the same options as a <code>GET</code> action on
         * an object. The response is identical to the <code>GET</code> response except
         * that there is no response body. Because of this, if the <code>HEAD</code>
         * request generates an error, it returns a generic <code>404 Not Found</code> or
         * <code>403 Forbidden</code> code. It is not possible to retrieve the exact
         * exception beyond these error codes.</p> <p>If you encrypt an object by using
         * server-side encryption with customer-provided encryption keys (SSE-C) when you
         * store the object in Amazon S3, then when you retrieve the metadata from the
         * object, you must use the following headers:</p> <ul> <li>
         * <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p>For more
         * information about SSE-C, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
         * Encryption (Using Customer-Provided Encryption Keys)</a>.</p>  <ul> <li>
         * <p>Encryption request headers, like <code>x-amz-server-side-encryption</code>,
         * should not be sent for GET requests if your object uses server-side encryption
         * with KMS keys (SSE-KMS) or server-side encryption with Amazon S3–managed
         * encryption keys (SSE-S3). If your object does use these types of keys, you’ll
         * get an HTTP 400 BadRequest error.</p> </li> <li> <p> The last modified property
         * in this case is the creation date of the object.</p> </li> </ul> 
         * <p>Request headers are limited to 8 KB in size. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTCommonRequestHeaders.html">Common
         * Request Headers</a>.</p> <p>Consider the following when using request
         * headers:</p> <ul> <li> <p> Consideration 1 – If both of the
         * <code>If-Match</code> and <code>If-Unmodified-Since</code> headers are present
         * in the request as follows:</p> <ul> <li> <p> <code>If-Match</code> condition
         * evaluates to <code>true</code>, and;</p> </li> <li> <p>
         * <code>If-Unmodified-Since</code> condition evaluates to <code>false</code>;</p>
         * </li> </ul> <p>Then Amazon S3 returns <code>200 OK</code> and the data
         * requested.</p> </li> <li> <p> Consideration 2 – If both of the
         * <code>If-None-Match</code> and <code>If-Modified-Since</code> headers are
         * present in the request as follows:</p> <ul> <li> <p> <code>If-None-Match</code>
         * condition evaluates to <code>false</code>, and;</p> </li> <li> <p>
         * <code>If-Modified-Since</code> condition evaluates to <code>true</code>;</p>
         * </li> </ul> <p>Then Amazon S3 returns the <code>304 Not Modified</code> response
         * code.</p> </li> </ul> <p>For more information about conditional requests, see <a
         * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p> <p>
         * <b>Permissions</b> </p> <p>You need the relevant read object (or version)
         * permission for this operation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. If the object you request does not exist, the error
         * Amazon S3 returns depends on whether you also have the s3:ListBucket
         * permission.</p> <ul> <li> <p>If you have the <code>s3:ListBucket</code>
         * permission on the bucket, Amazon S3 returns an HTTP status code 404 ("no such
         * key") error.</p> </li> <li> <p>If you don’t have the <code>s3:ListBucket</code>
         * permission, Amazon S3 returns an HTTP status code 403 ("access denied")
         * error.</p> </li> </ul> <p>The following action is related to
         * <code>HeadObject</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/HeadObject">AWS API
         * Reference</a></p>
         */
        virtual Model::HeadObjectOutcome HeadObject(const Model::HeadObjectRequest& request) const;

        /**
         * <p>The HEAD action retrieves metadata from an object without returning the
         * object itself. This action is useful if you're only interested in an object's
         * metadata. To use HEAD, you must have READ access to the object.</p> <p>A
         * <code>HEAD</code> request has the same options as a <code>GET</code> action on
         * an object. The response is identical to the <code>GET</code> response except
         * that there is no response body. Because of this, if the <code>HEAD</code>
         * request generates an error, it returns a generic <code>404 Not Found</code> or
         * <code>403 Forbidden</code> code. It is not possible to retrieve the exact
         * exception beyond these error codes.</p> <p>If you encrypt an object by using
         * server-side encryption with customer-provided encryption keys (SSE-C) when you
         * store the object in Amazon S3, then when you retrieve the metadata from the
         * object, you must use the following headers:</p> <ul> <li>
         * <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p>For more
         * information about SSE-C, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
         * Encryption (Using Customer-Provided Encryption Keys)</a>.</p>  <ul> <li>
         * <p>Encryption request headers, like <code>x-amz-server-side-encryption</code>,
         * should not be sent for GET requests if your object uses server-side encryption
         * with KMS keys (SSE-KMS) or server-side encryption with Amazon S3–managed
         * encryption keys (SSE-S3). If your object does use these types of keys, you’ll
         * get an HTTP 400 BadRequest error.</p> </li> <li> <p> The last modified property
         * in this case is the creation date of the object.</p> </li> </ul> 
         * <p>Request headers are limited to 8 KB in size. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTCommonRequestHeaders.html">Common
         * Request Headers</a>.</p> <p>Consider the following when using request
         * headers:</p> <ul> <li> <p> Consideration 1 – If both of the
         * <code>If-Match</code> and <code>If-Unmodified-Since</code> headers are present
         * in the request as follows:</p> <ul> <li> <p> <code>If-Match</code> condition
         * evaluates to <code>true</code>, and;</p> </li> <li> <p>
         * <code>If-Unmodified-Since</code> condition evaluates to <code>false</code>;</p>
         * </li> </ul> <p>Then Amazon S3 returns <code>200 OK</code> and the data
         * requested.</p> </li> <li> <p> Consideration 2 – If both of the
         * <code>If-None-Match</code> and <code>If-Modified-Since</code> headers are
         * present in the request as follows:</p> <ul> <li> <p> <code>If-None-Match</code>
         * condition evaluates to <code>false</code>, and;</p> </li> <li> <p>
         * <code>If-Modified-Since</code> condition evaluates to <code>true</code>;</p>
         * </li> </ul> <p>Then Amazon S3 returns the <code>304 Not Modified</code> response
         * code.</p> </li> </ul> <p>For more information about conditional requests, see <a
         * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p> <p>
         * <b>Permissions</b> </p> <p>You need the relevant read object (or version)
         * permission for this operation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. If the object you request does not exist, the error
         * Amazon S3 returns depends on whether you also have the s3:ListBucket
         * permission.</p> <ul> <li> <p>If you have the <code>s3:ListBucket</code>
         * permission on the bucket, Amazon S3 returns an HTTP status code 404 ("no such
         * key") error.</p> </li> <li> <p>If you don’t have the <code>s3:ListBucket</code>
         * permission, Amazon S3 returns an HTTP status code 403 ("access denied")
         * error.</p> </li> </ul> <p>The following action is related to
         * <code>HeadObject</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/HeadObject">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::HeadObjectOutcomeCallable HeadObjectCallable(const Model::HeadObjectRequest& request) const;

        /**
         * <p>The HEAD action retrieves metadata from an object without returning the
         * object itself. This action is useful if you're only interested in an object's
         * metadata. To use HEAD, you must have READ access to the object.</p> <p>A
         * <code>HEAD</code> request has the same options as a <code>GET</code> action on
         * an object. The response is identical to the <code>GET</code> response except
         * that there is no response body. Because of this, if the <code>HEAD</code>
         * request generates an error, it returns a generic <code>404 Not Found</code> or
         * <code>403 Forbidden</code> code. It is not possible to retrieve the exact
         * exception beyond these error codes.</p> <p>If you encrypt an object by using
         * server-side encryption with customer-provided encryption keys (SSE-C) when you
         * store the object in Amazon S3, then when you retrieve the metadata from the
         * object, you must use the following headers:</p> <ul> <li>
         * <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p>For more
         * information about SSE-C, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
         * Encryption (Using Customer-Provided Encryption Keys)</a>.</p>  <ul> <li>
         * <p>Encryption request headers, like <code>x-amz-server-side-encryption</code>,
         * should not be sent for GET requests if your object uses server-side encryption
         * with KMS keys (SSE-KMS) or server-side encryption with Amazon S3–managed
         * encryption keys (SSE-S3). If your object does use these types of keys, you’ll
         * get an HTTP 400 BadRequest error.</p> </li> <li> <p> The last modified property
         * in this case is the creation date of the object.</p> </li> </ul> 
         * <p>Request headers are limited to 8 KB in size. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTCommonRequestHeaders.html">Common
         * Request Headers</a>.</p> <p>Consider the following when using request
         * headers:</p> <ul> <li> <p> Consideration 1 – If both of the
         * <code>If-Match</code> and <code>If-Unmodified-Since</code> headers are present
         * in the request as follows:</p> <ul> <li> <p> <code>If-Match</code> condition
         * evaluates to <code>true</code>, and;</p> </li> <li> <p>
         * <code>If-Unmodified-Since</code> condition evaluates to <code>false</code>;</p>
         * </li> </ul> <p>Then Amazon S3 returns <code>200 OK</code> and the data
         * requested.</p> </li> <li> <p> Consideration 2 – If both of the
         * <code>If-None-Match</code> and <code>If-Modified-Since</code> headers are
         * present in the request as follows:</p> <ul> <li> <p> <code>If-None-Match</code>
         * condition evaluates to <code>false</code>, and;</p> </li> <li> <p>
         * <code>If-Modified-Since</code> condition evaluates to <code>true</code>;</p>
         * </li> </ul> <p>Then Amazon S3 returns the <code>304 Not Modified</code> response
         * code.</p> </li> </ul> <p>For more information about conditional requests, see <a
         * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p> <p>
         * <b>Permissions</b> </p> <p>You need the relevant read object (or version)
         * permission for this operation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. If the object you request does not exist, the error
         * Amazon S3 returns depends on whether you also have the s3:ListBucket
         * permission.</p> <ul> <li> <p>If you have the <code>s3:ListBucket</code>
         * permission on the bucket, Amazon S3 returns an HTTP status code 404 ("no such
         * key") error.</p> </li> <li> <p>If you don’t have the <code>s3:ListBucket</code>
         * permission, Amazon S3 returns an HTTP status code 403 ("access denied")
         * error.</p> </li> </ul> <p>The following action is related to
         * <code>HeadObject</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/HeadObject">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void HeadObjectAsync(const Model::HeadObjectRequest& request, const HeadObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the analytics configurations for the bucket. You can have up to 1,000
         * analytics configurations per bucket.</p> <p>This action supports list pagination
         * and does not return more than 100 configurations at a time. You should always
         * check the <code>IsTruncated</code> element in the response. If there are no more
         * configurations to list, <code>IsTruncated</code> is set to false. If there are
         * more configurations to list, <code>IsTruncated</code> is set to true, and there
         * will be a value in <code>NextContinuationToken</code>. You use the
         * <code>NextContinuationToken</code> value to continue the pagination of the list
         * by passing the value in continuation-token in the request to <code>GET</code>
         * the next page.</p> <p>To use this operation, you must have permissions to
         * perform the <code>s3:GetAnalyticsConfiguration</code> action. The bucket owner
         * has this permission by default. The bucket owner can grant this permission to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * Amazon S3 analytics feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a>. </p> <p>The following operations are
         * related to <code>ListBucketAnalyticsConfigurations</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketAnalyticsConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBucketAnalyticsConfigurationsOutcome ListBucketAnalyticsConfigurations(const Model::ListBucketAnalyticsConfigurationsRequest& request) const;

        /**
         * <p>Lists the analytics configurations for the bucket. You can have up to 1,000
         * analytics configurations per bucket.</p> <p>This action supports list pagination
         * and does not return more than 100 configurations at a time. You should always
         * check the <code>IsTruncated</code> element in the response. If there are no more
         * configurations to list, <code>IsTruncated</code> is set to false. If there are
         * more configurations to list, <code>IsTruncated</code> is set to true, and there
         * will be a value in <code>NextContinuationToken</code>. You use the
         * <code>NextContinuationToken</code> value to continue the pagination of the list
         * by passing the value in continuation-token in the request to <code>GET</code>
         * the next page.</p> <p>To use this operation, you must have permissions to
         * perform the <code>s3:GetAnalyticsConfiguration</code> action. The bucket owner
         * has this permission by default. The bucket owner can grant this permission to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * Amazon S3 analytics feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a>. </p> <p>The following operations are
         * related to <code>ListBucketAnalyticsConfigurations</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketAnalyticsConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBucketAnalyticsConfigurationsOutcomeCallable ListBucketAnalyticsConfigurationsCallable(const Model::ListBucketAnalyticsConfigurationsRequest& request) const;

        /**
         * <p>Lists the analytics configurations for the bucket. You can have up to 1,000
         * analytics configurations per bucket.</p> <p>This action supports list pagination
         * and does not return more than 100 configurations at a time. You should always
         * check the <code>IsTruncated</code> element in the response. If there are no more
         * configurations to list, <code>IsTruncated</code> is set to false. If there are
         * more configurations to list, <code>IsTruncated</code> is set to true, and there
         * will be a value in <code>NextContinuationToken</code>. You use the
         * <code>NextContinuationToken</code> value to continue the pagination of the list
         * by passing the value in continuation-token in the request to <code>GET</code>
         * the next page.</p> <p>To use this operation, you must have permissions to
         * perform the <code>s3:GetAnalyticsConfiguration</code> action. The bucket owner
         * has this permission by default. The bucket owner can grant this permission to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * Amazon S3 analytics feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a>. </p> <p>The following operations are
         * related to <code>ListBucketAnalyticsConfigurations</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketAnalyticsConfiguration.html">PutBucketAnalyticsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketAnalyticsConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBucketAnalyticsConfigurationsAsync(const Model::ListBucketAnalyticsConfigurationsRequest& request, const ListBucketAnalyticsConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the S3 Intelligent-Tiering configuration from the specified bucket.</p>
         * <p>The S3 Intelligent-Tiering storage class is designed to optimize storage
         * costs by automatically moving data to the most cost-effective storage access
         * tier, without performance impact or operational overhead. S3 Intelligent-Tiering
         * delivers automatic cost savings in two low latency and high throughput access
         * tiers. For data that can be accessed asynchronously, you can choose to activate
         * automatic archiving capabilities within the S3 Intelligent-Tiering storage
         * class.</p> <p>The S3 Intelligent-Tiering storage class is the ideal storage
         * class for data with unknown, changing, or unpredictable access patterns,
         * independent of object size or retention period. If the size of an object is less
         * than 128 KB, it is not eligible for auto-tiering. Smaller objects can be stored,
         * but they are always charged at the Frequent Access tier rates in the S3
         * Intelligent-Tiering storage class.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>ListBucketIntelligentTieringConfigurations</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketIntelligentTieringConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBucketIntelligentTieringConfigurationsOutcome ListBucketIntelligentTieringConfigurations(const Model::ListBucketIntelligentTieringConfigurationsRequest& request) const;

        /**
         * <p>Lists the S3 Intelligent-Tiering configuration from the specified bucket.</p>
         * <p>The S3 Intelligent-Tiering storage class is designed to optimize storage
         * costs by automatically moving data to the most cost-effective storage access
         * tier, without performance impact or operational overhead. S3 Intelligent-Tiering
         * delivers automatic cost savings in two low latency and high throughput access
         * tiers. For data that can be accessed asynchronously, you can choose to activate
         * automatic archiving capabilities within the S3 Intelligent-Tiering storage
         * class.</p> <p>The S3 Intelligent-Tiering storage class is the ideal storage
         * class for data with unknown, changing, or unpredictable access patterns,
         * independent of object size or retention period. If the size of an object is less
         * than 128 KB, it is not eligible for auto-tiering. Smaller objects can be stored,
         * but they are always charged at the Frequent Access tier rates in the S3
         * Intelligent-Tiering storage class.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>ListBucketIntelligentTieringConfigurations</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketIntelligentTieringConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBucketIntelligentTieringConfigurationsOutcomeCallable ListBucketIntelligentTieringConfigurationsCallable(const Model::ListBucketIntelligentTieringConfigurationsRequest& request) const;

        /**
         * <p>Lists the S3 Intelligent-Tiering configuration from the specified bucket.</p>
         * <p>The S3 Intelligent-Tiering storage class is designed to optimize storage
         * costs by automatically moving data to the most cost-effective storage access
         * tier, without performance impact or operational overhead. S3 Intelligent-Tiering
         * delivers automatic cost savings in two low latency and high throughput access
         * tiers. For data that can be accessed asynchronously, you can choose to activate
         * automatic archiving capabilities within the S3 Intelligent-Tiering storage
         * class.</p> <p>The S3 Intelligent-Tiering storage class is the ideal storage
         * class for data with unknown, changing, or unpredictable access patterns,
         * independent of object size or retention period. If the size of an object is less
         * than 128 KB, it is not eligible for auto-tiering. Smaller objects can be stored,
         * but they are always charged at the Frequent Access tier rates in the S3
         * Intelligent-Tiering storage class.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>ListBucketIntelligentTieringConfigurations</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketIntelligentTieringConfiguration.html">PutBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketIntelligentTieringConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBucketIntelligentTieringConfigurationsAsync(const Model::ListBucketIntelligentTieringConfigurationsRequest& request, const ListBucketIntelligentTieringConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of inventory configurations for the bucket. You can have up to
         * 1,000 analytics configurations per bucket.</p> <p>This action supports list
         * pagination and does not return more than 100 configurations at a time. Always
         * check the <code>IsTruncated</code> element in the response. If there are no more
         * configurations to list, <code>IsTruncated</code> is set to false. If there are
         * more configurations to list, <code>IsTruncated</code> is set to true, and there
         * is a value in <code>NextContinuationToken</code>. You use the
         * <code>NextContinuationToken</code> value to continue the pagination of the list
         * by passing the value in continuation-token in the request to <code>GET</code>
         * the next page.</p> <p> To use this operation, you must have permissions to
         * perform the <code>s3:GetInventoryConfiguration</code> action. The bucket owner
         * has this permission by default. The bucket owner can grant this permission to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 inventory feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a> </p> <p>The following operations are related to
         * <code>ListBucketInventoryConfigurations</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketInventoryConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBucketInventoryConfigurationsOutcome ListBucketInventoryConfigurations(const Model::ListBucketInventoryConfigurationsRequest& request) const;

        /**
         * <p>Returns a list of inventory configurations for the bucket. You can have up to
         * 1,000 analytics configurations per bucket.</p> <p>This action supports list
         * pagination and does not return more than 100 configurations at a time. Always
         * check the <code>IsTruncated</code> element in the response. If there are no more
         * configurations to list, <code>IsTruncated</code> is set to false. If there are
         * more configurations to list, <code>IsTruncated</code> is set to true, and there
         * is a value in <code>NextContinuationToken</code>. You use the
         * <code>NextContinuationToken</code> value to continue the pagination of the list
         * by passing the value in continuation-token in the request to <code>GET</code>
         * the next page.</p> <p> To use this operation, you must have permissions to
         * perform the <code>s3:GetInventoryConfiguration</code> action. The bucket owner
         * has this permission by default. The bucket owner can grant this permission to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 inventory feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a> </p> <p>The following operations are related to
         * <code>ListBucketInventoryConfigurations</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketInventoryConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBucketInventoryConfigurationsOutcomeCallable ListBucketInventoryConfigurationsCallable(const Model::ListBucketInventoryConfigurationsRequest& request) const;

        /**
         * <p>Returns a list of inventory configurations for the bucket. You can have up to
         * 1,000 analytics configurations per bucket.</p> <p>This action supports list
         * pagination and does not return more than 100 configurations at a time. Always
         * check the <code>IsTruncated</code> element in the response. If there are no more
         * configurations to list, <code>IsTruncated</code> is set to false. If there are
         * more configurations to list, <code>IsTruncated</code> is set to true, and there
         * is a value in <code>NextContinuationToken</code>. You use the
         * <code>NextContinuationToken</code> value to continue the pagination of the list
         * by passing the value in continuation-token in the request to <code>GET</code>
         * the next page.</p> <p> To use this operation, you must have permissions to
         * perform the <code>s3:GetInventoryConfiguration</code> action. The bucket owner
         * has this permission by default. The bucket owner can grant this permission to
         * others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * the Amazon S3 inventory feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a> </p> <p>The following operations are related to
         * <code>ListBucketInventoryConfigurations</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketInventoryConfiguration.html">PutBucketInventoryConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketInventoryConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBucketInventoryConfigurationsAsync(const Model::ListBucketInventoryConfigurationsRequest& request, const ListBucketInventoryConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the metrics configurations for the bucket. The metrics configurations
         * are only for the request metrics of the bucket and do not provide information on
         * daily storage metrics. You can have up to 1,000 configurations per bucket.</p>
         * <p>This action supports list pagination and does not return more than 100
         * configurations at a time. Always check the <code>IsTruncated</code> element in
         * the response. If there are no more configurations to list,
         * <code>IsTruncated</code> is set to false. If there are more configurations to
         * list, <code>IsTruncated</code> is set to true, and there is a value in
         * <code>NextContinuationToken</code>. You use the
         * <code>NextContinuationToken</code> value to continue the pagination of the list
         * by passing the value in <code>continuation-token</code> in the request to
         * <code>GET</code> the next page.</p> <p>To use this operation, you must have
         * permissions to perform the <code>s3:GetMetricsConfiguration</code> action. The
         * bucket owner has this permission by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For more information
         * about metrics configurations and CloudWatch request metrics, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>.</p> <p>The following operations are related
         * to <code>ListBucketMetricsConfigurations</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketMetricsConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBucketMetricsConfigurationsOutcome ListBucketMetricsConfigurations(const Model::ListBucketMetricsConfigurationsRequest& request) const;

        /**
         * <p>Lists the metrics configurations for the bucket. The metrics configurations
         * are only for the request metrics of the bucket and do not provide information on
         * daily storage metrics. You can have up to 1,000 configurations per bucket.</p>
         * <p>This action supports list pagination and does not return more than 100
         * configurations at a time. Always check the <code>IsTruncated</code> element in
         * the response. If there are no more configurations to list,
         * <code>IsTruncated</code> is set to false. If there are more configurations to
         * list, <code>IsTruncated</code> is set to true, and there is a value in
         * <code>NextContinuationToken</code>. You use the
         * <code>NextContinuationToken</code> value to continue the pagination of the list
         * by passing the value in <code>continuation-token</code> in the request to
         * <code>GET</code> the next page.</p> <p>To use this operation, you must have
         * permissions to perform the <code>s3:GetMetricsConfiguration</code> action. The
         * bucket owner has this permission by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For more information
         * about metrics configurations and CloudWatch request metrics, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>.</p> <p>The following operations are related
         * to <code>ListBucketMetricsConfigurations</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketMetricsConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBucketMetricsConfigurationsOutcomeCallable ListBucketMetricsConfigurationsCallable(const Model::ListBucketMetricsConfigurationsRequest& request) const;

        /**
         * <p>Lists the metrics configurations for the bucket. The metrics configurations
         * are only for the request metrics of the bucket and do not provide information on
         * daily storage metrics. You can have up to 1,000 configurations per bucket.</p>
         * <p>This action supports list pagination and does not return more than 100
         * configurations at a time. Always check the <code>IsTruncated</code> element in
         * the response. If there are no more configurations to list,
         * <code>IsTruncated</code> is set to false. If there are more configurations to
         * list, <code>IsTruncated</code> is set to true, and there is a value in
         * <code>NextContinuationToken</code>. You use the
         * <code>NextContinuationToken</code> value to continue the pagination of the list
         * by passing the value in <code>continuation-token</code> in the request to
         * <code>GET</code> the next page.</p> <p>To use this operation, you must have
         * permissions to perform the <code>s3:GetMetricsConfiguration</code> action. The
         * bucket owner has this permission by default. The bucket owner can grant this
         * permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For more information
         * about metrics configurations and CloudWatch request metrics, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>.</p> <p>The following operations are related
         * to <code>ListBucketMetricsConfigurations</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketMetricsConfiguration.html">PutBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBucketMetricsConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBucketMetricsConfigurationsAsync(const Model::ListBucketMetricsConfigurationsRequest& request, const ListBucketMetricsConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all buckets owned by the authenticated sender of the
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBuckets">AWS API
         * Reference</a></p>
         */
        virtual Model::ListBucketsOutcome ListBuckets() const;

        /**
         * <p>Returns a list of all buckets owned by the authenticated sender of the
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBuckets">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBucketsOutcomeCallable ListBucketsCallable() const;

        /**
         * <p>Returns a list of all buckets owned by the authenticated sender of the
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListBuckets">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBucketsAsync(const ListBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>This action lists in-progress multipart uploads. An in-progress multipart
         * upload is a multipart upload that has been initiated using the Initiate
         * Multipart Upload request, but has not yet been completed or aborted.</p> <p>This
         * action returns at most 1,000 multipart uploads in the response. 1,000 multipart
         * uploads is the maximum number of uploads a response can include, which is also
         * the default value. You can further limit the number of uploads in a response by
         * specifying the <code>max-uploads</code> parameter in the response. If additional
         * multipart uploads satisfy the list criteria, the response will contain an
         * <code>IsTruncated</code> element with the value true. To list the additional
         * multipart uploads, use the <code>key-marker</code> and
         * <code>upload-id-marker</code> request parameters.</p> <p>In the response, the
         * uploads are sorted by key. If your application has initiated more than one
         * multipart upload using the same object key, then uploads in the response are
         * first sorted by key. Additionally, uploads are sorted in ascending order within
         * each key by the upload initiation time.</p> <p>For more information on multipart
         * uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a>.</p> <p>For information on permissions
         * required to use the multipart upload API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>The following operations are related to
         * <code>ListMultipartUploads</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListMultipartUploads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMultipartUploadsOutcome ListMultipartUploads(const Model::ListMultipartUploadsRequest& request) const;

        /**
         * <p>This action lists in-progress multipart uploads. An in-progress multipart
         * upload is a multipart upload that has been initiated using the Initiate
         * Multipart Upload request, but has not yet been completed or aborted.</p> <p>This
         * action returns at most 1,000 multipart uploads in the response. 1,000 multipart
         * uploads is the maximum number of uploads a response can include, which is also
         * the default value. You can further limit the number of uploads in a response by
         * specifying the <code>max-uploads</code> parameter in the response. If additional
         * multipart uploads satisfy the list criteria, the response will contain an
         * <code>IsTruncated</code> element with the value true. To list the additional
         * multipart uploads, use the <code>key-marker</code> and
         * <code>upload-id-marker</code> request parameters.</p> <p>In the response, the
         * uploads are sorted by key. If your application has initiated more than one
         * multipart upload using the same object key, then uploads in the response are
         * first sorted by key. Additionally, uploads are sorted in ascending order within
         * each key by the upload initiation time.</p> <p>For more information on multipart
         * uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a>.</p> <p>For information on permissions
         * required to use the multipart upload API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>The following operations are related to
         * <code>ListMultipartUploads</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListMultipartUploads">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMultipartUploadsOutcomeCallable ListMultipartUploadsCallable(const Model::ListMultipartUploadsRequest& request) const;

        /**
         * <p>This action lists in-progress multipart uploads. An in-progress multipart
         * upload is a multipart upload that has been initiated using the Initiate
         * Multipart Upload request, but has not yet been completed or aborted.</p> <p>This
         * action returns at most 1,000 multipart uploads in the response. 1,000 multipart
         * uploads is the maximum number of uploads a response can include, which is also
         * the default value. You can further limit the number of uploads in a response by
         * specifying the <code>max-uploads</code> parameter in the response. If additional
         * multipart uploads satisfy the list criteria, the response will contain an
         * <code>IsTruncated</code> element with the value true. To list the additional
         * multipart uploads, use the <code>key-marker</code> and
         * <code>upload-id-marker</code> request parameters.</p> <p>In the response, the
         * uploads are sorted by key. If your application has initiated more than one
         * multipart upload using the same object key, then uploads in the response are
         * first sorted by key. Additionally, uploads are sorted in ascending order within
         * each key by the upload initiation time.</p> <p>For more information on multipart
         * uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a>.</p> <p>For information on permissions
         * required to use the multipart upload API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>The following operations are related to
         * <code>ListMultipartUploads</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListMultipartUploads">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMultipartUploadsAsync(const Model::ListMultipartUploadsRequest& request, const ListMultipartUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about all versions of the objects in a bucket. You can also
         * use request parameters as selection criteria to return metadata about a subset
         * of all the object versions.</p>  <p> To use this operation, you must
         * have permissions to perform the <code>s3:ListBucketVersions</code> action. Be
         * aware of the name difference. </p>   <p> A 200 OK response can
         * contain valid or invalid XML. Make sure to design your application to parse the
         * contents of the response and handle it appropriately.</p>  <p>To use this
         * operation, you must have READ access to the bucket.</p> <p>This action is not
         * supported by Amazon S3 on Outposts.</p> <p>The following operations are related
         * to <code>ListObjectVersions</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListObjectVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectVersionsOutcome ListObjectVersions(const Model::ListObjectVersionsRequest& request) const;

        /**
         * <p>Returns metadata about all versions of the objects in a bucket. You can also
         * use request parameters as selection criteria to return metadata about a subset
         * of all the object versions.</p>  <p> To use this operation, you must
         * have permissions to perform the <code>s3:ListBucketVersions</code> action. Be
         * aware of the name difference. </p>   <p> A 200 OK response can
         * contain valid or invalid XML. Make sure to design your application to parse the
         * contents of the response and handle it appropriately.</p>  <p>To use this
         * operation, you must have READ access to the bucket.</p> <p>This action is not
         * supported by Amazon S3 on Outposts.</p> <p>The following operations are related
         * to <code>ListObjectVersions</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListObjectVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectVersionsOutcomeCallable ListObjectVersionsCallable(const Model::ListObjectVersionsRequest& request) const;

        /**
         * <p>Returns metadata about all versions of the objects in a bucket. You can also
         * use request parameters as selection criteria to return metadata about a subset
         * of all the object versions.</p>  <p> To use this operation, you must
         * have permissions to perform the <code>s3:ListBucketVersions</code> action. Be
         * aware of the name difference. </p>   <p> A 200 OK response can
         * contain valid or invalid XML. Make sure to design your application to parse the
         * contents of the response and handle it appropriately.</p>  <p>To use this
         * operation, you must have READ access to the bucket.</p> <p>This action is not
         * supported by Amazon S3 on Outposts.</p> <p>The following operations are related
         * to <code>ListObjectVersions</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListObjectVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectVersionsAsync(const Model::ListObjectVersionsRequest& request, const ListObjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns some or all (up to 1,000) of the objects in a bucket. You can use the
         * request parameters as selection criteria to return a subset of the objects in a
         * bucket. A 200 OK response can contain valid or invalid XML. Be sure to design
         * your application to parse the contents of the response and handle it
         * appropriately.</p>  <p>This action has been revised. We recommend
         * that you use the newer version, <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>,
         * when developing applications. For backward compatibility, Amazon S3 continues to
         * support <code>ListObjects</code>.</p>  <p>The following operations
         * are related to <code>ListObjects</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListObjects">AWS API
         * Reference</a></p>
         */
        virtual Model::ListObjectsOutcome ListObjects(const Model::ListObjectsRequest& request) const;

        /**
         * <p>Returns some or all (up to 1,000) of the objects in a bucket. You can use the
         * request parameters as selection criteria to return a subset of the objects in a
         * bucket. A 200 OK response can contain valid or invalid XML. Be sure to design
         * your application to parse the contents of the response and handle it
         * appropriately.</p>  <p>This action has been revised. We recommend
         * that you use the newer version, <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>,
         * when developing applications. For backward compatibility, Amazon S3 continues to
         * support <code>ListObjects</code>.</p>  <p>The following operations
         * are related to <code>ListObjects</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListObjects">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectsOutcomeCallable ListObjectsCallable(const Model::ListObjectsRequest& request) const;

        /**
         * <p>Returns some or all (up to 1,000) of the objects in a bucket. You can use the
         * request parameters as selection criteria to return a subset of the objects in a
         * bucket. A 200 OK response can contain valid or invalid XML. Be sure to design
         * your application to parse the contents of the response and handle it
         * appropriately.</p>  <p>This action has been revised. We recommend
         * that you use the newer version, <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>,
         * when developing applications. For backward compatibility, Amazon S3 continues to
         * support <code>ListObjects</code>.</p>  <p>The following operations
         * are related to <code>ListObjects</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjectsV2.html">ListObjectsV2</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListObjects">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectsAsync(const Model::ListObjectsRequest& request, const ListObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns some or all (up to 1,000) of the objects in a bucket with each
         * request. You can use the request parameters as selection criteria to return a
         * subset of the objects in a bucket. A <code>200 OK</code> response can contain
         * valid or invalid XML. Make sure to design your application to parse the contents
         * of the response and handle it appropriately. Objects are returned sorted in an
         * ascending order of the respective key names in the list. For more information
         * about listing objects, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ListingKeysUsingAPIs.html">Listing
         * object keys programmatically</a> </p> <p>To use this operation, you must have
         * READ access to the bucket.</p> <p>To use this action in an Identity and Access
         * Management (IAM) policy, you must have permissions to perform the
         * <code>s3:ListBucket</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p>  <p>This
         * section describes the latest revision of this action. We recommend that you use
         * this revised API for application development. For backward compatibility, Amazon
         * S3 continues to support the prior version of this API, <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>.</p>
         *  <p>To get a list of your buckets, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>.</p>
         * <p>The following operations are related to <code>ListObjectsV2</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListObjectsV2">AWS
         * API Reference</a></p>
         */
        virtual Model::ListObjectsV2Outcome ListObjectsV2(const Model::ListObjectsV2Request& request) const;

        /**
         * <p>Returns some or all (up to 1,000) of the objects in a bucket with each
         * request. You can use the request parameters as selection criteria to return a
         * subset of the objects in a bucket. A <code>200 OK</code> response can contain
         * valid or invalid XML. Make sure to design your application to parse the contents
         * of the response and handle it appropriately. Objects are returned sorted in an
         * ascending order of the respective key names in the list. For more information
         * about listing objects, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ListingKeysUsingAPIs.html">Listing
         * object keys programmatically</a> </p> <p>To use this operation, you must have
         * READ access to the bucket.</p> <p>To use this action in an Identity and Access
         * Management (IAM) policy, you must have permissions to perform the
         * <code>s3:ListBucket</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p>  <p>This
         * section describes the latest revision of this action. We recommend that you use
         * this revised API for application development. For backward compatibility, Amazon
         * S3 continues to support the prior version of this API, <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>.</p>
         *  <p>To get a list of your buckets, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>.</p>
         * <p>The following operations are related to <code>ListObjectsV2</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListObjectsV2">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListObjectsV2OutcomeCallable ListObjectsV2Callable(const Model::ListObjectsV2Request& request) const;

        /**
         * <p>Returns some or all (up to 1,000) of the objects in a bucket with each
         * request. You can use the request parameters as selection criteria to return a
         * subset of the objects in a bucket. A <code>200 OK</code> response can contain
         * valid or invalid XML. Make sure to design your application to parse the contents
         * of the response and handle it appropriately. Objects are returned sorted in an
         * ascending order of the respective key names in the list. For more information
         * about listing objects, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ListingKeysUsingAPIs.html">Listing
         * object keys programmatically</a> </p> <p>To use this operation, you must have
         * READ access to the bucket.</p> <p>To use this action in an Identity and Access
         * Management (IAM) policy, you must have permissions to perform the
         * <code>s3:ListBucket</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p>  <p>This
         * section describes the latest revision of this action. We recommend that you use
         * this revised API for application development. For backward compatibility, Amazon
         * S3 continues to support the prior version of this API, <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListObjects.html">ListObjects</a>.</p>
         *  <p>To get a list of your buckets, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBuckets.html">ListBuckets</a>.</p>
         * <p>The following operations are related to <code>ListObjectsV2</code>:</p> <ul>
         * <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListObjectsV2">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListObjectsV2Async(const Model::ListObjectsV2Request& request, const ListObjectsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the parts that have been uploaded for a specific multipart upload. This
         * operation must include the upload ID, which you obtain by sending the initiate
         * multipart upload request (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>).
         * This request returns a maximum of 1,000 uploaded parts. The default number of
         * parts returned is 1,000 parts. You can restrict the number of parts returned by
         * specifying the <code>max-parts</code> request parameter. If your multipart
         * upload consists of more than 1,000 parts, the response returns an
         * <code>IsTruncated</code> field with the value of true, and a
         * <code>NextPartNumberMarker</code> element. In subsequent <code>ListParts</code>
         * requests you can include the part-number-marker query string parameter and set
         * its value to the <code>NextPartNumberMarker</code> field value from the previous
         * response.</p> <p>For more information on multipart uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a>.</p> <p>For information on permissions
         * required to use the multipart upload API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>The following operations are related to
         * <code>ListParts</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListParts">AWS API
         * Reference</a></p>
         */
        virtual Model::ListPartsOutcome ListParts(const Model::ListPartsRequest& request) const;

        /**
         * <p>Lists the parts that have been uploaded for a specific multipart upload. This
         * operation must include the upload ID, which you obtain by sending the initiate
         * multipart upload request (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>).
         * This request returns a maximum of 1,000 uploaded parts. The default number of
         * parts returned is 1,000 parts. You can restrict the number of parts returned by
         * specifying the <code>max-parts</code> request parameter. If your multipart
         * upload consists of more than 1,000 parts, the response returns an
         * <code>IsTruncated</code> field with the value of true, and a
         * <code>NextPartNumberMarker</code> element. In subsequent <code>ListParts</code>
         * requests you can include the part-number-marker query string parameter and set
         * its value to the <code>NextPartNumberMarker</code> field value from the previous
         * response.</p> <p>For more information on multipart uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a>.</p> <p>For information on permissions
         * required to use the multipart upload API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>The following operations are related to
         * <code>ListParts</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListParts">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPartsOutcomeCallable ListPartsCallable(const Model::ListPartsRequest& request) const;

        /**
         * <p>Lists the parts that have been uploaded for a specific multipart upload. This
         * operation must include the upload ID, which you obtain by sending the initiate
         * multipart upload request (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>).
         * This request returns a maximum of 1,000 uploaded parts. The default number of
         * parts returned is 1,000 parts. You can restrict the number of parts returned by
         * specifying the <code>max-parts</code> request parameter. If your multipart
         * upload consists of more than 1,000 parts, the response returns an
         * <code>IsTruncated</code> field with the value of true, and a
         * <code>NextPartNumberMarker</code> element. In subsequent <code>ListParts</code>
         * requests you can include the part-number-marker query string parameter and set
         * its value to the <code>NextPartNumberMarker</code> field value from the previous
         * response.</p> <p>For more information on multipart uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a>.</p> <p>For information on permissions
         * required to use the multipart upload API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a>.</p> <p>The following operations are related to
         * <code>ListParts</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ListParts">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPartsAsync(const Model::ListPartsRequest& request, const ListPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the accelerate configuration of an existing bucket. Amazon S3 Transfer
         * Acceleration is a bucket-level feature that enables you to perform faster data
         * transfers to Amazon S3.</p> <p> To use this operation, you must have permission
         * to perform the s3:PutAccelerateConfiguration action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p> The Transfer
         * Acceleration state of a bucket can be set to one of the following two
         * values:</p> <ul> <li> <p> Enabled – Enables accelerated data transfers to the
         * bucket.</p> </li> <li> <p> Suspended – Disables accelerated data transfers to
         * the bucket.</p> </li> </ul> <p>The <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAccelerateConfiguration.html">GetBucketAccelerateConfiguration</a>
         * action returns the transfer acceleration state of a bucket.</p> <p>After setting
         * the Transfer Acceleration state of a bucket to Enabled, it might take up to
         * thirty minutes before the data transfer rates to the bucket increase.</p> <p>
         * The name of the bucket used for Transfer Acceleration must be DNS-compliant and
         * must not contain periods (".").</p> <p> For more information about transfer
         * acceleration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
         * Acceleration</a>.</p> <p>The following operations are related to
         * <code>PutBucketAccelerateConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAccelerateConfiguration.html">GetBucketAccelerateConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketAccelerateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketAccelerateConfigurationOutcome PutBucketAccelerateConfiguration(const Model::PutBucketAccelerateConfigurationRequest& request) const;

        /**
         * <p>Sets the accelerate configuration of an existing bucket. Amazon S3 Transfer
         * Acceleration is a bucket-level feature that enables you to perform faster data
         * transfers to Amazon S3.</p> <p> To use this operation, you must have permission
         * to perform the s3:PutAccelerateConfiguration action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p> The Transfer
         * Acceleration state of a bucket can be set to one of the following two
         * values:</p> <ul> <li> <p> Enabled – Enables accelerated data transfers to the
         * bucket.</p> </li> <li> <p> Suspended – Disables accelerated data transfers to
         * the bucket.</p> </li> </ul> <p>The <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAccelerateConfiguration.html">GetBucketAccelerateConfiguration</a>
         * action returns the transfer acceleration state of a bucket.</p> <p>After setting
         * the Transfer Acceleration state of a bucket to Enabled, it might take up to
         * thirty minutes before the data transfer rates to the bucket increase.</p> <p>
         * The name of the bucket used for Transfer Acceleration must be DNS-compliant and
         * must not contain periods (".").</p> <p> For more information about transfer
         * acceleration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
         * Acceleration</a>.</p> <p>The following operations are related to
         * <code>PutBucketAccelerateConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAccelerateConfiguration.html">GetBucketAccelerateConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketAccelerateConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketAccelerateConfigurationOutcomeCallable PutBucketAccelerateConfigurationCallable(const Model::PutBucketAccelerateConfigurationRequest& request) const;

        /**
         * <p>Sets the accelerate configuration of an existing bucket. Amazon S3 Transfer
         * Acceleration is a bucket-level feature that enables you to perform faster data
         * transfers to Amazon S3.</p> <p> To use this operation, you must have permission
         * to perform the s3:PutAccelerateConfiguration action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p> The Transfer
         * Acceleration state of a bucket can be set to one of the following two
         * values:</p> <ul> <li> <p> Enabled – Enables accelerated data transfers to the
         * bucket.</p> </li> <li> <p> Suspended – Disables accelerated data transfers to
         * the bucket.</p> </li> </ul> <p>The <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAccelerateConfiguration.html">GetBucketAccelerateConfiguration</a>
         * action returns the transfer acceleration state of a bucket.</p> <p>After setting
         * the Transfer Acceleration state of a bucket to Enabled, it might take up to
         * thirty minutes before the data transfer rates to the bucket increase.</p> <p>
         * The name of the bucket used for Transfer Acceleration must be DNS-compliant and
         * must not contain periods (".").</p> <p> For more information about transfer
         * acceleration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/transfer-acceleration.html">Transfer
         * Acceleration</a>.</p> <p>The following operations are related to
         * <code>PutBucketAccelerateConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAccelerateConfiguration.html">GetBucketAccelerateConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketAccelerateConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketAccelerateConfigurationAsync(const Model::PutBucketAccelerateConfigurationRequest& request, const PutBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the permissions on an existing bucket using access control lists (ACL).
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using
         * ACLs</a>. To set the ACL of a bucket, you must have <code>WRITE_ACP</code>
         * permission.</p> <p>You can use one of the following two ways to set a bucket's
         * permissions:</p> <ul> <li> <p>Specify the ACL in the request body</p> </li> <li>
         * <p>Specify permissions using request headers</p> </li> </ul>  <p>You
         * cannot specify access permission using both the body and the request
         * headers.</p>  <p>Depending on your application needs, you may choose to
         * set the ACL on a bucket using either the request body or the headers. For
         * example, if you have an existing application that updates a bucket ACL using the
         * request body, then you can continue to use that approach.</p> <p> <b>Access
         * Permissions</b> </p> <p>You can set access permissions using one of the
         * following methods:</p> <ul> <li> <p>Specify a canned ACL with the
         * <code>x-amz-acl</code> request header. Amazon S3 supports a set of predefined
         * ACLs, known as <i>canned ACLs</i>. Each canned ACL has a predefined set of
         * grantees and permissions. Specify the canned ACL name as the value of
         * <code>x-amz-acl</code>. If you use this header, you cannot use other access
         * control-specific headers in your request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly with the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
         * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
         * headers. When using these headers, you specify explicit access permissions and
         * grantees (Amazon Web Services accounts or Amazon S3 groups) who will receive the
         * permission. If you use these ACL-specific headers, you cannot use the
         * <code>x-amz-acl</code> header to set a canned ACL. These parameters map to the
         * set of permissions that Amazon S3 supports in an ACL. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>.</p> <p>You specify each grantee as a type=value
         * pair, where the type is one of the following:</p> <ul> <li> <p> <code>id</code>
         * – if the value specified is the canonical user ID of an Amazon Web Services
         * account</p> </li> <li> <p> <code>uri</code> – if you are granting permissions to
         * a predefined group</p> </li> <li> <p> <code>emailAddress</code> – if the value
         * specified is the email address of an Amazon Web Services account</p> 
         * <p>Using email addresses to specify a grantee is only supported in the following
         * Amazon Web Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li>
         * <li> <p>US West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li>
         * <li> <p> Asia Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p>
         * </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li>
         * <li> <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the
         * Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-write</code> header
         * grants create, overwrite, and delete objects permission to LogDelivery group
         * predefined by Amazon S3 and two Amazon Web Services accounts identified by their
         * email addresses.</p> <p> <code>x-amz-grant-write:
         * uri="http://acs.amazonaws.com/groups/s3/LogDelivery", id="111122223333",
         * id="555566667777" </code> </p> </li> </ul> <p>You can use either a canned ACL or
         * specify access permissions explicitly. You cannot do both.</p> <p> <b>Grantee
         * Values</b> </p> <p>You can specify the person (grantee) to whom you're assigning
         * access rights (using request elements) in the following ways:</p> <ul> <li>
         * <p>By the person's ID:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="CanonicalUser"&gt;&lt;ID&gt;&lt;&gt;ID&lt;&gt;&lt;/ID&gt;&lt;DisplayName&gt;&lt;&gt;GranteesEmail&lt;&gt;&lt;/DisplayName&gt;
         * &lt;/Grantee&gt;</code> </p> <p>DisplayName is optional and ignored in the
         * request</p> </li> <li> <p>By URI:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="Group"&gt;&lt;URI&gt;&lt;&gt;http://acs.amazonaws.com/groups/global/AuthenticatedUsers&lt;&gt;&lt;/URI&gt;&lt;/Grantee&gt;</code>
         * </p> </li> <li> <p>By Email address:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="AmazonCustomerByEmail"&gt;&lt;EmailAddress&gt;&lt;&gt;Grantees@email.com&lt;&gt;&lt;/EmailAddress&gt;lt;/Grantee&gt;</code>
         * </p> <p>The grantee is resolved to the CanonicalUser and, in a response to a GET
         * Object acl request, appears as the CanonicalUser. </p>  <p>Using email
         * addresses to specify a grantee is only supported in the following Amazon Web
         * Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li> <li> <p>US
         * West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li> <li> <p> Asia
         * Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p> </li> <li>
         * <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li> <li>
         * <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the Amazon S3
         * supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketAcl">AWS API
         * Reference</a></p>
         */
        virtual Model::PutBucketAclOutcome PutBucketAcl(const Model::PutBucketAclRequest& request) const;

        /**
         * <p>Sets the permissions on an existing bucket using access control lists (ACL).
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using
         * ACLs</a>. To set the ACL of a bucket, you must have <code>WRITE_ACP</code>
         * permission.</p> <p>You can use one of the following two ways to set a bucket's
         * permissions:</p> <ul> <li> <p>Specify the ACL in the request body</p> </li> <li>
         * <p>Specify permissions using request headers</p> </li> </ul>  <p>You
         * cannot specify access permission using both the body and the request
         * headers.</p>  <p>Depending on your application needs, you may choose to
         * set the ACL on a bucket using either the request body or the headers. For
         * example, if you have an existing application that updates a bucket ACL using the
         * request body, then you can continue to use that approach.</p> <p> <b>Access
         * Permissions</b> </p> <p>You can set access permissions using one of the
         * following methods:</p> <ul> <li> <p>Specify a canned ACL with the
         * <code>x-amz-acl</code> request header. Amazon S3 supports a set of predefined
         * ACLs, known as <i>canned ACLs</i>. Each canned ACL has a predefined set of
         * grantees and permissions. Specify the canned ACL name as the value of
         * <code>x-amz-acl</code>. If you use this header, you cannot use other access
         * control-specific headers in your request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly with the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
         * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
         * headers. When using these headers, you specify explicit access permissions and
         * grantees (Amazon Web Services accounts or Amazon S3 groups) who will receive the
         * permission. If you use these ACL-specific headers, you cannot use the
         * <code>x-amz-acl</code> header to set a canned ACL. These parameters map to the
         * set of permissions that Amazon S3 supports in an ACL. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>.</p> <p>You specify each grantee as a type=value
         * pair, where the type is one of the following:</p> <ul> <li> <p> <code>id</code>
         * – if the value specified is the canonical user ID of an Amazon Web Services
         * account</p> </li> <li> <p> <code>uri</code> – if you are granting permissions to
         * a predefined group</p> </li> <li> <p> <code>emailAddress</code> – if the value
         * specified is the email address of an Amazon Web Services account</p> 
         * <p>Using email addresses to specify a grantee is only supported in the following
         * Amazon Web Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li>
         * <li> <p>US West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li>
         * <li> <p> Asia Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p>
         * </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li>
         * <li> <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the
         * Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-write</code> header
         * grants create, overwrite, and delete objects permission to LogDelivery group
         * predefined by Amazon S3 and two Amazon Web Services accounts identified by their
         * email addresses.</p> <p> <code>x-amz-grant-write:
         * uri="http://acs.amazonaws.com/groups/s3/LogDelivery", id="111122223333",
         * id="555566667777" </code> </p> </li> </ul> <p>You can use either a canned ACL or
         * specify access permissions explicitly. You cannot do both.</p> <p> <b>Grantee
         * Values</b> </p> <p>You can specify the person (grantee) to whom you're assigning
         * access rights (using request elements) in the following ways:</p> <ul> <li>
         * <p>By the person's ID:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="CanonicalUser"&gt;&lt;ID&gt;&lt;&gt;ID&lt;&gt;&lt;/ID&gt;&lt;DisplayName&gt;&lt;&gt;GranteesEmail&lt;&gt;&lt;/DisplayName&gt;
         * &lt;/Grantee&gt;</code> </p> <p>DisplayName is optional and ignored in the
         * request</p> </li> <li> <p>By URI:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="Group"&gt;&lt;URI&gt;&lt;&gt;http://acs.amazonaws.com/groups/global/AuthenticatedUsers&lt;&gt;&lt;/URI&gt;&lt;/Grantee&gt;</code>
         * </p> </li> <li> <p>By Email address:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="AmazonCustomerByEmail"&gt;&lt;EmailAddress&gt;&lt;&gt;Grantees@email.com&lt;&gt;&lt;/EmailAddress&gt;lt;/Grantee&gt;</code>
         * </p> <p>The grantee is resolved to the CanonicalUser and, in a response to a GET
         * Object acl request, appears as the CanonicalUser. </p>  <p>Using email
         * addresses to specify a grantee is only supported in the following Amazon Web
         * Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li> <li> <p>US
         * West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li> <li> <p> Asia
         * Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p> </li> <li>
         * <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li> <li>
         * <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the Amazon S3
         * supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketAcl">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketAclOutcomeCallable PutBucketAclCallable(const Model::PutBucketAclRequest& request) const;

        /**
         * <p>Sets the permissions on an existing bucket using access control lists (ACL).
         * For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Using
         * ACLs</a>. To set the ACL of a bucket, you must have <code>WRITE_ACP</code>
         * permission.</p> <p>You can use one of the following two ways to set a bucket's
         * permissions:</p> <ul> <li> <p>Specify the ACL in the request body</p> </li> <li>
         * <p>Specify permissions using request headers</p> </li> </ul>  <p>You
         * cannot specify access permission using both the body and the request
         * headers.</p>  <p>Depending on your application needs, you may choose to
         * set the ACL on a bucket using either the request body or the headers. For
         * example, if you have an existing application that updates a bucket ACL using the
         * request body, then you can continue to use that approach.</p> <p> <b>Access
         * Permissions</b> </p> <p>You can set access permissions using one of the
         * following methods:</p> <ul> <li> <p>Specify a canned ACL with the
         * <code>x-amz-acl</code> request header. Amazon S3 supports a set of predefined
         * ACLs, known as <i>canned ACLs</i>. Each canned ACL has a predefined set of
         * grantees and permissions. Specify the canned ACL name as the value of
         * <code>x-amz-acl</code>. If you use this header, you cannot use other access
         * control-specific headers in your request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly with the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
         * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
         * headers. When using these headers, you specify explicit access permissions and
         * grantees (Amazon Web Services accounts or Amazon S3 groups) who will receive the
         * permission. If you use these ACL-specific headers, you cannot use the
         * <code>x-amz-acl</code> header to set a canned ACL. These parameters map to the
         * set of permissions that Amazon S3 supports in an ACL. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>.</p> <p>You specify each grantee as a type=value
         * pair, where the type is one of the following:</p> <ul> <li> <p> <code>id</code>
         * – if the value specified is the canonical user ID of an Amazon Web Services
         * account</p> </li> <li> <p> <code>uri</code> – if you are granting permissions to
         * a predefined group</p> </li> <li> <p> <code>emailAddress</code> – if the value
         * specified is the email address of an Amazon Web Services account</p> 
         * <p>Using email addresses to specify a grantee is only supported in the following
         * Amazon Web Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li>
         * <li> <p>US West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li>
         * <li> <p> Asia Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p>
         * </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li>
         * <li> <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the
         * Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-write</code> header
         * grants create, overwrite, and delete objects permission to LogDelivery group
         * predefined by Amazon S3 and two Amazon Web Services accounts identified by their
         * email addresses.</p> <p> <code>x-amz-grant-write:
         * uri="http://acs.amazonaws.com/groups/s3/LogDelivery", id="111122223333",
         * id="555566667777" </code> </p> </li> </ul> <p>You can use either a canned ACL or
         * specify access permissions explicitly. You cannot do both.</p> <p> <b>Grantee
         * Values</b> </p> <p>You can specify the person (grantee) to whom you're assigning
         * access rights (using request elements) in the following ways:</p> <ul> <li>
         * <p>By the person's ID:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="CanonicalUser"&gt;&lt;ID&gt;&lt;&gt;ID&lt;&gt;&lt;/ID&gt;&lt;DisplayName&gt;&lt;&gt;GranteesEmail&lt;&gt;&lt;/DisplayName&gt;
         * &lt;/Grantee&gt;</code> </p> <p>DisplayName is optional and ignored in the
         * request</p> </li> <li> <p>By URI:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="Group"&gt;&lt;URI&gt;&lt;&gt;http://acs.amazonaws.com/groups/global/AuthenticatedUsers&lt;&gt;&lt;/URI&gt;&lt;/Grantee&gt;</code>
         * </p> </li> <li> <p>By Email address:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="AmazonCustomerByEmail"&gt;&lt;EmailAddress&gt;&lt;&gt;Grantees@email.com&lt;&gt;&lt;/EmailAddress&gt;lt;/Grantee&gt;</code>
         * </p> <p>The grantee is resolved to the CanonicalUser and, in a response to a GET
         * Object acl request, appears as the CanonicalUser. </p>  <p>Using email
         * addresses to specify a grantee is only supported in the following Amazon Web
         * Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li> <li> <p>US
         * West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li> <li> <p> Asia
         * Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p> </li> <li>
         * <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li> <li>
         * <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the Amazon S3
         * supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectAcl.html">GetObjectAcl</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketAcl">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketAclAsync(const Model::PutBucketAclRequest& request, const PutBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets an analytics configuration for the bucket (specified by the analytics
         * configuration ID). You can have up to 1,000 analytics configurations per
         * bucket.</p> <p>You can choose to have storage class analysis export analysis
         * reports sent to a comma-separated values (CSV) flat file. See the
         * <code>DataExport</code> request element. Reports are updated daily and are based
         * on the object filters that you configure. When selecting data export, you
         * specify a destination bucket and an optional destination prefix where the file
         * is written. You can export the data to a destination bucket in a different
         * account. However, the destination bucket must be in the same Region as the
         * bucket that you are making the PUT analytics configuration to. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a>. </p>  <p>You must create a
         * bucket policy on the destination bucket where the exported file is written to
         * grant permissions to Amazon S3 to write objects to the bucket. For an example
         * policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html#example-bucket-policies-use-case-9">Granting
         * Permissions for Amazon S3 Inventory and Storage Class Analysis</a>.</p>
         *  <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutAnalyticsConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p class="title">
         * <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p> <i>HTTP Error: HTTP 400 Bad
         * Request</i> </p> </li> <li> <p> <i>Code: InvalidArgument</i> </p> </li> <li> <p>
         * <i>Cause: Invalid argument.</i> </p> </li> </ul> </li> <li> <ul> <li> <p>
         * <i>HTTP Error: HTTP 400 Bad Request</i> </p> </li> <li> <p> <i>Code:
         * TooManyConfigurations</i> </p> </li> <li> <p> <i>Cause: You are attempting to
         * create a new configuration but have already reached the 1,000-configuration
         * limit.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>HTTP Error: HTTP 403
         * Forbidden</i> </p> </li> <li> <p> <i>Code: AccessDenied</i> </p> </li> <li> <p>
         * <i>Cause: You are not the owner of the specified bucket, or you do not have the
         * s3:PutAnalyticsConfiguration bucket permission to set the configuration on the
         * bucket.</i> </p> </li> </ul> </li> </ul> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketAnalyticsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketAnalyticsConfigurationOutcome PutBucketAnalyticsConfiguration(const Model::PutBucketAnalyticsConfigurationRequest& request) const;

        /**
         * <p>Sets an analytics configuration for the bucket (specified by the analytics
         * configuration ID). You can have up to 1,000 analytics configurations per
         * bucket.</p> <p>You can choose to have storage class analysis export analysis
         * reports sent to a comma-separated values (CSV) flat file. See the
         * <code>DataExport</code> request element. Reports are updated daily and are based
         * on the object filters that you configure. When selecting data export, you
         * specify a destination bucket and an optional destination prefix where the file
         * is written. You can export the data to a destination bucket in a different
         * account. However, the destination bucket must be in the same Region as the
         * bucket that you are making the PUT analytics configuration to. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a>. </p>  <p>You must create a
         * bucket policy on the destination bucket where the exported file is written to
         * grant permissions to Amazon S3 to write objects to the bucket. For an example
         * policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html#example-bucket-policies-use-case-9">Granting
         * Permissions for Amazon S3 Inventory and Storage Class Analysis</a>.</p>
         *  <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutAnalyticsConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p class="title">
         * <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p> <i>HTTP Error: HTTP 400 Bad
         * Request</i> </p> </li> <li> <p> <i>Code: InvalidArgument</i> </p> </li> <li> <p>
         * <i>Cause: Invalid argument.</i> </p> </li> </ul> </li> <li> <ul> <li> <p>
         * <i>HTTP Error: HTTP 400 Bad Request</i> </p> </li> <li> <p> <i>Code:
         * TooManyConfigurations</i> </p> </li> <li> <p> <i>Cause: You are attempting to
         * create a new configuration but have already reached the 1,000-configuration
         * limit.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>HTTP Error: HTTP 403
         * Forbidden</i> </p> </li> <li> <p> <i>Code: AccessDenied</i> </p> </li> <li> <p>
         * <i>Cause: You are not the owner of the specified bucket, or you do not have the
         * s3:PutAnalyticsConfiguration bucket permission to set the configuration on the
         * bucket.</i> </p> </li> </ul> </li> </ul> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketAnalyticsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketAnalyticsConfigurationOutcomeCallable PutBucketAnalyticsConfigurationCallable(const Model::PutBucketAnalyticsConfigurationRequest& request) const;

        /**
         * <p>Sets an analytics configuration for the bucket (specified by the analytics
         * configuration ID). You can have up to 1,000 analytics configurations per
         * bucket.</p> <p>You can choose to have storage class analysis export analysis
         * reports sent to a comma-separated values (CSV) flat file. See the
         * <code>DataExport</code> request element. Reports are updated daily and are based
         * on the object filters that you configure. When selecting data export, you
         * specify a destination bucket and an optional destination prefix where the file
         * is written. You can export the data to a destination bucket in a different
         * account. However, the destination bucket must be in the same Region as the
         * bucket that you are making the PUT analytics configuration to. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/analytics-storage-class.html">Amazon
         * S3 Analytics – Storage Class Analysis</a>. </p>  <p>You must create a
         * bucket policy on the destination bucket where the exported file is written to
         * grant permissions to Amazon S3 to write objects to the bucket. For an example
         * policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html#example-bucket-policies-use-case-9">Granting
         * Permissions for Amazon S3 Inventory and Storage Class Analysis</a>.</p>
         *  <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutAnalyticsConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p class="title">
         * <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p> <i>HTTP Error: HTTP 400 Bad
         * Request</i> </p> </li> <li> <p> <i>Code: InvalidArgument</i> </p> </li> <li> <p>
         * <i>Cause: Invalid argument.</i> </p> </li> </ul> </li> <li> <ul> <li> <p>
         * <i>HTTP Error: HTTP 400 Bad Request</i> </p> </li> <li> <p> <i>Code:
         * TooManyConfigurations</i> </p> </li> <li> <p> <i>Cause: You are attempting to
         * create a new configuration but have already reached the 1,000-configuration
         * limit.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>HTTP Error: HTTP 403
         * Forbidden</i> </p> </li> <li> <p> <i>Code: AccessDenied</i> </p> </li> <li> <p>
         * <i>Cause: You are not the owner of the specified bucket, or you do not have the
         * s3:PutAnalyticsConfiguration bucket permission to set the configuration on the
         * bucket.</i> </p> </li> </ul> </li> </ul> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketAnalyticsConfiguration.html">GetBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketAnalyticsConfiguration.html">DeleteBucketAnalyticsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketAnalyticsConfigurations.html">ListBucketAnalyticsConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketAnalyticsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketAnalyticsConfigurationAsync(const Model::PutBucketAnalyticsConfigurationRequest& request, const PutBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the <code>cors</code> configuration for your bucket. If the
         * configuration exists, Amazon S3 replaces it.</p> <p>To use this operation, you
         * must be allowed to perform the <code>s3:PutBucketCORS</code> action. By default,
         * the bucket owner has this permission and can grant it to others.</p> <p>You set
         * this configuration on a bucket so that the bucket can service cross-origin
         * requests. For example, you might want to enable a request whose origin is
         * <code>http://www.example.com</code> to access your Amazon S3 bucket at
         * <code>my.example.bucket.com</code> by using the browser's
         * <code>XMLHttpRequest</code> capability.</p> <p>To enable cross-origin resource
         * sharing (CORS) on a bucket, you add the <code>cors</code> subresource to the
         * bucket. The <code>cors</code> subresource is an XML document in which you
         * configure rules that identify origins and the HTTP methods that can be executed
         * on your bucket. The document is limited to 64 KB in size. </p> <p>When Amazon S3
         * receives a cross-origin request (or a pre-flight OPTIONS request) against a
         * bucket, it evaluates the <code>cors</code> configuration on the bucket and uses
         * the first <code>CORSRule</code> rule that matches the incoming browser request
         * to enable a cross-origin request. For a rule to match, the following conditions
         * must be met:</p> <ul> <li> <p>The request's <code>Origin</code> header must
         * match <code>AllowedOrigin</code> elements.</p> </li> <li> <p>The request method
         * (for example, GET, PUT, HEAD, and so on) or the
         * <code>Access-Control-Request-Method</code> header in case of a pre-flight
         * <code>OPTIONS</code> request must be one of the <code>AllowedMethod</code>
         * elements. </p> </li> <li> <p>Every header specified in the
         * <code>Access-Control-Request-Headers</code> request header of a pre-flight
         * request must match an <code>AllowedHeader</code> element. </p> </li> </ul> <p>
         * For more information about CORS, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html">Enabling
         * Cross-Origin Resource Sharing</a> in the <i>Amazon S3 User Guide</i>.</p> <p
         * class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketCors.html">GetBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketCors.html">DeleteBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTOPTIONSobject.html">RESTOPTIONSobject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketCors">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketCorsOutcome PutBucketCors(const Model::PutBucketCorsRequest& request) const;

        /**
         * <p>Sets the <code>cors</code> configuration for your bucket. If the
         * configuration exists, Amazon S3 replaces it.</p> <p>To use this operation, you
         * must be allowed to perform the <code>s3:PutBucketCORS</code> action. By default,
         * the bucket owner has this permission and can grant it to others.</p> <p>You set
         * this configuration on a bucket so that the bucket can service cross-origin
         * requests. For example, you might want to enable a request whose origin is
         * <code>http://www.example.com</code> to access your Amazon S3 bucket at
         * <code>my.example.bucket.com</code> by using the browser's
         * <code>XMLHttpRequest</code> capability.</p> <p>To enable cross-origin resource
         * sharing (CORS) on a bucket, you add the <code>cors</code> subresource to the
         * bucket. The <code>cors</code> subresource is an XML document in which you
         * configure rules that identify origins and the HTTP methods that can be executed
         * on your bucket. The document is limited to 64 KB in size. </p> <p>When Amazon S3
         * receives a cross-origin request (or a pre-flight OPTIONS request) against a
         * bucket, it evaluates the <code>cors</code> configuration on the bucket and uses
         * the first <code>CORSRule</code> rule that matches the incoming browser request
         * to enable a cross-origin request. For a rule to match, the following conditions
         * must be met:</p> <ul> <li> <p>The request's <code>Origin</code> header must
         * match <code>AllowedOrigin</code> elements.</p> </li> <li> <p>The request method
         * (for example, GET, PUT, HEAD, and so on) or the
         * <code>Access-Control-Request-Method</code> header in case of a pre-flight
         * <code>OPTIONS</code> request must be one of the <code>AllowedMethod</code>
         * elements. </p> </li> <li> <p>Every header specified in the
         * <code>Access-Control-Request-Headers</code> request header of a pre-flight
         * request must match an <code>AllowedHeader</code> element. </p> </li> </ul> <p>
         * For more information about CORS, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html">Enabling
         * Cross-Origin Resource Sharing</a> in the <i>Amazon S3 User Guide</i>.</p> <p
         * class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketCors.html">GetBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketCors.html">DeleteBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTOPTIONSobject.html">RESTOPTIONSobject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketCors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketCorsOutcomeCallable PutBucketCorsCallable(const Model::PutBucketCorsRequest& request) const;

        /**
         * <p>Sets the <code>cors</code> configuration for your bucket. If the
         * configuration exists, Amazon S3 replaces it.</p> <p>To use this operation, you
         * must be allowed to perform the <code>s3:PutBucketCORS</code> action. By default,
         * the bucket owner has this permission and can grant it to others.</p> <p>You set
         * this configuration on a bucket so that the bucket can service cross-origin
         * requests. For example, you might want to enable a request whose origin is
         * <code>http://www.example.com</code> to access your Amazon S3 bucket at
         * <code>my.example.bucket.com</code> by using the browser's
         * <code>XMLHttpRequest</code> capability.</p> <p>To enable cross-origin resource
         * sharing (CORS) on a bucket, you add the <code>cors</code> subresource to the
         * bucket. The <code>cors</code> subresource is an XML document in which you
         * configure rules that identify origins and the HTTP methods that can be executed
         * on your bucket. The document is limited to 64 KB in size. </p> <p>When Amazon S3
         * receives a cross-origin request (or a pre-flight OPTIONS request) against a
         * bucket, it evaluates the <code>cors</code> configuration on the bucket and uses
         * the first <code>CORSRule</code> rule that matches the incoming browser request
         * to enable a cross-origin request. For a rule to match, the following conditions
         * must be met:</p> <ul> <li> <p>The request's <code>Origin</code> header must
         * match <code>AllowedOrigin</code> elements.</p> </li> <li> <p>The request method
         * (for example, GET, PUT, HEAD, and so on) or the
         * <code>Access-Control-Request-Method</code> header in case of a pre-flight
         * <code>OPTIONS</code> request must be one of the <code>AllowedMethod</code>
         * elements. </p> </li> <li> <p>Every header specified in the
         * <code>Access-Control-Request-Headers</code> request header of a pre-flight
         * request must match an <code>AllowedHeader</code> element. </p> </li> </ul> <p>
         * For more information about CORS, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cors.html">Enabling
         * Cross-Origin Resource Sharing</a> in the <i>Amazon S3 User Guide</i>.</p> <p
         * class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketCors.html">GetBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketCors.html">DeleteBucketCors</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTOPTIONSobject.html">RESTOPTIONSobject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketCors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketCorsAsync(const Model::PutBucketCorsRequest& request, const PutBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action uses the <code>encryption</code> subresource to configure default
         * encryption and Amazon S3 Bucket Key for an existing bucket.</p> <p>Default
         * encryption for a bucket can use server-side encryption with Amazon S3-managed
         * keys (SSE-S3) or customer managed keys (SSE-KMS). If you specify default
         * encryption using SSE-KMS, you can also configure Amazon S3 Bucket Key. For
         * information about default encryption, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
         * S3 default bucket encryption</a> in the <i>Amazon S3 User Guide</i>. For more
         * information about S3 Bucket Keys, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3
         * Bucket Keys</a> in the <i>Amazon S3 User Guide</i>.</p>  <p>This
         * action requires Amazon Web Services Signature Version 4. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">
         * Authenticating Requests (Amazon Web Services Signature Version 4)</a>. </p>
         *  <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutEncryptionConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the Amazon S3 User Guide.
         * </p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketEncryption.html">GetBucketEncryption</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketEncryption.html">DeleteBucketEncryption</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketEncryption">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketEncryptionOutcome PutBucketEncryption(const Model::PutBucketEncryptionRequest& request) const;

        /**
         * <p>This action uses the <code>encryption</code> subresource to configure default
         * encryption and Amazon S3 Bucket Key for an existing bucket.</p> <p>Default
         * encryption for a bucket can use server-side encryption with Amazon S3-managed
         * keys (SSE-S3) or customer managed keys (SSE-KMS). If you specify default
         * encryption using SSE-KMS, you can also configure Amazon S3 Bucket Key. For
         * information about default encryption, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
         * S3 default bucket encryption</a> in the <i>Amazon S3 User Guide</i>. For more
         * information about S3 Bucket Keys, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3
         * Bucket Keys</a> in the <i>Amazon S3 User Guide</i>.</p>  <p>This
         * action requires Amazon Web Services Signature Version 4. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">
         * Authenticating Requests (Amazon Web Services Signature Version 4)</a>. </p>
         *  <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutEncryptionConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the Amazon S3 User Guide.
         * </p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketEncryption.html">GetBucketEncryption</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketEncryption.html">DeleteBucketEncryption</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketEncryption">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketEncryptionOutcomeCallable PutBucketEncryptionCallable(const Model::PutBucketEncryptionRequest& request) const;

        /**
         * <p>This action uses the <code>encryption</code> subresource to configure default
         * encryption and Amazon S3 Bucket Key for an existing bucket.</p> <p>Default
         * encryption for a bucket can use server-side encryption with Amazon S3-managed
         * keys (SSE-S3) or customer managed keys (SSE-KMS). If you specify default
         * encryption using SSE-KMS, you can also configure Amazon S3 Bucket Key. For
         * information about default encryption, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-encryption.html">Amazon
         * S3 default bucket encryption</a> in the <i>Amazon S3 User Guide</i>. For more
         * information about S3 Bucket Keys, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3
         * Bucket Keys</a> in the <i>Amazon S3 User Guide</i>.</p>  <p>This
         * action requires Amazon Web Services Signature Version 4. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">
         * Authenticating Requests (Amazon Web Services Signature Version 4)</a>. </p>
         *  <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutEncryptionConfiguration</code> action. The bucket owner has this
         * permission by default. The bucket owner can grant this permission to others. For
         * more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the Amazon S3 User Guide.
         * </p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketEncryption.html">GetBucketEncryption</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketEncryption.html">DeleteBucketEncryption</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketEncryption">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketEncryptionAsync(const Model::PutBucketEncryptionRequest& request, const PutBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts a S3 Intelligent-Tiering configuration to the specified bucket. You can
         * have up to 1,000 S3 Intelligent-Tiering configurations per bucket.</p> <p>The S3
         * Intelligent-Tiering storage class is designed to optimize storage costs by
         * automatically moving data to the most cost-effective storage access tier,
         * without performance impact or operational overhead. S3 Intelligent-Tiering
         * delivers automatic cost savings in two low latency and high throughput access
         * tiers. For data that can be accessed asynchronously, you can choose to activate
         * automatic archiving capabilities within the S3 Intelligent-Tiering storage
         * class.</p> <p>The S3 Intelligent-Tiering storage class is the ideal storage
         * class for data with unknown, changing, or unpredictable access patterns,
         * independent of object size or retention period. If the size of an object is less
         * than 128 KB, it is not eligible for auto-tiering. Smaller objects can be stored,
         * but they are always charged at the Frequent Access tier rates in the S3
         * Intelligent-Tiering storage class.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>PutBucketIntelligentTieringConfiguration</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
         * </p> </li> </ul>  <p>You only need S3 Intelligent-Tiering enabled on a
         * bucket if you want to automatically move objects stored in the S3
         * Intelligent-Tiering storage class to the Archive Access or Deep Archive Access
         * tier.</p>  <p class="title"> <b>Special Errors</b> </p> <ul> <li> <p
         * class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul> <li> <p> <i>Code:</i>
         * InvalidArgument</p> </li> <li> <p> <i>Cause:</i> Invalid Argument</p> </li>
         * </ul> </li> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul>
         * <li> <p> <i>Code:</i> TooManyConfigurations</p> </li> <li> <p> <i>Cause:</i> You
         * are attempting to create a new configuration but have already reached the
         * 1,000-configuration limit. </p> </li> </ul> </li> <li> <p class="title"> <b>HTTP
         * 403 Forbidden Error</b> </p> <ul> <li> <p> <i>Code:</i> AccessDenied</p> </li>
         * <li> <p> <i>Cause:</i> You are not the owner of the specified bucket, or you do
         * not have the <code>s3:PutIntelligentTieringConfiguration</code> bucket
         * permission to set the configuration on the bucket. </p> </li> </ul> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketIntelligentTieringConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketIntelligentTieringConfigurationOutcome PutBucketIntelligentTieringConfiguration(const Model::PutBucketIntelligentTieringConfigurationRequest& request) const;

        /**
         * <p>Puts a S3 Intelligent-Tiering configuration to the specified bucket. You can
         * have up to 1,000 S3 Intelligent-Tiering configurations per bucket.</p> <p>The S3
         * Intelligent-Tiering storage class is designed to optimize storage costs by
         * automatically moving data to the most cost-effective storage access tier,
         * without performance impact or operational overhead. S3 Intelligent-Tiering
         * delivers automatic cost savings in two low latency and high throughput access
         * tiers. For data that can be accessed asynchronously, you can choose to activate
         * automatic archiving capabilities within the S3 Intelligent-Tiering storage
         * class.</p> <p>The S3 Intelligent-Tiering storage class is the ideal storage
         * class for data with unknown, changing, or unpredictable access patterns,
         * independent of object size or retention period. If the size of an object is less
         * than 128 KB, it is not eligible for auto-tiering. Smaller objects can be stored,
         * but they are always charged at the Frequent Access tier rates in the S3
         * Intelligent-Tiering storage class.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>PutBucketIntelligentTieringConfiguration</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
         * </p> </li> </ul>  <p>You only need S3 Intelligent-Tiering enabled on a
         * bucket if you want to automatically move objects stored in the S3
         * Intelligent-Tiering storage class to the Archive Access or Deep Archive Access
         * tier.</p>  <p class="title"> <b>Special Errors</b> </p> <ul> <li> <p
         * class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul> <li> <p> <i>Code:</i>
         * InvalidArgument</p> </li> <li> <p> <i>Cause:</i> Invalid Argument</p> </li>
         * </ul> </li> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul>
         * <li> <p> <i>Code:</i> TooManyConfigurations</p> </li> <li> <p> <i>Cause:</i> You
         * are attempting to create a new configuration but have already reached the
         * 1,000-configuration limit. </p> </li> </ul> </li> <li> <p class="title"> <b>HTTP
         * 403 Forbidden Error</b> </p> <ul> <li> <p> <i>Code:</i> AccessDenied</p> </li>
         * <li> <p> <i>Cause:</i> You are not the owner of the specified bucket, or you do
         * not have the <code>s3:PutIntelligentTieringConfiguration</code> bucket
         * permission to set the configuration on the bucket. </p> </li> </ul> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketIntelligentTieringConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketIntelligentTieringConfigurationOutcomeCallable PutBucketIntelligentTieringConfigurationCallable(const Model::PutBucketIntelligentTieringConfigurationRequest& request) const;

        /**
         * <p>Puts a S3 Intelligent-Tiering configuration to the specified bucket. You can
         * have up to 1,000 S3 Intelligent-Tiering configurations per bucket.</p> <p>The S3
         * Intelligent-Tiering storage class is designed to optimize storage costs by
         * automatically moving data to the most cost-effective storage access tier,
         * without performance impact or operational overhead. S3 Intelligent-Tiering
         * delivers automatic cost savings in two low latency and high throughput access
         * tiers. For data that can be accessed asynchronously, you can choose to activate
         * automatic archiving capabilities within the S3 Intelligent-Tiering storage
         * class.</p> <p>The S3 Intelligent-Tiering storage class is the ideal storage
         * class for data with unknown, changing, or unpredictable access patterns,
         * independent of object size or retention period. If the size of an object is less
         * than 128 KB, it is not eligible for auto-tiering. Smaller objects can be stored,
         * but they are always charged at the Frequent Access tier rates in the S3
         * Intelligent-Tiering storage class.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html#sc-dynamic-data-access">Storage
         * class for automatically optimizing frequently and infrequently accessed
         * objects</a>.</p> <p>Operations related to
         * <code>PutBucketIntelligentTieringConfiguration</code> include: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketIntelligentTieringConfiguration.html">DeleteBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketIntelligentTieringConfiguration.html">GetBucketIntelligentTieringConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketIntelligentTieringConfigurations.html">ListBucketIntelligentTieringConfigurations</a>
         * </p> </li> </ul>  <p>You only need S3 Intelligent-Tiering enabled on a
         * bucket if you want to automatically move objects stored in the S3
         * Intelligent-Tiering storage class to the Archive Access or Deep Archive Access
         * tier.</p>  <p class="title"> <b>Special Errors</b> </p> <ul> <li> <p
         * class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul> <li> <p> <i>Code:</i>
         * InvalidArgument</p> </li> <li> <p> <i>Cause:</i> Invalid Argument</p> </li>
         * </ul> </li> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul>
         * <li> <p> <i>Code:</i> TooManyConfigurations</p> </li> <li> <p> <i>Cause:</i> You
         * are attempting to create a new configuration but have already reached the
         * 1,000-configuration limit. </p> </li> </ul> </li> <li> <p class="title"> <b>HTTP
         * 403 Forbidden Error</b> </p> <ul> <li> <p> <i>Code:</i> AccessDenied</p> </li>
         * <li> <p> <i>Cause:</i> You are not the owner of the specified bucket, or you do
         * not have the <code>s3:PutIntelligentTieringConfiguration</code> bucket
         * permission to set the configuration on the bucket. </p> </li> </ul> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketIntelligentTieringConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketIntelligentTieringConfigurationAsync(const Model::PutBucketIntelligentTieringConfigurationRequest& request, const PutBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This implementation of the <code>PUT</code> action adds an inventory
         * configuration (identified by the inventory ID) to the bucket. You can have up to
         * 1,000 inventory configurations per bucket. </p> <p>Amazon S3 inventory generates
         * inventories of the objects in the bucket on a daily or weekly basis, and the
         * results are published to a flat file. The bucket that is inventoried is called
         * the <i>source</i> bucket, and the bucket where the inventory flat file is stored
         * is called the <i>destination</i> bucket. The <i>destination</i> bucket must be
         * in the same Amazon Web Services Region as the <i>source</i> bucket. </p> <p>When
         * you configure an inventory for a <i>source</i> bucket, you specify the
         * <i>destination</i> bucket where you want the inventory to be stored, and whether
         * to generate the inventory daily or weekly. You can also configure what object
         * metadata to include and whether to inventory all object versions or only current
         * versions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a> in the Amazon S3 User Guide.</p>  <p>You must create
         * a bucket policy on the <i>destination</i> bucket to grant permissions to Amazon
         * S3 to write objects to the bucket in the defined location. For an example
         * policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html#example-bucket-policies-use-case-9">
         * Granting Permissions for Amazon S3 Inventory and Storage Class Analysis</a>.</p>
         *  <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutInventoryConfiguration</code> action. The bucket owner has this
         * permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the Amazon S3 User
         * Guide.</p> <p class="title"> <b>Special Errors</b> </p> <ul> <li> <p
         * class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul> <li> <p> <i>Code:</i>
         * InvalidArgument</p> </li> <li> <p> <i>Cause:</i> Invalid Argument</p> </li>
         * </ul> </li> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul>
         * <li> <p> <i>Code:</i> TooManyConfigurations</p> </li> <li> <p> <i>Cause:</i> You
         * are attempting to create a new configuration but have already reached the
         * 1,000-configuration limit. </p> </li> </ul> </li> <li> <p class="title"> <b>HTTP
         * 403 Forbidden Error</b> </p> <ul> <li> <p> <i>Code:</i> AccessDenied</p> </li>
         * <li> <p> <i>Cause:</i> You are not the owner of the specified bucket, or you do
         * not have the <code>s3:PutInventoryConfiguration</code> bucket permission to set
         * the configuration on the bucket. </p> </li> </ul> </li> </ul> <p class="title">
         * <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketInventoryConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketInventoryConfigurationOutcome PutBucketInventoryConfiguration(const Model::PutBucketInventoryConfigurationRequest& request) const;

        /**
         * <p>This implementation of the <code>PUT</code> action adds an inventory
         * configuration (identified by the inventory ID) to the bucket. You can have up to
         * 1,000 inventory configurations per bucket. </p> <p>Amazon S3 inventory generates
         * inventories of the objects in the bucket on a daily or weekly basis, and the
         * results are published to a flat file. The bucket that is inventoried is called
         * the <i>source</i> bucket, and the bucket where the inventory flat file is stored
         * is called the <i>destination</i> bucket. The <i>destination</i> bucket must be
         * in the same Amazon Web Services Region as the <i>source</i> bucket. </p> <p>When
         * you configure an inventory for a <i>source</i> bucket, you specify the
         * <i>destination</i> bucket where you want the inventory to be stored, and whether
         * to generate the inventory daily or weekly. You can also configure what object
         * metadata to include and whether to inventory all object versions or only current
         * versions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a> in the Amazon S3 User Guide.</p>  <p>You must create
         * a bucket policy on the <i>destination</i> bucket to grant permissions to Amazon
         * S3 to write objects to the bucket in the defined location. For an example
         * policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html#example-bucket-policies-use-case-9">
         * Granting Permissions for Amazon S3 Inventory and Storage Class Analysis</a>.</p>
         *  <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutInventoryConfiguration</code> action. The bucket owner has this
         * permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the Amazon S3 User
         * Guide.</p> <p class="title"> <b>Special Errors</b> </p> <ul> <li> <p
         * class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul> <li> <p> <i>Code:</i>
         * InvalidArgument</p> </li> <li> <p> <i>Cause:</i> Invalid Argument</p> </li>
         * </ul> </li> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul>
         * <li> <p> <i>Code:</i> TooManyConfigurations</p> </li> <li> <p> <i>Cause:</i> You
         * are attempting to create a new configuration but have already reached the
         * 1,000-configuration limit. </p> </li> </ul> </li> <li> <p class="title"> <b>HTTP
         * 403 Forbidden Error</b> </p> <ul> <li> <p> <i>Code:</i> AccessDenied</p> </li>
         * <li> <p> <i>Cause:</i> You are not the owner of the specified bucket, or you do
         * not have the <code>s3:PutInventoryConfiguration</code> bucket permission to set
         * the configuration on the bucket. </p> </li> </ul> </li> </ul> <p class="title">
         * <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketInventoryConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketInventoryConfigurationOutcomeCallable PutBucketInventoryConfigurationCallable(const Model::PutBucketInventoryConfigurationRequest& request) const;

        /**
         * <p>This implementation of the <code>PUT</code> action adds an inventory
         * configuration (identified by the inventory ID) to the bucket. You can have up to
         * 1,000 inventory configurations per bucket. </p> <p>Amazon S3 inventory generates
         * inventories of the objects in the bucket on a daily or weekly basis, and the
         * results are published to a flat file. The bucket that is inventoried is called
         * the <i>source</i> bucket, and the bucket where the inventory flat file is stored
         * is called the <i>destination</i> bucket. The <i>destination</i> bucket must be
         * in the same Amazon Web Services Region as the <i>source</i> bucket. </p> <p>When
         * you configure an inventory for a <i>source</i> bucket, you specify the
         * <i>destination</i> bucket where you want the inventory to be stored, and whether
         * to generate the inventory daily or weekly. You can also configure what object
         * metadata to include and whether to inventory all object versions or only current
         * versions. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-inventory.html">Amazon
         * S3 Inventory</a> in the Amazon S3 User Guide.</p>  <p>You must create
         * a bucket policy on the <i>destination</i> bucket to grant permissions to Amazon
         * S3 to write objects to the bucket in the defined location. For an example
         * policy, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html#example-bucket-policies-use-case-9">
         * Granting Permissions for Amazon S3 Inventory and Storage Class Analysis</a>.</p>
         *  <p>To use this operation, you must have permissions to perform the
         * <code>s3:PutInventoryConfiguration</code> action. The bucket owner has this
         * permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the Amazon S3 User
         * Guide.</p> <p class="title"> <b>Special Errors</b> </p> <ul> <li> <p
         * class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul> <li> <p> <i>Code:</i>
         * InvalidArgument</p> </li> <li> <p> <i>Cause:</i> Invalid Argument</p> </li>
         * </ul> </li> <li> <p class="title"> <b>HTTP 400 Bad Request Error</b> </p> <ul>
         * <li> <p> <i>Code:</i> TooManyConfigurations</p> </li> <li> <p> <i>Cause:</i> You
         * are attempting to create a new configuration but have already reached the
         * 1,000-configuration limit. </p> </li> </ul> </li> <li> <p class="title"> <b>HTTP
         * 403 Forbidden Error</b> </p> <ul> <li> <p> <i>Code:</i> AccessDenied</p> </li>
         * <li> <p> <i>Cause:</i> You are not the owner of the specified bucket, or you do
         * not have the <code>s3:PutInventoryConfiguration</code> bucket permission to set
         * the configuration on the bucket. </p> </li> </ul> </li> </ul> <p class="title">
         * <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketInventoryConfiguration.html">GetBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketInventoryConfiguration.html">DeleteBucketInventoryConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketInventoryConfigurations.html">ListBucketInventoryConfigurations</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketInventoryConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketInventoryConfigurationAsync(const Model::PutBucketInventoryConfigurationRequest& request, const PutBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new lifecycle configuration for the bucket or replaces an existing
         * lifecycle configuration. For information about lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-lifecycle-mgmt.html">Managing
         * your storage lifecycle</a>.</p>  <p>Bucket lifecycle configuration now
         * supports specifying a lifecycle rule using an object key name prefix, one or
         * more object tags, or a combination of both. Accordingly, this section describes
         * the latest API. The previous version of the API supported filtering based only
         * on an object key name prefix, which is supported for backward compatibility. For
         * the related API description, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>.</p>
         *  <p> <b>Rules</b> </p> <p>You specify the lifecycle configuration in your
         * request body. The lifecycle configuration is specified as XML consisting of one
         * or more rules. Each rule consists of the following:</p> <ul> <li> <p>Filter
         * identifying a subset of objects to which the rule applies. The filter can be
         * based on a key name prefix, object tags, or a combination of both.</p> </li>
         * <li> <p>Status whether the rule is in effect.</p> </li> <li> <p>One or more
         * lifecycle transition and expiration actions that you want Amazon S3 to perform
         * on the objects identified by the filter. If the state of your bucket is
         * versioning-enabled or versioning-suspended, you can have many versions of the
         * same object (one current version and zero or more noncurrent versions). Amazon
         * S3 provides predefined actions that you can specify for current and noncurrent
         * object versions.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
         * Lifecycle Management</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html">Lifecycle
         * Configuration Elements</a>.</p> <p> <b>Permissions</b> </p> <p>By default, all
         * Amazon S3 resources are private, including buckets, objects, and related
         * subresources (for example, lifecycle configuration and website configuration).
         * Only the resource owner (that is, the Amazon Web Services account that created
         * it) can access the resource. The resource owner can optionally grant access
         * permissions to others by writing an access policy. For this operation, a user
         * must get the s3:PutLifecycleConfiguration permission.</p> <p>You can also
         * explicitly deny permissions. Explicit deny also supersedes any other
         * permissions. If you want to block users or accounts from removing or deleting
         * objects from your bucket, you must deny them permissions for the following
         * actions:</p> <ul> <li> <p>s3:DeleteObject</p> </li> <li>
         * <p>s3:DeleteObjectVersion</p> </li> <li> <p>s3:PutLifecycleConfiguration</p>
         * </li> </ul> <p>For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>The following are
         * related to <code>PutBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/lifecycle-configuration-examples.html">Examples
         * of Lifecycle Configuration</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketLifecycleConfigurationOutcome PutBucketLifecycleConfiguration(const Model::PutBucketLifecycleConfigurationRequest& request) const;

        /**
         * <p>Creates a new lifecycle configuration for the bucket or replaces an existing
         * lifecycle configuration. For information about lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-lifecycle-mgmt.html">Managing
         * your storage lifecycle</a>.</p>  <p>Bucket lifecycle configuration now
         * supports specifying a lifecycle rule using an object key name prefix, one or
         * more object tags, or a combination of both. Accordingly, this section describes
         * the latest API. The previous version of the API supported filtering based only
         * on an object key name prefix, which is supported for backward compatibility. For
         * the related API description, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>.</p>
         *  <p> <b>Rules</b> </p> <p>You specify the lifecycle configuration in your
         * request body. The lifecycle configuration is specified as XML consisting of one
         * or more rules. Each rule consists of the following:</p> <ul> <li> <p>Filter
         * identifying a subset of objects to which the rule applies. The filter can be
         * based on a key name prefix, object tags, or a combination of both.</p> </li>
         * <li> <p>Status whether the rule is in effect.</p> </li> <li> <p>One or more
         * lifecycle transition and expiration actions that you want Amazon S3 to perform
         * on the objects identified by the filter. If the state of your bucket is
         * versioning-enabled or versioning-suspended, you can have many versions of the
         * same object (one current version and zero or more noncurrent versions). Amazon
         * S3 provides predefined actions that you can specify for current and noncurrent
         * object versions.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
         * Lifecycle Management</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html">Lifecycle
         * Configuration Elements</a>.</p> <p> <b>Permissions</b> </p> <p>By default, all
         * Amazon S3 resources are private, including buckets, objects, and related
         * subresources (for example, lifecycle configuration and website configuration).
         * Only the resource owner (that is, the Amazon Web Services account that created
         * it) can access the resource. The resource owner can optionally grant access
         * permissions to others by writing an access policy. For this operation, a user
         * must get the s3:PutLifecycleConfiguration permission.</p> <p>You can also
         * explicitly deny permissions. Explicit deny also supersedes any other
         * permissions. If you want to block users or accounts from removing or deleting
         * objects from your bucket, you must deny them permissions for the following
         * actions:</p> <ul> <li> <p>s3:DeleteObject</p> </li> <li>
         * <p>s3:DeleteObjectVersion</p> </li> <li> <p>s3:PutLifecycleConfiguration</p>
         * </li> </ul> <p>For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>The following are
         * related to <code>PutBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/lifecycle-configuration-examples.html">Examples
         * of Lifecycle Configuration</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketLifecycleConfigurationOutcomeCallable PutBucketLifecycleConfigurationCallable(const Model::PutBucketLifecycleConfigurationRequest& request) const;

        /**
         * <p>Creates a new lifecycle configuration for the bucket or replaces an existing
         * lifecycle configuration. For information about lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-lifecycle-mgmt.html">Managing
         * your storage lifecycle</a>.</p>  <p>Bucket lifecycle configuration now
         * supports specifying a lifecycle rule using an object key name prefix, one or
         * more object tags, or a combination of both. Accordingly, this section describes
         * the latest API. The previous version of the API supported filtering based only
         * on an object key name prefix, which is supported for backward compatibility. For
         * the related API description, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycle.html">PutBucketLifecycle</a>.</p>
         *  <p> <b>Rules</b> </p> <p>You specify the lifecycle configuration in your
         * request body. The lifecycle configuration is specified as XML consisting of one
         * or more rules. Each rule consists of the following:</p> <ul> <li> <p>Filter
         * identifying a subset of objects to which the rule applies. The filter can be
         * based on a key name prefix, object tags, or a combination of both.</p> </li>
         * <li> <p>Status whether the rule is in effect.</p> </li> <li> <p>One or more
         * lifecycle transition and expiration actions that you want Amazon S3 to perform
         * on the objects identified by the filter. If the state of your bucket is
         * versioning-enabled or versioning-suspended, you can have many versions of the
         * same object (one current version and zero or more noncurrent versions). Amazon
         * S3 provides predefined actions that you can specify for current and noncurrent
         * object versions.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
         * Lifecycle Management</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/intro-lifecycle-rules.html">Lifecycle
         * Configuration Elements</a>.</p> <p> <b>Permissions</b> </p> <p>By default, all
         * Amazon S3 resources are private, including buckets, objects, and related
         * subresources (for example, lifecycle configuration and website configuration).
         * Only the resource owner (that is, the Amazon Web Services account that created
         * it) can access the resource. The resource owner can optionally grant access
         * permissions to others by writing an access policy. For this operation, a user
         * must get the s3:PutLifecycleConfiguration permission.</p> <p>You can also
         * explicitly deny permissions. Explicit deny also supersedes any other
         * permissions. If you want to block users or accounts from removing or deleting
         * objects from your bucket, you must deny them permissions for the following
         * actions:</p> <ul> <li> <p>s3:DeleteObject</p> </li> <li>
         * <p>s3:DeleteObjectVersion</p> </li> <li> <p>s3:PutLifecycleConfiguration</p>
         * </li> </ul> <p>For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>The following are
         * related to <code>PutBucketLifecycleConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/lifecycle-configuration-examples.html">Examples
         * of Lifecycle Configuration</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketLifecycle.html">DeleteBucketLifecycle</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketLifecycleConfigurationAsync(const Model::PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the logging parameters for a bucket and to specify permissions for who
         * can view and modify the logging parameters. All logs are saved to buckets in the
         * same Amazon Web Services Region as the source bucket. To set the logging status
         * of a bucket, you must be the bucket owner.</p> <p>The bucket owner is
         * automatically granted FULL_CONTROL to all logs. You use the <code>Grantee</code>
         * request element to grant access to other people. The <code>Permissions</code>
         * request element specifies the kind of access the grantee has to the logs.</p>
         * <p> <b>Grantee Values</b> </p> <p>You can specify the person (grantee) to whom
         * you're assigning access rights (using request elements) in the following
         * ways:</p> <ul> <li> <p>By the person's ID:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="CanonicalUser"&gt;&lt;ID&gt;&lt;&gt;ID&lt;&gt;&lt;/ID&gt;&lt;DisplayName&gt;&lt;&gt;GranteesEmail&lt;&gt;&lt;/DisplayName&gt;
         * &lt;/Grantee&gt;</code> </p> <p>DisplayName is optional and ignored in the
         * request.</p> </li> <li> <p>By Email address:</p> <p> <code> &lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="AmazonCustomerByEmail"&gt;&lt;EmailAddress&gt;&lt;&gt;Grantees@email.com&lt;&gt;&lt;/EmailAddress&gt;&lt;/Grantee&gt;</code>
         * </p> <p>The grantee is resolved to the CanonicalUser and, in a response to a GET
         * Object acl request, appears as the CanonicalUser.</p> </li> <li> <p>By URI:</p>
         * <p> <code>&lt;Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="Group"&gt;&lt;URI&gt;&lt;&gt;http://acs.amazonaws.com/groups/global/AuthenticatedUsers&lt;&gt;&lt;/URI&gt;&lt;/Grantee&gt;</code>
         * </p> </li> </ul> <p>To enable logging, you use LoggingEnabled and its children
         * request elements. To disable logging, you use an empty BucketLoggingStatus
         * request element:</p> <p> <code>&lt;BucketLoggingStatus
         * xmlns="http://doc.s3.amazonaws.com/2006-03-01" /&gt;</code> </p> <p>For more
         * information about server access logging, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerLogs.html">Server
         * Access Logging</a>. </p> <p>For more information about creating a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>.
         * For more information about returning the logging status of a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLogging.html">GetBucketLogging</a>.</p>
         * <p>The following operations are related to <code>PutBucketLogging</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLogging.html">GetBucketLogging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketLogging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketLoggingOutcome PutBucketLogging(const Model::PutBucketLoggingRequest& request) const;

        /**
         * <p>Set the logging parameters for a bucket and to specify permissions for who
         * can view and modify the logging parameters. All logs are saved to buckets in the
         * same Amazon Web Services Region as the source bucket. To set the logging status
         * of a bucket, you must be the bucket owner.</p> <p>The bucket owner is
         * automatically granted FULL_CONTROL to all logs. You use the <code>Grantee</code>
         * request element to grant access to other people. The <code>Permissions</code>
         * request element specifies the kind of access the grantee has to the logs.</p>
         * <p> <b>Grantee Values</b> </p> <p>You can specify the person (grantee) to whom
         * you're assigning access rights (using request elements) in the following
         * ways:</p> <ul> <li> <p>By the person's ID:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="CanonicalUser"&gt;&lt;ID&gt;&lt;&gt;ID&lt;&gt;&lt;/ID&gt;&lt;DisplayName&gt;&lt;&gt;GranteesEmail&lt;&gt;&lt;/DisplayName&gt;
         * &lt;/Grantee&gt;</code> </p> <p>DisplayName is optional and ignored in the
         * request.</p> </li> <li> <p>By Email address:</p> <p> <code> &lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="AmazonCustomerByEmail"&gt;&lt;EmailAddress&gt;&lt;&gt;Grantees@email.com&lt;&gt;&lt;/EmailAddress&gt;&lt;/Grantee&gt;</code>
         * </p> <p>The grantee is resolved to the CanonicalUser and, in a response to a GET
         * Object acl request, appears as the CanonicalUser.</p> </li> <li> <p>By URI:</p>
         * <p> <code>&lt;Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="Group"&gt;&lt;URI&gt;&lt;&gt;http://acs.amazonaws.com/groups/global/AuthenticatedUsers&lt;&gt;&lt;/URI&gt;&lt;/Grantee&gt;</code>
         * </p> </li> </ul> <p>To enable logging, you use LoggingEnabled and its children
         * request elements. To disable logging, you use an empty BucketLoggingStatus
         * request element:</p> <p> <code>&lt;BucketLoggingStatus
         * xmlns="http://doc.s3.amazonaws.com/2006-03-01" /&gt;</code> </p> <p>For more
         * information about server access logging, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerLogs.html">Server
         * Access Logging</a>. </p> <p>For more information about creating a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>.
         * For more information about returning the logging status of a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLogging.html">GetBucketLogging</a>.</p>
         * <p>The following operations are related to <code>PutBucketLogging</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLogging.html">GetBucketLogging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketLogging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketLoggingOutcomeCallable PutBucketLoggingCallable(const Model::PutBucketLoggingRequest& request) const;

        /**
         * <p>Set the logging parameters for a bucket and to specify permissions for who
         * can view and modify the logging parameters. All logs are saved to buckets in the
         * same Amazon Web Services Region as the source bucket. To set the logging status
         * of a bucket, you must be the bucket owner.</p> <p>The bucket owner is
         * automatically granted FULL_CONTROL to all logs. You use the <code>Grantee</code>
         * request element to grant access to other people. The <code>Permissions</code>
         * request element specifies the kind of access the grantee has to the logs.</p>
         * <p> <b>Grantee Values</b> </p> <p>You can specify the person (grantee) to whom
         * you're assigning access rights (using request elements) in the following
         * ways:</p> <ul> <li> <p>By the person's ID:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="CanonicalUser"&gt;&lt;ID&gt;&lt;&gt;ID&lt;&gt;&lt;/ID&gt;&lt;DisplayName&gt;&lt;&gt;GranteesEmail&lt;&gt;&lt;/DisplayName&gt;
         * &lt;/Grantee&gt;</code> </p> <p>DisplayName is optional and ignored in the
         * request.</p> </li> <li> <p>By Email address:</p> <p> <code> &lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="AmazonCustomerByEmail"&gt;&lt;EmailAddress&gt;&lt;&gt;Grantees@email.com&lt;&gt;&lt;/EmailAddress&gt;&lt;/Grantee&gt;</code>
         * </p> <p>The grantee is resolved to the CanonicalUser and, in a response to a GET
         * Object acl request, appears as the CanonicalUser.</p> </li> <li> <p>By URI:</p>
         * <p> <code>&lt;Grantee xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="Group"&gt;&lt;URI&gt;&lt;&gt;http://acs.amazonaws.com/groups/global/AuthenticatedUsers&lt;&gt;&lt;/URI&gt;&lt;/Grantee&gt;</code>
         * </p> </li> </ul> <p>To enable logging, you use LoggingEnabled and its children
         * request elements. To disable logging, you use an empty BucketLoggingStatus
         * request element:</p> <p> <code>&lt;BucketLoggingStatus
         * xmlns="http://doc.s3.amazonaws.com/2006-03-01" /&gt;</code> </p> <p>For more
         * information about server access logging, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerLogs.html">Server
         * Access Logging</a>. </p> <p>For more information about creating a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>.
         * For more information about returning the logging status of a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLogging.html">GetBucketLogging</a>.</p>
         * <p>The following operations are related to <code>PutBucketLogging</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLogging.html">GetBucketLogging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketLogging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketLoggingAsync(const Model::PutBucketLoggingRequest& request, const PutBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets a metrics configuration (specified by the metrics configuration ID) for
         * the bucket. You can have up to 1,000 metrics configurations per bucket. If
         * you're updating an existing metrics configuration, note that this is a full
         * replacement of the existing metrics configuration. If you don't include the
         * elements you want to keep, they are erased.</p> <p>To use this operation, you
         * must have permissions to perform the <code>s3:PutMetricsConfiguration</code>
         * action. The bucket owner has this permission by default. The bucket owner can
         * grant this permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * CloudWatch request metrics for Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>.</p> <p>The following operations are related
         * to <code>PutBucketMetricsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
         * </p> </li> </ul> <p> <code>GetBucketLifecycle</code> has the following special
         * error:</p> <ul> <li> <p>Error code: <code>TooManyConfigurations</code> </p> <ul>
         * <li> <p>Description: You are attempting to create a new configuration but have
         * already reached the 1,000-configuration limit.</p> </li> <li> <p>HTTP Status
         * Code: HTTP 400 Bad Request</p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketMetricsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketMetricsConfigurationOutcome PutBucketMetricsConfiguration(const Model::PutBucketMetricsConfigurationRequest& request) const;

        /**
         * <p>Sets a metrics configuration (specified by the metrics configuration ID) for
         * the bucket. You can have up to 1,000 metrics configurations per bucket. If
         * you're updating an existing metrics configuration, note that this is a full
         * replacement of the existing metrics configuration. If you don't include the
         * elements you want to keep, they are erased.</p> <p>To use this operation, you
         * must have permissions to perform the <code>s3:PutMetricsConfiguration</code>
         * action. The bucket owner has this permission by default. The bucket owner can
         * grant this permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * CloudWatch request metrics for Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>.</p> <p>The following operations are related
         * to <code>PutBucketMetricsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
         * </p> </li> </ul> <p> <code>GetBucketLifecycle</code> has the following special
         * error:</p> <ul> <li> <p>Error code: <code>TooManyConfigurations</code> </p> <ul>
         * <li> <p>Description: You are attempting to create a new configuration but have
         * already reached the 1,000-configuration limit.</p> </li> <li> <p>HTTP Status
         * Code: HTTP 400 Bad Request</p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketMetricsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketMetricsConfigurationOutcomeCallable PutBucketMetricsConfigurationCallable(const Model::PutBucketMetricsConfigurationRequest& request) const;

        /**
         * <p>Sets a metrics configuration (specified by the metrics configuration ID) for
         * the bucket. You can have up to 1,000 metrics configurations per bucket. If
         * you're updating an existing metrics configuration, note that this is a full
         * replacement of the existing metrics configuration. If you don't include the
         * elements you want to keep, they are erased.</p> <p>To use this operation, you
         * must have permissions to perform the <code>s3:PutMetricsConfiguration</code>
         * action. The bucket owner has this permission by default. The bucket owner can
         * grant this permission to others. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>For information about
         * CloudWatch request metrics for Amazon S3, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/cloudwatch-monitoring.html">Monitoring
         * Metrics with Amazon CloudWatch</a>.</p> <p>The following operations are related
         * to <code>PutBucketMetricsConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketMetricsConfiguration.html">DeleteBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketMetricsConfiguration.html">GetBucketMetricsConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListBucketMetricsConfigurations.html">ListBucketMetricsConfigurations</a>
         * </p> </li> </ul> <p> <code>GetBucketLifecycle</code> has the following special
         * error:</p> <ul> <li> <p>Error code: <code>TooManyConfigurations</code> </p> <ul>
         * <li> <p>Description: You are attempting to create a new configuration but have
         * already reached the 1,000-configuration limit.</p> </li> <li> <p>HTTP Status
         * Code: HTTP 400 Bad Request</p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketMetricsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketMetricsConfigurationAsync(const Model::PutBucketMetricsConfigurationRequest& request, const PutBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables notifications of specified events for a bucket. For more information
         * about event notifications, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
         * Event Notifications</a>.</p> <p>Using this API, you can replace an existing
         * notification configuration. The configuration is an XML file that defines the
         * event types that you want Amazon S3 to publish and the destination where you
         * want Amazon S3 to publish an event notification when it detects an event of the
         * specified type.</p> <p>By default, your bucket has no event notifications
         * configured. That is, the notification configuration will be an empty
         * <code>NotificationConfiguration</code>.</p> <p>
         * <code>&lt;NotificationConfiguration&gt;</code> </p> <p>
         * <code>&lt;/NotificationConfiguration&gt;</code> </p> <p>This action replaces the
         * existing notification configuration with the configuration you include in the
         * request body.</p> <p>After Amazon S3 receives this request, it first verifies
         * that any Amazon Simple Notification Service (Amazon SNS) or Amazon Simple Queue
         * Service (Amazon SQS) destination exists, and that the bucket owner has
         * permission to publish to it by sending a test notification. In the case of
         * Lambda destinations, Amazon S3 verifies that the Lambda function permissions
         * grant Amazon S3 permission to invoke the function from the Amazon S3 bucket. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
         * Notifications for Amazon S3 Events</a>.</p> <p>You can disable notifications by
         * adding the empty NotificationConfiguration element.</p> <p>By default, only the
         * bucket owner can configure notifications on a bucket. However, bucket owners can
         * use a bucket policy to grant permission to other users to set this configuration
         * with <code>s3:PutBucketNotification</code> permission.</p>  <p>The PUT
         * notification is an atomic operation. For example, suppose your notification
         * configuration includes SNS topic, SQS queue, and Lambda function configurations.
         * When you send a PUT request with this configuration, Amazon S3 sends test
         * messages to your SNS topic. If the message fails, the entire PUT action will
         * fail, and Amazon S3 will not add the configuration to your bucket.</p> 
         * <p> <b>Responses</b> </p> <p>If the configuration in the request body includes
         * only one <code>TopicConfiguration</code> specifying only the
         * <code>s3:ReducedRedundancyLostObject</code> event type, the response will also
         * include the <code>x-amz-sns-test-message-id</code> header containing the message
         * ID of the test notification sent to the topic.</p> <p>The following action is
         * related to <code>PutBucketNotificationConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketNotificationConfiguration.html">GetBucketNotificationConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketNotificationConfigurationOutcome PutBucketNotificationConfiguration(const Model::PutBucketNotificationConfigurationRequest& request) const;

        /**
         * <p>Enables notifications of specified events for a bucket. For more information
         * about event notifications, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
         * Event Notifications</a>.</p> <p>Using this API, you can replace an existing
         * notification configuration. The configuration is an XML file that defines the
         * event types that you want Amazon S3 to publish and the destination where you
         * want Amazon S3 to publish an event notification when it detects an event of the
         * specified type.</p> <p>By default, your bucket has no event notifications
         * configured. That is, the notification configuration will be an empty
         * <code>NotificationConfiguration</code>.</p> <p>
         * <code>&lt;NotificationConfiguration&gt;</code> </p> <p>
         * <code>&lt;/NotificationConfiguration&gt;</code> </p> <p>This action replaces the
         * existing notification configuration with the configuration you include in the
         * request body.</p> <p>After Amazon S3 receives this request, it first verifies
         * that any Amazon Simple Notification Service (Amazon SNS) or Amazon Simple Queue
         * Service (Amazon SQS) destination exists, and that the bucket owner has
         * permission to publish to it by sending a test notification. In the case of
         * Lambda destinations, Amazon S3 verifies that the Lambda function permissions
         * grant Amazon S3 permission to invoke the function from the Amazon S3 bucket. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
         * Notifications for Amazon S3 Events</a>.</p> <p>You can disable notifications by
         * adding the empty NotificationConfiguration element.</p> <p>By default, only the
         * bucket owner can configure notifications on a bucket. However, bucket owners can
         * use a bucket policy to grant permission to other users to set this configuration
         * with <code>s3:PutBucketNotification</code> permission.</p>  <p>The PUT
         * notification is an atomic operation. For example, suppose your notification
         * configuration includes SNS topic, SQS queue, and Lambda function configurations.
         * When you send a PUT request with this configuration, Amazon S3 sends test
         * messages to your SNS topic. If the message fails, the entire PUT action will
         * fail, and Amazon S3 will not add the configuration to your bucket.</p> 
         * <p> <b>Responses</b> </p> <p>If the configuration in the request body includes
         * only one <code>TopicConfiguration</code> specifying only the
         * <code>s3:ReducedRedundancyLostObject</code> event type, the response will also
         * include the <code>x-amz-sns-test-message-id</code> header containing the message
         * ID of the test notification sent to the topic.</p> <p>The following action is
         * related to <code>PutBucketNotificationConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketNotificationConfiguration.html">GetBucketNotificationConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketNotificationConfigurationOutcomeCallable PutBucketNotificationConfigurationCallable(const Model::PutBucketNotificationConfigurationRequest& request) const;

        /**
         * <p>Enables notifications of specified events for a bucket. For more information
         * about event notifications, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
         * Event Notifications</a>.</p> <p>Using this API, you can replace an existing
         * notification configuration. The configuration is an XML file that defines the
         * event types that you want Amazon S3 to publish and the destination where you
         * want Amazon S3 to publish an event notification when it detects an event of the
         * specified type.</p> <p>By default, your bucket has no event notifications
         * configured. That is, the notification configuration will be an empty
         * <code>NotificationConfiguration</code>.</p> <p>
         * <code>&lt;NotificationConfiguration&gt;</code> </p> <p>
         * <code>&lt;/NotificationConfiguration&gt;</code> </p> <p>This action replaces the
         * existing notification configuration with the configuration you include in the
         * request body.</p> <p>After Amazon S3 receives this request, it first verifies
         * that any Amazon Simple Notification Service (Amazon SNS) or Amazon Simple Queue
         * Service (Amazon SQS) destination exists, and that the bucket owner has
         * permission to publish to it by sending a test notification. In the case of
         * Lambda destinations, Amazon S3 verifies that the Lambda function permissions
         * grant Amazon S3 permission to invoke the function from the Amazon S3 bucket. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
         * Notifications for Amazon S3 Events</a>.</p> <p>You can disable notifications by
         * adding the empty NotificationConfiguration element.</p> <p>By default, only the
         * bucket owner can configure notifications on a bucket. However, bucket owners can
         * use a bucket policy to grant permission to other users to set this configuration
         * with <code>s3:PutBucketNotification</code> permission.</p>  <p>The PUT
         * notification is an atomic operation. For example, suppose your notification
         * configuration includes SNS topic, SQS queue, and Lambda function configurations.
         * When you send a PUT request with this configuration, Amazon S3 sends test
         * messages to your SNS topic. If the message fails, the entire PUT action will
         * fail, and Amazon S3 will not add the configuration to your bucket.</p> 
         * <p> <b>Responses</b> </p> <p>If the configuration in the request body includes
         * only one <code>TopicConfiguration</code> specifying only the
         * <code>s3:ReducedRedundancyLostObject</code> event type, the response will also
         * include the <code>x-amz-sns-test-message-id</code> header containing the message
         * ID of the test notification sent to the topic.</p> <p>The following action is
         * related to <code>PutBucketNotificationConfiguration</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketNotificationConfiguration.html">GetBucketNotificationConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketNotificationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketNotificationConfigurationAsync(const Model::PutBucketNotificationConfigurationRequest& request, const PutBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or modifies <code>OwnershipControls</code> for an Amazon S3 bucket.
         * To use this operation, you must have the
         * <code>s3:PutBucketOwnershipControls</code> permission. For more information
         * about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. </p> <p>For information about Amazon S3 Object
         * Ownership, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using
         * Object Ownership</a>. </p> <p>The following operations are related to
         * <code>PutBucketOwnershipControls</code>:</p> <ul> <li> <p>
         * <a>GetBucketOwnershipControls</a> </p> </li> <li> <p>
         * <a>DeleteBucketOwnershipControls</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketOwnershipControls">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketOwnershipControlsOutcome PutBucketOwnershipControls(const Model::PutBucketOwnershipControlsRequest& request) const;

        /**
         * <p>Creates or modifies <code>OwnershipControls</code> for an Amazon S3 bucket.
         * To use this operation, you must have the
         * <code>s3:PutBucketOwnershipControls</code> permission. For more information
         * about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. </p> <p>For information about Amazon S3 Object
         * Ownership, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using
         * Object Ownership</a>. </p> <p>The following operations are related to
         * <code>PutBucketOwnershipControls</code>:</p> <ul> <li> <p>
         * <a>GetBucketOwnershipControls</a> </p> </li> <li> <p>
         * <a>DeleteBucketOwnershipControls</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketOwnershipControls">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketOwnershipControlsOutcomeCallable PutBucketOwnershipControlsCallable(const Model::PutBucketOwnershipControlsRequest& request) const;

        /**
         * <p>Creates or modifies <code>OwnershipControls</code> for an Amazon S3 bucket.
         * To use this operation, you must have the
         * <code>s3:PutBucketOwnershipControls</code> permission. For more information
         * about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>. </p> <p>For information about Amazon S3 Object
         * Ownership, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/about-object-ownership.html">Using
         * Object Ownership</a>. </p> <p>The following operations are related to
         * <code>PutBucketOwnershipControls</code>:</p> <ul> <li> <p>
         * <a>GetBucketOwnershipControls</a> </p> </li> <li> <p>
         * <a>DeleteBucketOwnershipControls</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketOwnershipControls">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketOwnershipControlsAsync(const Model::PutBucketOwnershipControlsRequest& request, const PutBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies an Amazon S3 bucket policy to an Amazon S3 bucket. If you are using
         * an identity other than the root user of the Amazon Web Services account that
         * owns the bucket, the calling identity must have the <code>PutBucketPolicy</code>
         * permissions on the specified bucket and belong to the bucket owner's account in
         * order to use this operation.</p> <p>If you don't have
         * <code>PutBucketPolicy</code> permissions, Amazon S3 returns a <code>403 Access
         * Denied</code> error. If you have the correct permissions, but you're not using
         * an identity that belongs to the bucket owner's account, Amazon S3 returns a
         * <code>405 Method Not Allowed</code> error.</p>  <p> As a security
         * precaution, the root user of the Amazon Web Services account that owns a bucket
         * can always use this operation, even if the policy explicitly denies the root
         * user the ability to perform this action. </p>  <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-bucket-policies.html">Bucket
         * policy examples</a>.</p> <p>The following operations are related to
         * <code>PutBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketPolicyOutcome PutBucketPolicy(const Model::PutBucketPolicyRequest& request) const;

        /**
         * <p>Applies an Amazon S3 bucket policy to an Amazon S3 bucket. If you are using
         * an identity other than the root user of the Amazon Web Services account that
         * owns the bucket, the calling identity must have the <code>PutBucketPolicy</code>
         * permissions on the specified bucket and belong to the bucket owner's account in
         * order to use this operation.</p> <p>If you don't have
         * <code>PutBucketPolicy</code> permissions, Amazon S3 returns a <code>403 Access
         * Denied</code> error. If you have the correct permissions, but you're not using
         * an identity that belongs to the bucket owner's account, Amazon S3 returns a
         * <code>405 Method Not Allowed</code> error.</p>  <p> As a security
         * precaution, the root user of the Amazon Web Services account that owns a bucket
         * can always use this operation, even if the policy explicitly denies the root
         * user the ability to perform this action. </p>  <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-bucket-policies.html">Bucket
         * policy examples</a>.</p> <p>The following operations are related to
         * <code>PutBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketPolicyOutcomeCallable PutBucketPolicyCallable(const Model::PutBucketPolicyRequest& request) const;

        /**
         * <p>Applies an Amazon S3 bucket policy to an Amazon S3 bucket. If you are using
         * an identity other than the root user of the Amazon Web Services account that
         * owns the bucket, the calling identity must have the <code>PutBucketPolicy</code>
         * permissions on the specified bucket and belong to the bucket owner's account in
         * order to use this operation.</p> <p>If you don't have
         * <code>PutBucketPolicy</code> permissions, Amazon S3 returns a <code>403 Access
         * Denied</code> error. If you have the correct permissions, but you're not using
         * an identity that belongs to the bucket owner's account, Amazon S3 returns a
         * <code>405 Method Not Allowed</code> error.</p>  <p> As a security
         * precaution, the root user of the Amazon Web Services account that owns a bucket
         * can always use this operation, even if the policy explicitly denies the root
         * user the ability to perform this action. </p>  <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/example-bucket-policies.html">Bucket
         * policy examples</a>.</p> <p>The following operations are related to
         * <code>PutBucketPolicy</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketPolicyAsync(const Model::PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a replication configuration or replaces an existing one. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
         * in the <i>Amazon S3 User Guide</i>. </p> <p>Specify the replication
         * configuration in the request body. In the replication configuration, you provide
         * the name of the destination bucket or buckets where you want Amazon S3 to
         * replicate objects, the IAM role that Amazon S3 can assume to replicate objects
         * on your behalf, and other relevant information.</p> <p>A replication
         * configuration must include at least one rule, and can contain a maximum of
         * 1,000. Each rule identifies a subset of objects to replicate by filtering the
         * objects in the source bucket. To choose additional subsets of objects to
         * replicate, add a rule for each subset.</p> <p>To specify a subset of the objects
         * in the source bucket to apply a replication rule to, add the Filter element as a
         * child of the Rule element. You can filter objects based on an object key prefix,
         * one or more object tags, or both. When you add the Filter element in the
         * configuration, you must also add the following elements:
         * <code>DeleteMarkerReplication</code>, <code>Status</code>, and
         * <code>Priority</code>.</p>  <p>If you are using an earlier version of the
         * replication configuration, Amazon S3 handles replication of delete markers
         * differently. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-add-config.html#replication-backward-compat-considerations">Backward
         * Compatibility</a>.</p>  <p>For information about enabling versioning on a
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/Versioning.html">Using
         * Versioning</a>.</p> <p> <b>Handling Replication of Encrypted Objects</b> </p>
         * <p>By default, Amazon S3 doesn't replicate objects that are stored at rest using
         * server-side encryption with KMS keys. To replicate Amazon Web Services
         * KMS-encrypted objects, add the following: <code>SourceSelectionCriteria</code>,
         * <code>SseKmsEncryptedObjects</code>, <code>Status</code>,
         * <code>EncryptionConfiguration</code>, and <code>ReplicaKmsKeyID</code>. For
         * information about replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-config-for-kms-objects.html">Replicating
         * Objects Created with SSE Using KMS keys</a>.</p> <p>For information on
         * <code>PutBucketReplication</code> errors, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ReplicationErrorCodeList">List
         * of replication-related error codes</a> </p> <p> <b>Permissions</b> </p> <p>To
         * create a <code>PutBucketReplication</code> request, you must have
         * <code>s3:PutReplicationConfiguration</code> permissions for the bucket. </p>
         * <p>By default, a resource owner, in this case the Amazon Web Services account
         * that created the bucket, can perform this operation. The resource owner can also
         * grant others permissions to perform the operation. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p>  <p>To perform
         * this operation, the user or role performing the action must have the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">iam:PassRole</a>
         * permission.</p>  <p>The following operations are related to
         * <code>PutBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketReplication.html">GetBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketReplication.html">DeleteBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketReplicationOutcome PutBucketReplication(const Model::PutBucketReplicationRequest& request) const;

        /**
         * <p> Creates a replication configuration or replaces an existing one. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
         * in the <i>Amazon S3 User Guide</i>. </p> <p>Specify the replication
         * configuration in the request body. In the replication configuration, you provide
         * the name of the destination bucket or buckets where you want Amazon S3 to
         * replicate objects, the IAM role that Amazon S3 can assume to replicate objects
         * on your behalf, and other relevant information.</p> <p>A replication
         * configuration must include at least one rule, and can contain a maximum of
         * 1,000. Each rule identifies a subset of objects to replicate by filtering the
         * objects in the source bucket. To choose additional subsets of objects to
         * replicate, add a rule for each subset.</p> <p>To specify a subset of the objects
         * in the source bucket to apply a replication rule to, add the Filter element as a
         * child of the Rule element. You can filter objects based on an object key prefix,
         * one or more object tags, or both. When you add the Filter element in the
         * configuration, you must also add the following elements:
         * <code>DeleteMarkerReplication</code>, <code>Status</code>, and
         * <code>Priority</code>.</p>  <p>If you are using an earlier version of the
         * replication configuration, Amazon S3 handles replication of delete markers
         * differently. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-add-config.html#replication-backward-compat-considerations">Backward
         * Compatibility</a>.</p>  <p>For information about enabling versioning on a
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/Versioning.html">Using
         * Versioning</a>.</p> <p> <b>Handling Replication of Encrypted Objects</b> </p>
         * <p>By default, Amazon S3 doesn't replicate objects that are stored at rest using
         * server-side encryption with KMS keys. To replicate Amazon Web Services
         * KMS-encrypted objects, add the following: <code>SourceSelectionCriteria</code>,
         * <code>SseKmsEncryptedObjects</code>, <code>Status</code>,
         * <code>EncryptionConfiguration</code>, and <code>ReplicaKmsKeyID</code>. For
         * information about replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-config-for-kms-objects.html">Replicating
         * Objects Created with SSE Using KMS keys</a>.</p> <p>For information on
         * <code>PutBucketReplication</code> errors, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ReplicationErrorCodeList">List
         * of replication-related error codes</a> </p> <p> <b>Permissions</b> </p> <p>To
         * create a <code>PutBucketReplication</code> request, you must have
         * <code>s3:PutReplicationConfiguration</code> permissions for the bucket. </p>
         * <p>By default, a resource owner, in this case the Amazon Web Services account
         * that created the bucket, can perform this operation. The resource owner can also
         * grant others permissions to perform the operation. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p>  <p>To perform
         * this operation, the user or role performing the action must have the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">iam:PassRole</a>
         * permission.</p>  <p>The following operations are related to
         * <code>PutBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketReplication.html">GetBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketReplication.html">DeleteBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketReplicationOutcomeCallable PutBucketReplicationCallable(const Model::PutBucketReplicationRequest& request) const;

        /**
         * <p> Creates a replication configuration or replaces an existing one. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
         * in the <i>Amazon S3 User Guide</i>. </p> <p>Specify the replication
         * configuration in the request body. In the replication configuration, you provide
         * the name of the destination bucket or buckets where you want Amazon S3 to
         * replicate objects, the IAM role that Amazon S3 can assume to replicate objects
         * on your behalf, and other relevant information.</p> <p>A replication
         * configuration must include at least one rule, and can contain a maximum of
         * 1,000. Each rule identifies a subset of objects to replicate by filtering the
         * objects in the source bucket. To choose additional subsets of objects to
         * replicate, add a rule for each subset.</p> <p>To specify a subset of the objects
         * in the source bucket to apply a replication rule to, add the Filter element as a
         * child of the Rule element. You can filter objects based on an object key prefix,
         * one or more object tags, or both. When you add the Filter element in the
         * configuration, you must also add the following elements:
         * <code>DeleteMarkerReplication</code>, <code>Status</code>, and
         * <code>Priority</code>.</p>  <p>If you are using an earlier version of the
         * replication configuration, Amazon S3 handles replication of delete markers
         * differently. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-add-config.html#replication-backward-compat-considerations">Backward
         * Compatibility</a>.</p>  <p>For information about enabling versioning on a
         * bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/Versioning.html">Using
         * Versioning</a>.</p> <p> <b>Handling Replication of Encrypted Objects</b> </p>
         * <p>By default, Amazon S3 doesn't replicate objects that are stored at rest using
         * server-side encryption with KMS keys. To replicate Amazon Web Services
         * KMS-encrypted objects, add the following: <code>SourceSelectionCriteria</code>,
         * <code>SseKmsEncryptedObjects</code>, <code>Status</code>,
         * <code>EncryptionConfiguration</code>, and <code>ReplicaKmsKeyID</code>. For
         * information about replication configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-config-for-kms-objects.html">Replicating
         * Objects Created with SSE Using KMS keys</a>.</p> <p>For information on
         * <code>PutBucketReplication</code> errors, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#ReplicationErrorCodeList">List
         * of replication-related error codes</a> </p> <p> <b>Permissions</b> </p> <p>To
         * create a <code>PutBucketReplication</code> request, you must have
         * <code>s3:PutReplicationConfiguration</code> permissions for the bucket. </p>
         * <p>By default, a resource owner, in this case the Amazon Web Services account
         * that created the bucket, can perform this operation. The resource owner can also
         * grant others permissions to perform the operation. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p>  <p>To perform
         * this operation, the user or role performing the action must have the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">iam:PassRole</a>
         * permission.</p>  <p>The following operations are related to
         * <code>PutBucketReplication</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketReplication.html">GetBucketReplication</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketReplication.html">DeleteBucketReplication</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketReplicationAsync(const Model::PutBucketReplicationRequest& request, const PutBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the request payment configuration for a bucket. By default, the bucket
         * owner pays for downloads from the bucket. This configuration parameter enables
         * the bucket owner (only) to specify that the person requesting the download will
         * be charged for the download. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester
         * Pays Buckets</a>.</p> <p>The following operations are related to
         * <code>PutBucketRequestPayment</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketRequestPayment.html">GetBucketRequestPayment</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketRequestPayment">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketRequestPaymentOutcome PutBucketRequestPayment(const Model::PutBucketRequestPaymentRequest& request) const;

        /**
         * <p>Sets the request payment configuration for a bucket. By default, the bucket
         * owner pays for downloads from the bucket. This configuration parameter enables
         * the bucket owner (only) to specify that the person requesting the download will
         * be charged for the download. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester
         * Pays Buckets</a>.</p> <p>The following operations are related to
         * <code>PutBucketRequestPayment</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketRequestPayment.html">GetBucketRequestPayment</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketRequestPayment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketRequestPaymentOutcomeCallable PutBucketRequestPaymentCallable(const Model::PutBucketRequestPaymentRequest& request) const;

        /**
         * <p>Sets the request payment configuration for a bucket. By default, the bucket
         * owner pays for downloads from the bucket. This configuration parameter enables
         * the bucket owner (only) to specify that the person requesting the download will
         * be charged for the download. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/RequesterPaysBuckets.html">Requester
         * Pays Buckets</a>.</p> <p>The following operations are related to
         * <code>PutBucketRequestPayment</code>:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketRequestPayment.html">GetBucketRequestPayment</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketRequestPayment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketRequestPaymentAsync(const Model::PutBucketRequestPaymentRequest& request, const PutBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the tags for a bucket.</p> <p>Use tags to organize your Amazon Web
         * Services bill to reflect your own cost structure. To do this, sign up to get
         * your Amazon Web Services account bill with tag key values included. Then, to see
         * the cost of combined resources, organize your billing information according to
         * resources with the same tag key values. For example, you can tag several
         * resources with a specific application name, and then organize your billing
         * information to see the total cost of that application across several services.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost
         * Allocation and Tagging</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CostAllocTagging.html">Using
         * Cost Allocation in Amazon S3 Bucket Tags</a>.</p>  <p> When this operation
         * sets the tags for a bucket, it will overwrite any current tags the bucket
         * already has. You cannot use this operation to add tags to an existing list of
         * tags.</p>  <p>To use this operation, you must have permissions to perform
         * the <code>s3:PutBucketTagging</code> action. The bucket owner has this
         * permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>
         * <code>PutBucketTagging</code> has the following special errors:</p> <ul> <li>
         * <p>Error code: <code>InvalidTagError</code> </p> <ul> <li> <p>Description: The
         * tag provided was not a valid tag. This error can occur if the tag did not pass
         * input validation. For information about tag restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> and <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">Amazon
         * Web Services-Generated Cost Allocation Tag Restrictions</a>.</p> </li> </ul>
         * </li> <li> <p>Error code: <code>MalformedXMLError</code> </p> <ul> <li>
         * <p>Description: The XML provided does not match the schema.</p> </li> </ul>
         * </li> <li> <p>Error code: <code>OperationAbortedError </code> </p> <ul> <li>
         * <p>Description: A conflicting conditional action is currently in progress
         * against this resource. Please try again.</p> </li> </ul> </li> <li> <p>Error
         * code: <code>InternalError</code> </p> <ul> <li> <p>Description: The service was
         * unable to apply the provided tag to the bucket.</p> </li> </ul> </li> </ul>
         * <p>The following operations are related to <code>PutBucketTagging</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketTaggingOutcome PutBucketTagging(const Model::PutBucketTaggingRequest& request) const;

        /**
         * <p>Sets the tags for a bucket.</p> <p>Use tags to organize your Amazon Web
         * Services bill to reflect your own cost structure. To do this, sign up to get
         * your Amazon Web Services account bill with tag key values included. Then, to see
         * the cost of combined resources, organize your billing information according to
         * resources with the same tag key values. For example, you can tag several
         * resources with a specific application name, and then organize your billing
         * information to see the total cost of that application across several services.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost
         * Allocation and Tagging</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CostAllocTagging.html">Using
         * Cost Allocation in Amazon S3 Bucket Tags</a>.</p>  <p> When this operation
         * sets the tags for a bucket, it will overwrite any current tags the bucket
         * already has. You cannot use this operation to add tags to an existing list of
         * tags.</p>  <p>To use this operation, you must have permissions to perform
         * the <code>s3:PutBucketTagging</code> action. The bucket owner has this
         * permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>
         * <code>PutBucketTagging</code> has the following special errors:</p> <ul> <li>
         * <p>Error code: <code>InvalidTagError</code> </p> <ul> <li> <p>Description: The
         * tag provided was not a valid tag. This error can occur if the tag did not pass
         * input validation. For information about tag restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> and <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">Amazon
         * Web Services-Generated Cost Allocation Tag Restrictions</a>.</p> </li> </ul>
         * </li> <li> <p>Error code: <code>MalformedXMLError</code> </p> <ul> <li>
         * <p>Description: The XML provided does not match the schema.</p> </li> </ul>
         * </li> <li> <p>Error code: <code>OperationAbortedError </code> </p> <ul> <li>
         * <p>Description: A conflicting conditional action is currently in progress
         * against this resource. Please try again.</p> </li> </ul> </li> <li> <p>Error
         * code: <code>InternalError</code> </p> <ul> <li> <p>Description: The service was
         * unable to apply the provided tag to the bucket.</p> </li> </ul> </li> </ul>
         * <p>The following operations are related to <code>PutBucketTagging</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketTaggingOutcomeCallable PutBucketTaggingCallable(const Model::PutBucketTaggingRequest& request) const;

        /**
         * <p>Sets the tags for a bucket.</p> <p>Use tags to organize your Amazon Web
         * Services bill to reflect your own cost structure. To do this, sign up to get
         * your Amazon Web Services account bill with tag key values included. Then, to see
         * the cost of combined resources, organize your billing information according to
         * resources with the same tag key values. For example, you can tag several
         * resources with a specific application name, and then organize your billing
         * information to see the total cost of that application across several services.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Cost
         * Allocation and Tagging</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/CostAllocTagging.html">Using
         * Cost Allocation in Amazon S3 Bucket Tags</a>.</p>  <p> When this operation
         * sets the tags for a bucket, it will overwrite any current tags the bucket
         * already has. You cannot use this operation to add tags to an existing list of
         * tags.</p>  <p>To use this operation, you must have permissions to perform
         * the <code>s3:PutBucketTagging</code> action. The bucket owner has this
         * permission by default and can grant this permission to others. For more
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a>.</p> <p>
         * <code>PutBucketTagging</code> has the following special errors:</p> <ul> <li>
         * <p>Error code: <code>InvalidTagError</code> </p> <ul> <li> <p>Description: The
         * tag provided was not a valid tag. This error can occur if the tag did not pass
         * input validation. For information about tag restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> and <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/aws-tag-restrictions.html">Amazon
         * Web Services-Generated Cost Allocation Tag Restrictions</a>.</p> </li> </ul>
         * </li> <li> <p>Error code: <code>MalformedXMLError</code> </p> <ul> <li>
         * <p>Description: The XML provided does not match the schema.</p> </li> </ul>
         * </li> <li> <p>Error code: <code>OperationAbortedError </code> </p> <ul> <li>
         * <p>Description: A conflicting conditional action is currently in progress
         * against this resource. Please try again.</p> </li> </ul> </li> <li> <p>Error
         * code: <code>InternalError</code> </p> <ul> <li> <p>Description: The service was
         * unable to apply the provided tag to the bucket.</p> </li> </ul> </li> </ul>
         * <p>The following operations are related to <code>PutBucketTagging</code>:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketTagging.html">GetBucketTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketTagging.html">DeleteBucketTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketTaggingAsync(const Model::PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the versioning state of an existing bucket. To set the versioning state,
         * you must be the bucket owner.</p> <p>You can set the versioning state with one
         * of the following values:</p> <p> <b>Enabled</b>—Enables versioning for the
         * objects in the bucket. All objects added to the bucket receive a unique version
         * ID.</p> <p> <b>Suspended</b>—Disables versioning for the objects in the bucket.
         * All objects added to the bucket receive the version ID null.</p> <p>If the
         * versioning state has never been set on a bucket, it has no versioning state; a
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>
         * request does not return a versioning state value.</p> <p>If the bucket owner
         * enables MFA Delete in the bucket versioning configuration, the bucket owner must
         * include the <code>x-amz-mfa request</code> header and the <code>Status</code>
         * and the <code>MfaDelete</code> request elements in a request to set the
         * versioning state of the bucket.</p>  <p>If you have an object
         * expiration lifecycle policy in your non-versioned bucket and you want to
         * maintain the same permanent delete behavior when you enable versioning, you must
         * add a noncurrent expiration policy. The noncurrent expiration lifecycle policy
         * will manage the deletes of the noncurrent object versions in the version-enabled
         * bucket. (A version-enabled bucket maintains one current and zero or more
         * noncurrent object versions.) For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html#lifecycle-and-other-bucket-config">Lifecycle
         * and Versioning</a>.</p>  <p class="title"> <b>Related Resources</b>
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketVersioning">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketVersioningOutcome PutBucketVersioning(const Model::PutBucketVersioningRequest& request) const;

        /**
         * <p>Sets the versioning state of an existing bucket. To set the versioning state,
         * you must be the bucket owner.</p> <p>You can set the versioning state with one
         * of the following values:</p> <p> <b>Enabled</b>—Enables versioning for the
         * objects in the bucket. All objects added to the bucket receive a unique version
         * ID.</p> <p> <b>Suspended</b>—Disables versioning for the objects in the bucket.
         * All objects added to the bucket receive the version ID null.</p> <p>If the
         * versioning state has never been set on a bucket, it has no versioning state; a
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>
         * request does not return a versioning state value.</p> <p>If the bucket owner
         * enables MFA Delete in the bucket versioning configuration, the bucket owner must
         * include the <code>x-amz-mfa request</code> header and the <code>Status</code>
         * and the <code>MfaDelete</code> request elements in a request to set the
         * versioning state of the bucket.</p>  <p>If you have an object
         * expiration lifecycle policy in your non-versioned bucket and you want to
         * maintain the same permanent delete behavior when you enable versioning, you must
         * add a noncurrent expiration policy. The noncurrent expiration lifecycle policy
         * will manage the deletes of the noncurrent object versions in the version-enabled
         * bucket. (A version-enabled bucket maintains one current and zero or more
         * noncurrent object versions.) For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html#lifecycle-and-other-bucket-config">Lifecycle
         * and Versioning</a>.</p>  <p class="title"> <b>Related Resources</b>
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketVersioning">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketVersioningOutcomeCallable PutBucketVersioningCallable(const Model::PutBucketVersioningRequest& request) const;

        /**
         * <p>Sets the versioning state of an existing bucket. To set the versioning state,
         * you must be the bucket owner.</p> <p>You can set the versioning state with one
         * of the following values:</p> <p> <b>Enabled</b>—Enables versioning for the
         * objects in the bucket. All objects added to the bucket receive a unique version
         * ID.</p> <p> <b>Suspended</b>—Disables versioning for the objects in the bucket.
         * All objects added to the bucket receive the version ID null.</p> <p>If the
         * versioning state has never been set on a bucket, it has no versioning state; a
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>
         * request does not return a versioning state value.</p> <p>If the bucket owner
         * enables MFA Delete in the bucket versioning configuration, the bucket owner must
         * include the <code>x-amz-mfa request</code> header and the <code>Status</code>
         * and the <code>MfaDelete</code> request elements in a request to set the
         * versioning state of the bucket.</p>  <p>If you have an object
         * expiration lifecycle policy in your non-versioned bucket and you want to
         * maintain the same permanent delete behavior when you enable versioning, you must
         * add a noncurrent expiration policy. The noncurrent expiration lifecycle policy
         * will manage the deletes of the noncurrent object versions in the version-enabled
         * bucket. (A version-enabled bucket maintains one current and zero or more
         * noncurrent object versions.) For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html#lifecycle-and-other-bucket-config">Lifecycle
         * and Versioning</a>.</p>  <p class="title"> <b>Related Resources</b>
         * </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateBucket.html">CreateBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucket.html">DeleteBucket</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketVersioning">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketVersioningAsync(const Model::PutBucketVersioningRequest& request, const PutBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the configuration of the website that is specified in the
         * <code>website</code> subresource. To configure a bucket as a website, you can
         * add this subresource on the bucket with website configuration information such
         * as the file name of the index document and any redirect rules. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
         * Websites on Amazon S3</a>.</p> <p>This PUT action requires the
         * <code>S3:PutBucketWebsite</code> permission. By default, only the bucket owner
         * can configure the website attached to a bucket; however, bucket owners can allow
         * other users to set the website configuration by writing a bucket policy that
         * grants them the <code>S3:PutBucketWebsite</code> permission.</p> <p>To redirect
         * all website requests sent to the bucket's website endpoint, you add a website
         * configuration with the following elements. Because all requests are sent to
         * another website, you don't need to provide index document name for the
         * bucket.</p> <ul> <li> <p> <code>WebsiteConfiguration</code> </p> </li> <li> <p>
         * <code>RedirectAllRequestsTo</code> </p> </li> <li> <p> <code>HostName</code>
         * </p> </li> <li> <p> <code>Protocol</code> </p> </li> </ul> <p>If you want
         * granular control over redirects, you can use the following elements to add
         * routing rules that describe conditions for redirecting requests and information
         * about the redirect destination. In this case, the website configuration must
         * provide an index document for the bucket, because some requests might not be
         * redirected. </p> <ul> <li> <p> <code>WebsiteConfiguration</code> </p> </li> <li>
         * <p> <code>IndexDocument</code> </p> </li> <li> <p> <code>Suffix</code> </p>
         * </li> <li> <p> <code>ErrorDocument</code> </p> </li> <li> <p> <code>Key</code>
         * </p> </li> <li> <p> <code>RoutingRules</code> </p> </li> <li> <p>
         * <code>RoutingRule</code> </p> </li> <li> <p> <code>Condition</code> </p> </li>
         * <li> <p> <code>HttpErrorCodeReturnedEquals</code> </p> </li> <li> <p>
         * <code>KeyPrefixEquals</code> </p> </li> <li> <p> <code>Redirect</code> </p>
         * </li> <li> <p> <code>Protocol</code> </p> </li> <li> <p> <code>HostName</code>
         * </p> </li> <li> <p> <code>ReplaceKeyPrefixWith</code> </p> </li> <li> <p>
         * <code>ReplaceKeyWith</code> </p> </li> <li> <p> <code>HttpRedirectCode</code>
         * </p> </li> </ul> <p>Amazon S3 has a limitation of 50 routing rules per website
         * configuration. If you require more than 50 routing rules, you can use object
         * redirect. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/how-to-page-redirect.html">Configuring
         * an Object Redirect</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketWebsite">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBucketWebsiteOutcome PutBucketWebsite(const Model::PutBucketWebsiteRequest& request) const;

        /**
         * <p>Sets the configuration of the website that is specified in the
         * <code>website</code> subresource. To configure a bucket as a website, you can
         * add this subresource on the bucket with website configuration information such
         * as the file name of the index document and any redirect rules. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
         * Websites on Amazon S3</a>.</p> <p>This PUT action requires the
         * <code>S3:PutBucketWebsite</code> permission. By default, only the bucket owner
         * can configure the website attached to a bucket; however, bucket owners can allow
         * other users to set the website configuration by writing a bucket policy that
         * grants them the <code>S3:PutBucketWebsite</code> permission.</p> <p>To redirect
         * all website requests sent to the bucket's website endpoint, you add a website
         * configuration with the following elements. Because all requests are sent to
         * another website, you don't need to provide index document name for the
         * bucket.</p> <ul> <li> <p> <code>WebsiteConfiguration</code> </p> </li> <li> <p>
         * <code>RedirectAllRequestsTo</code> </p> </li> <li> <p> <code>HostName</code>
         * </p> </li> <li> <p> <code>Protocol</code> </p> </li> </ul> <p>If you want
         * granular control over redirects, you can use the following elements to add
         * routing rules that describe conditions for redirecting requests and information
         * about the redirect destination. In this case, the website configuration must
         * provide an index document for the bucket, because some requests might not be
         * redirected. </p> <ul> <li> <p> <code>WebsiteConfiguration</code> </p> </li> <li>
         * <p> <code>IndexDocument</code> </p> </li> <li> <p> <code>Suffix</code> </p>
         * </li> <li> <p> <code>ErrorDocument</code> </p> </li> <li> <p> <code>Key</code>
         * </p> </li> <li> <p> <code>RoutingRules</code> </p> </li> <li> <p>
         * <code>RoutingRule</code> </p> </li> <li> <p> <code>Condition</code> </p> </li>
         * <li> <p> <code>HttpErrorCodeReturnedEquals</code> </p> </li> <li> <p>
         * <code>KeyPrefixEquals</code> </p> </li> <li> <p> <code>Redirect</code> </p>
         * </li> <li> <p> <code>Protocol</code> </p> </li> <li> <p> <code>HostName</code>
         * </p> </li> <li> <p> <code>ReplaceKeyPrefixWith</code> </p> </li> <li> <p>
         * <code>ReplaceKeyWith</code> </p> </li> <li> <p> <code>HttpRedirectCode</code>
         * </p> </li> </ul> <p>Amazon S3 has a limitation of 50 routing rules per website
         * configuration. If you require more than 50 routing rules, you can use object
         * redirect. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/how-to-page-redirect.html">Configuring
         * an Object Redirect</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketWebsite">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBucketWebsiteOutcomeCallable PutBucketWebsiteCallable(const Model::PutBucketWebsiteRequest& request) const;

        /**
         * <p>Sets the configuration of the website that is specified in the
         * <code>website</code> subresource. To configure a bucket as a website, you can
         * add this subresource on the bucket with website configuration information such
         * as the file name of the index document and any redirect rules. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/WebsiteHosting.html">Hosting
         * Websites on Amazon S3</a>.</p> <p>This PUT action requires the
         * <code>S3:PutBucketWebsite</code> permission. By default, only the bucket owner
         * can configure the website attached to a bucket; however, bucket owners can allow
         * other users to set the website configuration by writing a bucket policy that
         * grants them the <code>S3:PutBucketWebsite</code> permission.</p> <p>To redirect
         * all website requests sent to the bucket's website endpoint, you add a website
         * configuration with the following elements. Because all requests are sent to
         * another website, you don't need to provide index document name for the
         * bucket.</p> <ul> <li> <p> <code>WebsiteConfiguration</code> </p> </li> <li> <p>
         * <code>RedirectAllRequestsTo</code> </p> </li> <li> <p> <code>HostName</code>
         * </p> </li> <li> <p> <code>Protocol</code> </p> </li> </ul> <p>If you want
         * granular control over redirects, you can use the following elements to add
         * routing rules that describe conditions for redirecting requests and information
         * about the redirect destination. In this case, the website configuration must
         * provide an index document for the bucket, because some requests might not be
         * redirected. </p> <ul> <li> <p> <code>WebsiteConfiguration</code> </p> </li> <li>
         * <p> <code>IndexDocument</code> </p> </li> <li> <p> <code>Suffix</code> </p>
         * </li> <li> <p> <code>ErrorDocument</code> </p> </li> <li> <p> <code>Key</code>
         * </p> </li> <li> <p> <code>RoutingRules</code> </p> </li> <li> <p>
         * <code>RoutingRule</code> </p> </li> <li> <p> <code>Condition</code> </p> </li>
         * <li> <p> <code>HttpErrorCodeReturnedEquals</code> </p> </li> <li> <p>
         * <code>KeyPrefixEquals</code> </p> </li> <li> <p> <code>Redirect</code> </p>
         * </li> <li> <p> <code>Protocol</code> </p> </li> <li> <p> <code>HostName</code>
         * </p> </li> <li> <p> <code>ReplaceKeyPrefixWith</code> </p> </li> <li> <p>
         * <code>ReplaceKeyWith</code> </p> </li> <li> <p> <code>HttpRedirectCode</code>
         * </p> </li> </ul> <p>Amazon S3 has a limitation of 50 routing rules per website
         * configuration. If you require more than 50 routing rules, you can use object
         * redirect. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/how-to-page-redirect.html">Configuring
         * an Object Redirect</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutBucketWebsite">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBucketWebsiteAsync(const Model::PutBucketWebsiteRequest& request, const PutBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an object to a bucket. You must have WRITE permissions on a bucket to
         * add an object to it.</p> <p>Amazon S3 never adds partial objects; if you receive
         * a success response, Amazon S3 added the entire object to the bucket.</p>
         * <p>Amazon S3 is a distributed system. If it receives multiple write requests for
         * the same object simultaneously, it overwrites all but the last object written.
         * Amazon S3 does not provide object locking; if you need this, make sure to build
         * it into your application layer or use versioning instead.</p> <p>To ensure that
         * data is not corrupted traversing the network, use the <code>Content-MD5</code>
         * header. When you use this header, Amazon S3 checks the object against the
         * provided MD5 value and, if they do not match, returns an error. Additionally,
         * you can calculate the MD5 while putting an object to Amazon S3 and compare the
         * returned ETag to the calculated MD5 value.</p>  <ul> <li> <p>To
         * successfully complete the <code>PutObject</code> request, you must have the
         * <code>s3:PutObject</code> in your IAM permissions.</p> </li> <li> <p>To
         * successfully change the objects acl of your <code>PutObject</code> request, you
         * must have the <code>s3:PutObjectAcl</code> in your IAM permissions.</p> </li>
         * <li> <p> The <code>Content-MD5</code> header is required for any request to
         * upload an object with a retention period configured using Amazon S3 Object Lock.
         * For more information about Amazon S3 Object Lock, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock-overview.html">Amazon
         * S3 Object Lock Overview</a> in the <i>Amazon S3 User Guide</i>. </p> </li> </ul>
         *  <p> <b>Server-side Encryption</b> </p> <p>You can optionally request
         * server-side encryption. With server-side encryption, Amazon S3 encrypts your
         * data as it writes it to disks in its data centers and decrypts the data when you
         * access it. You have the option to provide your own encryption key or use Amazon
         * Web Services managed encryption keys (SSE-S3 or SSE-KMS). For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingServerSideEncryption.html">Using
         * Server-Side Encryption</a>.</p> <p>If you request server-side encryption using
         * Amazon Web Services Key Management Service (SSE-KMS), you can enable an S3
         * Bucket Key at the object-level. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3
         * Bucket Keys</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Access Control
         * List (ACL)-Specific Request Headers</b> </p> <p>You can use headers to grant
         * ACL- based permissions. By default, all objects are private. Only the owner has
         * full access control. When adding a new object, you can grant permissions to
         * individual Amazon Web Services accounts or to predefined groups defined by
         * Amazon S3. These permissions are then added to the ACL on the object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-using-rest-api.html">Managing
         * ACLs Using the REST API</a>. </p> <p> <b>Storage Class Options</b> </p> <p>By
         * default, Amazon S3 uses the STANDARD Storage Class to store newly created
         * objects. The STANDARD storage class provides high durability and high
         * availability. Depending on performance needs, you can specify a different
         * Storage Class. Amazon S3 on Outposts only uses the OUTPOSTS Storage Class. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage
         * Classes</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Versioning</b> </p>
         * <p>If you enable versioning for a bucket, Amazon S3 automatically generates a
         * unique version ID for the object being stored. Amazon S3 returns this ID in the
         * response. When you enable versioning for a bucket, if Amazon S3 receives
         * multiple write requests for the same object simultaneously, it stores all of the
         * objects.</p> <p>For more information about versioning, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/AddingObjectstoVersioningEnabledBuckets.html">Adding
         * Objects to Versioning Enabled Buckets</a>. For information about returning the
         * versioning state of a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>.
         * </p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObject">AWS API
         * Reference</a></p>
         */
        virtual Model::PutObjectOutcome PutObject(const Model::PutObjectRequest& request) const;


        /**
         * <p>Adds an object to a bucket. You must have WRITE permissions on a bucket to
         * add an object to it.</p> <p>Amazon S3 never adds partial objects; if you receive
         * a success response, Amazon S3 added the entire object to the bucket.</p>
         * <p>Amazon S3 is a distributed system. If it receives multiple write requests for
         * the same object simultaneously, it overwrites all but the last object written.
         * Amazon S3 does not provide object locking; if you need this, make sure to build
         * it into your application layer or use versioning instead.</p> <p>To ensure that
         * data is not corrupted traversing the network, use the <code>Content-MD5</code>
         * header. When you use this header, Amazon S3 checks the object against the
         * provided MD5 value and, if they do not match, returns an error. Additionally,
         * you can calculate the MD5 while putting an object to Amazon S3 and compare the
         * returned ETag to the calculated MD5 value.</p>  <ul> <li> <p>To
         * successfully complete the <code>PutObject</code> request, you must have the
         * <code>s3:PutObject</code> in your IAM permissions.</p> </li> <li> <p>To
         * successfully change the objects acl of your <code>PutObject</code> request, you
         * must have the <code>s3:PutObjectAcl</code> in your IAM permissions.</p> </li>
         * <li> <p> The <code>Content-MD5</code> header is required for any request to
         * upload an object with a retention period configured using Amazon S3 Object Lock.
         * For more information about Amazon S3 Object Lock, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock-overview.html">Amazon
         * S3 Object Lock Overview</a> in the <i>Amazon S3 User Guide</i>. </p> </li> </ul>
         *  <p> <b>Server-side Encryption</b> </p> <p>You can optionally request
         * server-side encryption. With server-side encryption, Amazon S3 encrypts your
         * data as it writes it to disks in its data centers and decrypts the data when you
         * access it. You have the option to provide your own encryption key or use Amazon
         * Web Services managed encryption keys (SSE-S3 or SSE-KMS). For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingServerSideEncryption.html">Using
         * Server-Side Encryption</a>.</p> <p>If you request server-side encryption using
         * Amazon Web Services Key Management Service (SSE-KMS), you can enable an S3
         * Bucket Key at the object-level. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/bucket-key.html">Amazon S3
         * Bucket Keys</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Access Control
         * List (ACL)-Specific Request Headers</b> </p> <p>You can use headers to grant
         * ACL- based permissions. By default, all objects are private. Only the owner has
         * full access control. When adding a new object, you can grant permissions to
         * individual Amazon Web Services accounts or to predefined groups defined by
         * Amazon S3. These permissions are then added to the ACL on the object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-using-rest-api.html">Managing
         * ACLs Using the REST API</a>. </p> <p> <b>Storage Class Options</b> </p> <p>By
         * default, Amazon S3 uses the STANDARD Storage Class to store newly created
         * objects. The STANDARD storage class provides high durability and high
         * availability. Depending on performance needs, you can specify a different
         * Storage Class. Amazon S3 on Outposts only uses the OUTPOSTS Storage Class. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage
         * Classes</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Versioning</b> </p>
         * <p>If you enable versioning for a bucket, Amazon S3 automatically generates a
         * unique version ID for the object being stored. Amazon S3 returns this ID in the
         * response. When you enable versioning for a bucket, if Amazon S3 receives
         * multiple write requests for the same object simultaneously, it stores all of the
         * objects.</p> <p>For more information about versioning, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/AddingObjectstoVersioningEnabledBuckets.html">Adding
         * Objects to Versioning Enabled Buckets</a>. For information about returning the
         * versioning state of a bucket, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketVersioning.html">GetBucketVersioning</a>.
         * </p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObject.html">DeleteObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObject">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectAsync(const Model::PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uses the <code>acl</code> subresource to set the access control list (ACL)
         * permissions for a new or existing object in an S3 bucket. You must have
         * <code>WRITE_ACP</code> permission to set the ACL of an object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#permissions">What
         * permissions can I grant?</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This
         * action is not supported by Amazon S3 on Outposts.</p> <p>Depending on your
         * application needs, you can choose to set the ACL on an object using either the
         * request body or the headers. For example, if you have an existing application
         * that updates a bucket ACL using the request body, you can continue to use that
         * approach. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a> in the <i>Amazon S3 User Guide</i>.</p> <p>
         * <b>Access Permissions</b> </p> <p>You can set access permissions using one of
         * the following methods:</p> <ul> <li> <p>Specify a canned ACL with the
         * <code>x-amz-acl</code> request header. Amazon S3 supports a set of predefined
         * ACLs, known as canned ACLs. Each canned ACL has a predefined set of grantees and
         * permissions. Specify the canned ACL name as the value of <code>x-amz-ac</code>l.
         * If you use this header, you cannot use other access control-specific headers in
         * your request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly with the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
         * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
         * headers. When using these headers, you specify explicit access permissions and
         * grantees (Amazon Web Services accounts or Amazon S3 groups) who will receive the
         * permission. If you use these ACL-specific headers, you cannot use
         * <code>x-amz-acl</code> header to set a canned ACL. These parameters map to the
         * set of permissions that Amazon S3 supports in an ACL. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>.</p> <p>You specify each grantee as a type=value
         * pair, where the type is one of the following:</p> <ul> <li> <p> <code>id</code>
         * – if the value specified is the canonical user ID of an Amazon Web Services
         * account</p> </li> <li> <p> <code>uri</code> – if you are granting permissions to
         * a predefined group</p> </li> <li> <p> <code>emailAddress</code> – if the value
         * specified is the email address of an Amazon Web Services account</p> 
         * <p>Using email addresses to specify a grantee is only supported in the following
         * Amazon Web Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li>
         * <li> <p>US West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li>
         * <li> <p> Asia Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p>
         * </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li>
         * <li> <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the
         * Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-read</code> header
         * grants list objects permission to the two Amazon Web Services accounts
         * identified by their email addresses.</p> <p> <code>x-amz-grant-read:
         * emailAddress="xyz@amazon.com", emailAddress="abc@amazon.com" </code> </p> </li>
         * </ul> <p>You can use either a canned ACL or specify access permissions
         * explicitly. You cannot do both.</p> <p> <b>Grantee Values</b> </p> <p>You can
         * specify the person (grantee) to whom you're assigning access rights (using
         * request elements) in the following ways:</p> <ul> <li> <p>By the person's
         * ID:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="CanonicalUser"&gt;&lt;ID&gt;&lt;&gt;ID&lt;&gt;&lt;/ID&gt;&lt;DisplayName&gt;&lt;&gt;GranteesEmail&lt;&gt;&lt;/DisplayName&gt;
         * &lt;/Grantee&gt;</code> </p> <p>DisplayName is optional and ignored in the
         * request.</p> </li> <li> <p>By URI:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="Group"&gt;&lt;URI&gt;&lt;&gt;http://acs.amazonaws.com/groups/global/AuthenticatedUsers&lt;&gt;&lt;/URI&gt;&lt;/Grantee&gt;</code>
         * </p> </li> <li> <p>By Email address:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="AmazonCustomerByEmail"&gt;&lt;EmailAddress&gt;&lt;&gt;Grantees@email.com&lt;&gt;&lt;/EmailAddress&gt;lt;/Grantee&gt;</code>
         * </p> <p>The grantee is resolved to the CanonicalUser and, in a response to a GET
         * Object acl request, appears as the CanonicalUser.</p>  <p>Using email
         * addresses to specify a grantee is only supported in the following Amazon Web
         * Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li> <li> <p>US
         * West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li> <li> <p> Asia
         * Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p> </li> <li>
         * <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li> <li>
         * <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the Amazon S3
         * supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p> <b>Versioning</b> </p> <p>The ACL of an object is set at the
         * object version level. By default, PUT sets the ACL of the current version of an
         * object. To set the ACL of a different version, use the <code>versionId</code>
         * subresource.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectAcl">AWS API
         * Reference</a></p>
         */
        virtual Model::PutObjectAclOutcome PutObjectAcl(const Model::PutObjectAclRequest& request) const;

        /**
         * <p>Uses the <code>acl</code> subresource to set the access control list (ACL)
         * permissions for a new or existing object in an S3 bucket. You must have
         * <code>WRITE_ACP</code> permission to set the ACL of an object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#permissions">What
         * permissions can I grant?</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This
         * action is not supported by Amazon S3 on Outposts.</p> <p>Depending on your
         * application needs, you can choose to set the ACL on an object using either the
         * request body or the headers. For example, if you have an existing application
         * that updates a bucket ACL using the request body, you can continue to use that
         * approach. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a> in the <i>Amazon S3 User Guide</i>.</p> <p>
         * <b>Access Permissions</b> </p> <p>You can set access permissions using one of
         * the following methods:</p> <ul> <li> <p>Specify a canned ACL with the
         * <code>x-amz-acl</code> request header. Amazon S3 supports a set of predefined
         * ACLs, known as canned ACLs. Each canned ACL has a predefined set of grantees and
         * permissions. Specify the canned ACL name as the value of <code>x-amz-ac</code>l.
         * If you use this header, you cannot use other access control-specific headers in
         * your request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly with the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
         * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
         * headers. When using these headers, you specify explicit access permissions and
         * grantees (Amazon Web Services accounts or Amazon S3 groups) who will receive the
         * permission. If you use these ACL-specific headers, you cannot use
         * <code>x-amz-acl</code> header to set a canned ACL. These parameters map to the
         * set of permissions that Amazon S3 supports in an ACL. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>.</p> <p>You specify each grantee as a type=value
         * pair, where the type is one of the following:</p> <ul> <li> <p> <code>id</code>
         * – if the value specified is the canonical user ID of an Amazon Web Services
         * account</p> </li> <li> <p> <code>uri</code> – if you are granting permissions to
         * a predefined group</p> </li> <li> <p> <code>emailAddress</code> – if the value
         * specified is the email address of an Amazon Web Services account</p> 
         * <p>Using email addresses to specify a grantee is only supported in the following
         * Amazon Web Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li>
         * <li> <p>US West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li>
         * <li> <p> Asia Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p>
         * </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li>
         * <li> <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the
         * Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-read</code> header
         * grants list objects permission to the two Amazon Web Services accounts
         * identified by their email addresses.</p> <p> <code>x-amz-grant-read:
         * emailAddress="xyz@amazon.com", emailAddress="abc@amazon.com" </code> </p> </li>
         * </ul> <p>You can use either a canned ACL or specify access permissions
         * explicitly. You cannot do both.</p> <p> <b>Grantee Values</b> </p> <p>You can
         * specify the person (grantee) to whom you're assigning access rights (using
         * request elements) in the following ways:</p> <ul> <li> <p>By the person's
         * ID:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="CanonicalUser"&gt;&lt;ID&gt;&lt;&gt;ID&lt;&gt;&lt;/ID&gt;&lt;DisplayName&gt;&lt;&gt;GranteesEmail&lt;&gt;&lt;/DisplayName&gt;
         * &lt;/Grantee&gt;</code> </p> <p>DisplayName is optional and ignored in the
         * request.</p> </li> <li> <p>By URI:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="Group"&gt;&lt;URI&gt;&lt;&gt;http://acs.amazonaws.com/groups/global/AuthenticatedUsers&lt;&gt;&lt;/URI&gt;&lt;/Grantee&gt;</code>
         * </p> </li> <li> <p>By Email address:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="AmazonCustomerByEmail"&gt;&lt;EmailAddress&gt;&lt;&gt;Grantees@email.com&lt;&gt;&lt;/EmailAddress&gt;lt;/Grantee&gt;</code>
         * </p> <p>The grantee is resolved to the CanonicalUser and, in a response to a GET
         * Object acl request, appears as the CanonicalUser.</p>  <p>Using email
         * addresses to specify a grantee is only supported in the following Amazon Web
         * Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li> <li> <p>US
         * West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li> <li> <p> Asia
         * Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p> </li> <li>
         * <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li> <li>
         * <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the Amazon S3
         * supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p> <b>Versioning</b> </p> <p>The ACL of an object is set at the
         * object version level. By default, PUT sets the ACL of the current version of an
         * object. To set the ACL of a different version, use the <code>versionId</code>
         * subresource.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectAcl">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutObjectAclOutcomeCallable PutObjectAclCallable(const Model::PutObjectAclRequest& request) const;

        /**
         * <p>Uses the <code>acl</code> subresource to set the access control list (ACL)
         * permissions for a new or existing object in an S3 bucket. You must have
         * <code>WRITE_ACP</code> permission to set the ACL of an object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#permissions">What
         * permissions can I grant?</a> in the <i>Amazon S3 User Guide</i>.</p> <p>This
         * action is not supported by Amazon S3 on Outposts.</p> <p>Depending on your
         * application needs, you can choose to set the ACL on an object using either the
         * request body or the headers. For example, if you have an existing application
         * that updates a bucket ACL using the request body, you can continue to use that
         * approach. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a> in the <i>Amazon S3 User Guide</i>.</p> <p>
         * <b>Access Permissions</b> </p> <p>You can set access permissions using one of
         * the following methods:</p> <ul> <li> <p>Specify a canned ACL with the
         * <code>x-amz-acl</code> request header. Amazon S3 supports a set of predefined
         * ACLs, known as canned ACLs. Each canned ACL has a predefined set of grantees and
         * permissions. Specify the canned ACL name as the value of <code>x-amz-ac</code>l.
         * If you use this header, you cannot use other access control-specific headers in
         * your request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html#CannedACL">Canned
         * ACL</a>.</p> </li> <li> <p>Specify access permissions explicitly with the
         * <code>x-amz-grant-read</code>, <code>x-amz-grant-read-acp</code>,
         * <code>x-amz-grant-write-acp</code>, and <code>x-amz-grant-full-control</code>
         * headers. When using these headers, you specify explicit access permissions and
         * grantees (Amazon Web Services accounts or Amazon S3 groups) who will receive the
         * permission. If you use these ACL-specific headers, you cannot use
         * <code>x-amz-acl</code> header to set a canned ACL. These parameters map to the
         * set of permissions that Amazon S3 supports in an ACL. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/acl-overview.html">Access
         * Control List (ACL) Overview</a>.</p> <p>You specify each grantee as a type=value
         * pair, where the type is one of the following:</p> <ul> <li> <p> <code>id</code>
         * – if the value specified is the canonical user ID of an Amazon Web Services
         * account</p> </li> <li> <p> <code>uri</code> – if you are granting permissions to
         * a predefined group</p> </li> <li> <p> <code>emailAddress</code> – if the value
         * specified is the email address of an Amazon Web Services account</p> 
         * <p>Using email addresses to specify a grantee is only supported in the following
         * Amazon Web Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li>
         * <li> <p>US West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li>
         * <li> <p> Asia Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p>
         * </li> <li> <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li>
         * <li> <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the
         * Amazon S3 supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p>For example, the following <code>x-amz-grant-read</code> header
         * grants list objects permission to the two Amazon Web Services accounts
         * identified by their email addresses.</p> <p> <code>x-amz-grant-read:
         * emailAddress="xyz@amazon.com", emailAddress="abc@amazon.com" </code> </p> </li>
         * </ul> <p>You can use either a canned ACL or specify access permissions
         * explicitly. You cannot do both.</p> <p> <b>Grantee Values</b> </p> <p>You can
         * specify the person (grantee) to whom you're assigning access rights (using
         * request elements) in the following ways:</p> <ul> <li> <p>By the person's
         * ID:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="CanonicalUser"&gt;&lt;ID&gt;&lt;&gt;ID&lt;&gt;&lt;/ID&gt;&lt;DisplayName&gt;&lt;&gt;GranteesEmail&lt;&gt;&lt;/DisplayName&gt;
         * &lt;/Grantee&gt;</code> </p> <p>DisplayName is optional and ignored in the
         * request.</p> </li> <li> <p>By URI:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="Group"&gt;&lt;URI&gt;&lt;&gt;http://acs.amazonaws.com/groups/global/AuthenticatedUsers&lt;&gt;&lt;/URI&gt;&lt;/Grantee&gt;</code>
         * </p> </li> <li> <p>By Email address:</p> <p> <code>&lt;Grantee
         * xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         * xsi:type="AmazonCustomerByEmail"&gt;&lt;EmailAddress&gt;&lt;&gt;Grantees@email.com&lt;&gt;&lt;/EmailAddress&gt;lt;/Grantee&gt;</code>
         * </p> <p>The grantee is resolved to the CanonicalUser and, in a response to a GET
         * Object acl request, appears as the CanonicalUser.</p>  <p>Using email
         * addresses to specify a grantee is only supported in the following Amazon Web
         * Services Regions: </p> <ul> <li> <p>US East (N. Virginia)</p> </li> <li> <p>US
         * West (N. California)</p> </li> <li> <p> US West (Oregon)</p> </li> <li> <p> Asia
         * Pacific (Singapore)</p> </li> <li> <p>Asia Pacific (Sydney)</p> </li> <li>
         * <p>Asia Pacific (Tokyo)</p> </li> <li> <p>Europe (Ireland)</p> </li> <li>
         * <p>South America (São Paulo)</p> </li> </ul> <p>For a list of all the Amazon S3
         * supported Regions and endpoints, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
         * and Endpoints</a> in the Amazon Web Services General Reference.</p> 
         * </li> </ul> <p> <b>Versioning</b> </p> <p>The ACL of an object is set at the
         * object version level. By default, PUT sets the ACL of the current version of an
         * object. To set the ACL of a different version, use the <code>versionId</code>
         * subresource.</p> <p class="title"> <b>Related Resources</b> </p> <ul> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectAcl">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectAclAsync(const Model::PutObjectAclRequest& request, const PutObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies a Legal Hold configuration to the specified object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p> <p>This action is not supported by Amazon S3 on
         * Outposts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectLegalHold">AWS
         * API Reference</a></p>
         */
        virtual Model::PutObjectLegalHoldOutcome PutObjectLegalHold(const Model::PutObjectLegalHoldRequest& request) const;

        /**
         * <p>Applies a Legal Hold configuration to the specified object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p> <p>This action is not supported by Amazon S3 on
         * Outposts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectLegalHold">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutObjectLegalHoldOutcomeCallable PutObjectLegalHoldCallable(const Model::PutObjectLegalHoldRequest& request) const;

        /**
         * <p>Applies a Legal Hold configuration to the specified object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>.</p> <p>This action is not supported by Amazon S3 on
         * Outposts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectLegalHold">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectLegalHoldAsync(const Model::PutObjectLegalHoldRequest& request, const PutObjectLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Places an Object Lock configuration on the specified bucket. The rule
         * specified in the Object Lock configuration will be applied by default to every
         * new object placed in the specified bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>. </p>  <ul> <li> <p>The <code>DefaultRetention</code> settings
         * require both a mode and a period.</p> </li> <li> <p>The
         * <code>DefaultRetention</code> period can be either <code>Days</code> or
         * <code>Years</code> but you must select one. You cannot specify <code>Days</code>
         * and <code>Years</code> at the same time.</p> </li> <li> <p>You can only enable
         * Object Lock for new buckets. If you want to turn on Object Lock for an existing
         * bucket, contact Amazon Web Services Support.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectLockConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutObjectLockConfigurationOutcome PutObjectLockConfiguration(const Model::PutObjectLockConfigurationRequest& request) const;

        /**
         * <p>Places an Object Lock configuration on the specified bucket. The rule
         * specified in the Object Lock configuration will be applied by default to every
         * new object placed in the specified bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>. </p>  <ul> <li> <p>The <code>DefaultRetention</code> settings
         * require both a mode and a period.</p> </li> <li> <p>The
         * <code>DefaultRetention</code> period can be either <code>Days</code> or
         * <code>Years</code> but you must select one. You cannot specify <code>Days</code>
         * and <code>Years</code> at the same time.</p> </li> <li> <p>You can only enable
         * Object Lock for new buckets. If you want to turn on Object Lock for an existing
         * bucket, contact Amazon Web Services Support.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectLockConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutObjectLockConfigurationOutcomeCallable PutObjectLockConfigurationCallable(const Model::PutObjectLockConfigurationRequest& request) const;

        /**
         * <p>Places an Object Lock configuration on the specified bucket. The rule
         * specified in the Object Lock configuration will be applied by default to every
         * new object placed in the specified bucket. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>. </p>  <ul> <li> <p>The <code>DefaultRetention</code> settings
         * require both a mode and a period.</p> </li> <li> <p>The
         * <code>DefaultRetention</code> period can be either <code>Days</code> or
         * <code>Years</code> but you must select one. You cannot specify <code>Days</code>
         * and <code>Years</code> at the same time.</p> </li> <li> <p>You can only enable
         * Object Lock for new buckets. If you want to turn on Object Lock for an existing
         * bucket, contact Amazon Web Services Support.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectLockConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectLockConfigurationAsync(const Model::PutObjectLockConfigurationRequest& request, const PutObjectLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Places an Object Retention configuration on an object. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>. Users or accounts require the <code>s3:PutObjectRetention</code>
         * permission in order to place an Object Retention configuration on objects.
         * Bypassing a Governance Retention configuration requires the
         * <code>s3:BypassGovernanceRetention</code> permission. </p> <p>This action is not
         * supported by Amazon S3 on Outposts.</p> <p> <b>Permissions</b> </p> <p>When the
         * Object Lock retention mode is set to compliance, you need
         * <code>s3:PutObjectRetention</code> and <code>s3:BypassGovernanceRetention</code>
         * permissions. For other requests to <code>PutObjectRetention</code>, only
         * <code>s3:PutObjectRetention</code> permissions are required.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectRetention">AWS
         * API Reference</a></p>
         */
        virtual Model::PutObjectRetentionOutcome PutObjectRetention(const Model::PutObjectRetentionRequest& request) const;

        /**
         * <p>Places an Object Retention configuration on an object. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>. Users or accounts require the <code>s3:PutObjectRetention</code>
         * permission in order to place an Object Retention configuration on objects.
         * Bypassing a Governance Retention configuration requires the
         * <code>s3:BypassGovernanceRetention</code> permission. </p> <p>This action is not
         * supported by Amazon S3 on Outposts.</p> <p> <b>Permissions</b> </p> <p>When the
         * Object Lock retention mode is set to compliance, you need
         * <code>s3:PutObjectRetention</code> and <code>s3:BypassGovernanceRetention</code>
         * permissions. For other requests to <code>PutObjectRetention</code>, only
         * <code>s3:PutObjectRetention</code> permissions are required.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectRetention">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutObjectRetentionOutcomeCallable PutObjectRetentionCallable(const Model::PutObjectRetentionRequest& request) const;

        /**
         * <p>Places an Object Retention configuration on an object. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock.html">Locking
         * Objects</a>. Users or accounts require the <code>s3:PutObjectRetention</code>
         * permission in order to place an Object Retention configuration on objects.
         * Bypassing a Governance Retention configuration requires the
         * <code>s3:BypassGovernanceRetention</code> permission. </p> <p>This action is not
         * supported by Amazon S3 on Outposts.</p> <p> <b>Permissions</b> </p> <p>When the
         * Object Lock retention mode is set to compliance, you need
         * <code>s3:PutObjectRetention</code> and <code>s3:BypassGovernanceRetention</code>
         * permissions. For other requests to <code>PutObjectRetention</code>, only
         * <code>s3:PutObjectRetention</code> permissions are required.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectRetention">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectRetentionAsync(const Model::PutObjectRetentionRequest& request, const PutObjectRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the supplied tag-set to an object that already exists in a bucket.</p>
         * <p>A tag is a key-value pair. You can associate tags with an object by sending a
         * PUT request against the tagging subresource that is associated with the object.
         * You can retrieve tags by sending a GET request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>.</p>
         * <p>For tagging-related restrictions related to characters and encodings, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">Tag
         * Restrictions</a>. Note that Amazon S3 limits the maximum number of tags to 10
         * tags per object.</p> <p>To use this operation, you must have permission to
         * perform the <code>s3:PutObjectTagging</code> action. By default, the bucket
         * owner has this permission and can grant this permission to others.</p> <p>To put
         * tags of any other version, use the <code>versionId</code> query parameter. You
         * also need permission for the <code>s3:PutObjectVersionTagging</code> action.</p>
         * <p>For information about the Amazon S3 object tagging feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
         * Tagging</a>.</p> <p class="title"> <b>Special Errors</b> </p> <ul> <li> <ul>
         * <li> <p> <i>Code: InvalidTagError </i> </p> </li> <li> <p> <i>Cause: The tag
         * provided was not a valid tag. This error can occur if the tag did not pass input
         * validation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
         * Tagging</a>.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code:
         * MalformedXMLError </i> </p> </li> <li> <p> <i>Cause: The XML provided does not
         * match the schema.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code:
         * OperationAbortedError </i> </p> </li> <li> <p> <i>Cause: A conflicting
         * conditional action is currently in progress against this resource. Please try
         * again.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code: InternalError</i>
         * </p> </li> <li> <p> <i>Cause: The service was unable to apply the provided tag
         * to the object.</i> </p> </li> </ul> </li> </ul> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObjectTagging.html">DeleteObjectTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectTagging">AWS
         * API Reference</a></p>
         */
        virtual Model::PutObjectTaggingOutcome PutObjectTagging(const Model::PutObjectTaggingRequest& request) const;

        /**
         * <p>Sets the supplied tag-set to an object that already exists in a bucket.</p>
         * <p>A tag is a key-value pair. You can associate tags with an object by sending a
         * PUT request against the tagging subresource that is associated with the object.
         * You can retrieve tags by sending a GET request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>.</p>
         * <p>For tagging-related restrictions related to characters and encodings, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">Tag
         * Restrictions</a>. Note that Amazon S3 limits the maximum number of tags to 10
         * tags per object.</p> <p>To use this operation, you must have permission to
         * perform the <code>s3:PutObjectTagging</code> action. By default, the bucket
         * owner has this permission and can grant this permission to others.</p> <p>To put
         * tags of any other version, use the <code>versionId</code> query parameter. You
         * also need permission for the <code>s3:PutObjectVersionTagging</code> action.</p>
         * <p>For information about the Amazon S3 object tagging feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
         * Tagging</a>.</p> <p class="title"> <b>Special Errors</b> </p> <ul> <li> <ul>
         * <li> <p> <i>Code: InvalidTagError </i> </p> </li> <li> <p> <i>Cause: The tag
         * provided was not a valid tag. This error can occur if the tag did not pass input
         * validation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
         * Tagging</a>.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code:
         * MalformedXMLError </i> </p> </li> <li> <p> <i>Cause: The XML provided does not
         * match the schema.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code:
         * OperationAbortedError </i> </p> </li> <li> <p> <i>Cause: A conflicting
         * conditional action is currently in progress against this resource. Please try
         * again.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code: InternalError</i>
         * </p> </li> <li> <p> <i>Cause: The service was unable to apply the provided tag
         * to the object.</i> </p> </li> </ul> </li> </ul> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObjectTagging.html">DeleteObjectTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectTagging">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutObjectTaggingOutcomeCallable PutObjectTaggingCallable(const Model::PutObjectTaggingRequest& request) const;

        /**
         * <p>Sets the supplied tag-set to an object that already exists in a bucket.</p>
         * <p>A tag is a key-value pair. You can associate tags with an object by sending a
         * PUT request against the tagging subresource that is associated with the object.
         * You can retrieve tags by sending a GET request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>.</p>
         * <p>For tagging-related restrictions related to characters and encodings, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">Tag
         * Restrictions</a>. Note that Amazon S3 limits the maximum number of tags to 10
         * tags per object.</p> <p>To use this operation, you must have permission to
         * perform the <code>s3:PutObjectTagging</code> action. By default, the bucket
         * owner has this permission and can grant this permission to others.</p> <p>To put
         * tags of any other version, use the <code>versionId</code> query parameter. You
         * also need permission for the <code>s3:PutObjectVersionTagging</code> action.</p>
         * <p>For information about the Amazon S3 object tagging feature, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
         * Tagging</a>.</p> <p class="title"> <b>Special Errors</b> </p> <ul> <li> <ul>
         * <li> <p> <i>Code: InvalidTagError </i> </p> </li> <li> <p> <i>Cause: The tag
         * provided was not a valid tag. This error can occur if the tag did not pass input
         * validation. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-tagging.html">Object
         * Tagging</a>.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code:
         * MalformedXMLError </i> </p> </li> <li> <p> <i>Cause: The XML provided does not
         * match the schema.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code:
         * OperationAbortedError </i> </p> </li> <li> <p> <i>Cause: A conflicting
         * conditional action is currently in progress against this resource. Please try
         * again.</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code: InternalError</i>
         * </p> </li> <li> <p> <i>Cause: The service was unable to apply the provided tag
         * to the object.</i> </p> </li> </ul> </li> </ul> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObjectTagging.html">GetObjectTagging</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteObjectTagging.html">DeleteObjectTagging</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutObjectTagging">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutObjectTaggingAsync(const Model::PutObjectTaggingRequest& request, const PutObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * Amazon S3 bucket. To use this operation, you must have the
         * <code>s3:PutBucketPublicAccessBlock</code> permission. For more information
         * about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p>  <p>When Amazon S3 evaluates the
         * <code>PublicAccessBlock</code> configuration for a bucket or an object, it
         * checks the <code>PublicAccessBlock</code> configuration for both the bucket (or
         * the bucket that contains the object) and the bucket owner's account. If the
         * <code>PublicAccessBlock</code> configurations are different between the bucket
         * and the account, Amazon S3 uses the most restrictive combination of the
         * bucket-level and account-level settings.</p>  <p>For more
         * information about when Amazon S3 considers a bucket or an object public, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
         * Meaning of "Public"</a>.</p> <p class="title"> <b>Related Resources</b> </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicyStatus.html">GetBucketPolicyStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPublicAccessBlockOutcome PutPublicAccessBlock(const Model::PutPublicAccessBlockRequest& request) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * Amazon S3 bucket. To use this operation, you must have the
         * <code>s3:PutBucketPublicAccessBlock</code> permission. For more information
         * about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p>  <p>When Amazon S3 evaluates the
         * <code>PublicAccessBlock</code> configuration for a bucket or an object, it
         * checks the <code>PublicAccessBlock</code> configuration for both the bucket (or
         * the bucket that contains the object) and the bucket owner's account. If the
         * <code>PublicAccessBlock</code> configurations are different between the bucket
         * and the account, Amazon S3 uses the most restrictive combination of the
         * bucket-level and account-level settings.</p>  <p>For more
         * information about when Amazon S3 considers a bucket or an object public, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
         * Meaning of "Public"</a>.</p> <p class="title"> <b>Related Resources</b> </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicyStatus.html">GetBucketPolicyStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutPublicAccessBlockOutcomeCallable PutPublicAccessBlockCallable(const Model::PutPublicAccessBlockRequest& request) const;

        /**
         * <p>Creates or modifies the <code>PublicAccessBlock</code> configuration for an
         * Amazon S3 bucket. To use this operation, you must have the
         * <code>s3:PutBucketPublicAccessBlock</code> permission. For more information
         * about Amazon S3 permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a>.</p>  <p>When Amazon S3 evaluates the
         * <code>PublicAccessBlock</code> configuration for a bucket or an object, it
         * checks the <code>PublicAccessBlock</code> configuration for both the bucket (or
         * the bucket that contains the object) and the bucket owner's account. If the
         * <code>PublicAccessBlock</code> configurations are different between the bucket
         * and the account, Amazon S3 uses the most restrictive combination of the
         * bucket-level and account-level settings.</p>  <p>For more
         * information about when Amazon S3 considers a bucket or an object public, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html#access-control-block-public-access-policy-status">The
         * Meaning of "Public"</a>.</p> <p class="title"> <b>Related Resources</b> </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetPublicAccessBlock.html">GetPublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeletePublicAccessBlock.html">DeletePublicAccessBlock</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketPolicyStatus.html">GetBucketPolicyStatus</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/access-control-block-public-access.html">Using
         * Amazon S3 Block Public Access</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/PutPublicAccessBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutPublicAccessBlockAsync(const Model::PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores an archived copy of an object back into Amazon S3</p> <p>This action
         * is not supported by Amazon S3 on Outposts.</p> <p>This action performs the
         * following types of requests: </p> <ul> <li> <p> <code>select</code> - Perform a
         * select query on an archived object</p> </li> <li> <p> <code>restore an
         * archive</code> - Restore an archived object</p> </li> </ul> <p>To use this
         * operation, you must have permissions to perform the
         * <code>s3:RestoreObject</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p> <b>Querying Archives with Select Requests</b> </p> <p>You use
         * a select type of request to perform SQL queries on archived objects. The
         * archived objects that are being queried by the select request must be formatted
         * as uncompressed comma-separated values (CSV) files. You can run queries and
         * custom analytics on your archived data without having to restore your data to a
         * hotter Amazon S3 tier. For an overview about select requests, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/querying-glacier-archives.html">Querying
         * Archived Objects</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When making a
         * select request, do the following:</p> <ul> <li> <p>Define an output location for
         * the select query's output. This must be an Amazon S3 bucket in the same Amazon
         * Web Services Region as the bucket that contains the archive object that is being
         * queried. The Amazon Web Services account that initiates the job must have
         * permissions to write to the S3 bucket. You can specify the storage class and
         * encryption for the output objects stored in the bucket. For more information
         * about output, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/querying-glacier-archives.html">Querying
         * Archived Objects</a> in the <i>Amazon S3 User Guide</i>.</p> <p>For more
         * information about the <code>S3</code> structure in the request body, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Managing
         * Access with ACLs</a> in the <i>Amazon S3 User Guide</i> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
         * Data Using Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i> </p>
         * </li> </ul> </li> <li> <p>Define the SQL expression for the <code>SELECT</code>
         * type of restoration for your query in the request body's
         * <code>SelectParameters</code> structure. You can use expressions like the
         * following examples.</p> <ul> <li> <p>The following expression returns all
         * records from the specified object.</p> <p> <code>SELECT * FROM Object</code>
         * </p> </li> <li> <p>Assuming that you are not using any headers for data stored
         * in the object, you can specify columns with positional headers.</p> <p>
         * <code>SELECT s._1, s._2 FROM Object s WHERE s._3 &gt; 100</code> </p> </li> <li>
         * <p>If you have headers and you set the <code>fileHeaderInfo</code> in the
         * <code>CSV</code> structure in the request body to <code>USE</code>, you can
         * specify headers in the query. (If you set the <code>fileHeaderInfo</code> field
         * to <code>IGNORE</code>, the first row is skipped for the query.) You cannot mix
         * ordinal positions with header column names. </p> <p> <code>SELECT s.Id,
         * s.FirstName, s.SSN FROM S3Object s</code> </p> </li> </ul> </li> </ul> <p>For
         * more information about using SQL with S3 Glacier Select restore, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">SQL
         * Reference for Amazon S3 Select and S3 Glacier Select</a> in the <i>Amazon S3
         * User Guide</i>. </p> <p>When making a select request, you can also do the
         * following:</p> <ul> <li> <p>To expedite your queries, specify the
         * <code>Expedited</code> tier. For more information about tiers, see "Restoring
         * Archives," later in this topic.</p> </li> <li> <p>Specify details about the data
         * serialization format of both the input object that is being queried and the
         * serialization of the CSV-encoded query results.</p> </li> </ul> <p>The following
         * are additional important facts about the select feature:</p> <ul> <li> <p>The
         * output results are new Amazon S3 objects. Unlike archive retrievals, they are
         * stored until explicitly deleted-manually or through a lifecycle policy.</p>
         * </li> <li> <p>You can issue more than one select request on the same Amazon S3
         * object. Amazon S3 doesn't deduplicate requests, so avoid issuing duplicate
         * requests.</p> </li> <li> <p> Amazon S3 accepts a select request even if the
         * object has already been restored. A select request doesn’t return error response
         * <code>409</code>.</p> </li> </ul> <p> <b>Restoring objects</b> </p> <p>Objects
         * that you archive to the S3 Glacier or S3 Glacier Deep Archive storage class, and
         * S3 Intelligent-Tiering Archive or S3 Intelligent-Tiering Deep Archive tiers are
         * not accessible in real time. For objects in Archive Access or Deep Archive
         * Access tiers you must first initiate a restore request, and then wait until the
         * object is moved into the Frequent Access tier. For objects in S3 Glacier or S3
         * Glacier Deep Archive storage classes you must first initiate a restore request,
         * and then wait until a temporary copy of the object is available. To access an
         * archived object, you must restore the object for the duration (number of days)
         * that you specify.</p> <p>To restore a specific object version, you can provide a
         * version ID. If you don't provide a version ID, Amazon S3 restores the current
         * version.</p> <p>When restoring an archived object (or using a select request),
         * you can specify one of the following data access tier options in the
         * <code>Tier</code> element of the request body: </p> <ul> <li> <p> <b>
         * <code>Expedited</code> </b> - Expedited retrievals allow you to quickly access
         * your data stored in the S3 Glacier storage class or S3 Intelligent-Tiering
         * Archive tier when occasional urgent requests for a subset of archives are
         * required. For all but the largest archived objects (250 MB+), data accessed
         * using Expedited retrievals is typically made available within 1–5 minutes.
         * Provisioned capacity ensures that retrieval capacity for Expedited retrievals is
         * available when you need it. Expedited retrievals and provisioned capacity are
         * not available for objects stored in the S3 Glacier Deep Archive storage class or
         * S3 Intelligent-Tiering Deep Archive tier.</p> </li> <li> <p> <b>
         * <code>Standard</code> </b> - Standard retrievals allow you to access any of your
         * archived objects within several hours. This is the default option for retrieval
         * requests that do not specify the retrieval option. Standard retrievals typically
         * finish within 3–5 hours for objects stored in the S3 Glacier storage class or S3
         * Intelligent-Tiering Archive tier. They typically finish within 12 hours for
         * objects stored in the S3 Glacier Deep Archive storage class or S3
         * Intelligent-Tiering Deep Archive tier. Standard retrievals are free for objects
         * stored in S3 Intelligent-Tiering.</p> </li> <li> <p> <b> <code>Bulk</code> </b>
         * - Bulk retrievals are the lowest-cost retrieval option in S3 Glacier, enabling
         * you to retrieve large amounts, even petabytes, of data inexpensively. Bulk
         * retrievals typically finish within 5–12 hours for objects stored in the S3
         * Glacier storage class or S3 Intelligent-Tiering Archive tier. They typically
         * finish within 48 hours for objects stored in the S3 Glacier Deep Archive storage
         * class or S3 Intelligent-Tiering Deep Archive tier. Bulk retrievals are free for
         * objects stored in S3 Intelligent-Tiering.</p> </li> </ul> <p>For more
         * information about archive retrieval options and provisioned capacity for
         * <code>Expedited</code> data access, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html">Restoring
         * Archived Objects</a> in the <i>Amazon S3 User Guide</i>. </p> <p>You can use
         * Amazon S3 restore speed upgrade to change the restore speed to a faster speed
         * while it is in progress. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html#restoring-objects-upgrade-tier.title.html">
         * Upgrading the speed of an in-progress restore</a> in the <i>Amazon S3 User
         * Guide</i>. </p> <p>To get the status of object restoration, you can send a
         * <code>HEAD</code> request. Operations return the <code>x-amz-restore</code>
         * header, which provides information about the restoration status, in the
         * response. You can use Amazon S3 event notifications to notify you when a restore
         * is initiated or completed. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
         * Amazon S3 Event Notifications</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p>After restoring an archived object, you can update the restoration period by
         * reissuing the request with a new period. Amazon S3 updates the restoration
         * period relative to the current time and charges only for the request-there are
         * no data transfer charges. You cannot update the restoration period when Amazon
         * S3 is actively processing your current restore request for the object.</p> <p>If
         * your bucket has a lifecycle configuration with a rule that includes an
         * expiration action, the object expiration overrides the life span that you
         * specify in a restore request. For example, if you restore an object copy for 10
         * days, but the object is scheduled to expire in 3 days, Amazon S3 deletes the
         * object in 3 days. For more information about lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
         * Lifecycle Management</a> in <i>Amazon S3 User Guide</i>.</p> <p>
         * <b>Responses</b> </p> <p>A successful action returns either the <code>200
         * OK</code> or <code>202 Accepted</code> status code. </p> <ul> <li> <p>If the
         * object is not previously restored, then Amazon S3 returns <code>202
         * Accepted</code> in the response. </p> </li> <li> <p>If the object is previously
         * restored, Amazon S3 returns <code>200 OK</code> in the response. </p> </li>
         * </ul> <p class="title"> <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p>
         * <i>Code: RestoreAlreadyInProgress</i> </p> </li> <li> <p> <i>Cause: Object
         * restore is already in progress. (This error does not apply to SELECT type
         * requests.)</i> </p> </li> <li> <p> <i>HTTP Status Code: 409 Conflict</i> </p>
         * </li> <li> <p> <i>SOAP Fault Code Prefix: Client</i> </p> </li> </ul> </li> <li>
         * <ul> <li> <p> <i>Code: GlacierExpeditedRetrievalNotAvailable</i> </p> </li> <li>
         * <p> <i>Cause: expedited retrievals are currently not available. Try again later.
         * (Returned if there is insufficient capacity to process the Expedited request.
         * This error applies only to Expedited retrievals and not to S3 Standard or Bulk
         * retrievals.)</i> </p> </li> <li> <p> <i>HTTP Status Code: 503</i> </p> </li>
         * <li> <p> <i>SOAP Fault Code Prefix: N/A</i> </p> </li> </ul> </li> </ul> <p
         * class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketNotificationConfiguration.html">GetBucketNotificationConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">SQL
         * Reference for Amazon S3 Select and S3 Glacier Select </a> in the <i>Amazon S3
         * User Guide</i> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/RestoreObject">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreObjectOutcome RestoreObject(const Model::RestoreObjectRequest& request) const;

        /**
         * <p>Restores an archived copy of an object back into Amazon S3</p> <p>This action
         * is not supported by Amazon S3 on Outposts.</p> <p>This action performs the
         * following types of requests: </p> <ul> <li> <p> <code>select</code> - Perform a
         * select query on an archived object</p> </li> <li> <p> <code>restore an
         * archive</code> - Restore an archived object</p> </li> </ul> <p>To use this
         * operation, you must have permissions to perform the
         * <code>s3:RestoreObject</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p> <b>Querying Archives with Select Requests</b> </p> <p>You use
         * a select type of request to perform SQL queries on archived objects. The
         * archived objects that are being queried by the select request must be formatted
         * as uncompressed comma-separated values (CSV) files. You can run queries and
         * custom analytics on your archived data without having to restore your data to a
         * hotter Amazon S3 tier. For an overview about select requests, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/querying-glacier-archives.html">Querying
         * Archived Objects</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When making a
         * select request, do the following:</p> <ul> <li> <p>Define an output location for
         * the select query's output. This must be an Amazon S3 bucket in the same Amazon
         * Web Services Region as the bucket that contains the archive object that is being
         * queried. The Amazon Web Services account that initiates the job must have
         * permissions to write to the S3 bucket. You can specify the storage class and
         * encryption for the output objects stored in the bucket. For more information
         * about output, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/querying-glacier-archives.html">Querying
         * Archived Objects</a> in the <i>Amazon S3 User Guide</i>.</p> <p>For more
         * information about the <code>S3</code> structure in the request body, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Managing
         * Access with ACLs</a> in the <i>Amazon S3 User Guide</i> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
         * Data Using Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i> </p>
         * </li> </ul> </li> <li> <p>Define the SQL expression for the <code>SELECT</code>
         * type of restoration for your query in the request body's
         * <code>SelectParameters</code> structure. You can use expressions like the
         * following examples.</p> <ul> <li> <p>The following expression returns all
         * records from the specified object.</p> <p> <code>SELECT * FROM Object</code>
         * </p> </li> <li> <p>Assuming that you are not using any headers for data stored
         * in the object, you can specify columns with positional headers.</p> <p>
         * <code>SELECT s._1, s._2 FROM Object s WHERE s._3 &gt; 100</code> </p> </li> <li>
         * <p>If you have headers and you set the <code>fileHeaderInfo</code> in the
         * <code>CSV</code> structure in the request body to <code>USE</code>, you can
         * specify headers in the query. (If you set the <code>fileHeaderInfo</code> field
         * to <code>IGNORE</code>, the first row is skipped for the query.) You cannot mix
         * ordinal positions with header column names. </p> <p> <code>SELECT s.Id,
         * s.FirstName, s.SSN FROM S3Object s</code> </p> </li> </ul> </li> </ul> <p>For
         * more information about using SQL with S3 Glacier Select restore, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">SQL
         * Reference for Amazon S3 Select and S3 Glacier Select</a> in the <i>Amazon S3
         * User Guide</i>. </p> <p>When making a select request, you can also do the
         * following:</p> <ul> <li> <p>To expedite your queries, specify the
         * <code>Expedited</code> tier. For more information about tiers, see "Restoring
         * Archives," later in this topic.</p> </li> <li> <p>Specify details about the data
         * serialization format of both the input object that is being queried and the
         * serialization of the CSV-encoded query results.</p> </li> </ul> <p>The following
         * are additional important facts about the select feature:</p> <ul> <li> <p>The
         * output results are new Amazon S3 objects. Unlike archive retrievals, they are
         * stored until explicitly deleted-manually or through a lifecycle policy.</p>
         * </li> <li> <p>You can issue more than one select request on the same Amazon S3
         * object. Amazon S3 doesn't deduplicate requests, so avoid issuing duplicate
         * requests.</p> </li> <li> <p> Amazon S3 accepts a select request even if the
         * object has already been restored. A select request doesn’t return error response
         * <code>409</code>.</p> </li> </ul> <p> <b>Restoring objects</b> </p> <p>Objects
         * that you archive to the S3 Glacier or S3 Glacier Deep Archive storage class, and
         * S3 Intelligent-Tiering Archive or S3 Intelligent-Tiering Deep Archive tiers are
         * not accessible in real time. For objects in Archive Access or Deep Archive
         * Access tiers you must first initiate a restore request, and then wait until the
         * object is moved into the Frequent Access tier. For objects in S3 Glacier or S3
         * Glacier Deep Archive storage classes you must first initiate a restore request,
         * and then wait until a temporary copy of the object is available. To access an
         * archived object, you must restore the object for the duration (number of days)
         * that you specify.</p> <p>To restore a specific object version, you can provide a
         * version ID. If you don't provide a version ID, Amazon S3 restores the current
         * version.</p> <p>When restoring an archived object (or using a select request),
         * you can specify one of the following data access tier options in the
         * <code>Tier</code> element of the request body: </p> <ul> <li> <p> <b>
         * <code>Expedited</code> </b> - Expedited retrievals allow you to quickly access
         * your data stored in the S3 Glacier storage class or S3 Intelligent-Tiering
         * Archive tier when occasional urgent requests for a subset of archives are
         * required. For all but the largest archived objects (250 MB+), data accessed
         * using Expedited retrievals is typically made available within 1–5 minutes.
         * Provisioned capacity ensures that retrieval capacity for Expedited retrievals is
         * available when you need it. Expedited retrievals and provisioned capacity are
         * not available for objects stored in the S3 Glacier Deep Archive storage class or
         * S3 Intelligent-Tiering Deep Archive tier.</p> </li> <li> <p> <b>
         * <code>Standard</code> </b> - Standard retrievals allow you to access any of your
         * archived objects within several hours. This is the default option for retrieval
         * requests that do not specify the retrieval option. Standard retrievals typically
         * finish within 3–5 hours for objects stored in the S3 Glacier storage class or S3
         * Intelligent-Tiering Archive tier. They typically finish within 12 hours for
         * objects stored in the S3 Glacier Deep Archive storage class or S3
         * Intelligent-Tiering Deep Archive tier. Standard retrievals are free for objects
         * stored in S3 Intelligent-Tiering.</p> </li> <li> <p> <b> <code>Bulk</code> </b>
         * - Bulk retrievals are the lowest-cost retrieval option in S3 Glacier, enabling
         * you to retrieve large amounts, even petabytes, of data inexpensively. Bulk
         * retrievals typically finish within 5–12 hours for objects stored in the S3
         * Glacier storage class or S3 Intelligent-Tiering Archive tier. They typically
         * finish within 48 hours for objects stored in the S3 Glacier Deep Archive storage
         * class or S3 Intelligent-Tiering Deep Archive tier. Bulk retrievals are free for
         * objects stored in S3 Intelligent-Tiering.</p> </li> </ul> <p>For more
         * information about archive retrieval options and provisioned capacity for
         * <code>Expedited</code> data access, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html">Restoring
         * Archived Objects</a> in the <i>Amazon S3 User Guide</i>. </p> <p>You can use
         * Amazon S3 restore speed upgrade to change the restore speed to a faster speed
         * while it is in progress. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html#restoring-objects-upgrade-tier.title.html">
         * Upgrading the speed of an in-progress restore</a> in the <i>Amazon S3 User
         * Guide</i>. </p> <p>To get the status of object restoration, you can send a
         * <code>HEAD</code> request. Operations return the <code>x-amz-restore</code>
         * header, which provides information about the restoration status, in the
         * response. You can use Amazon S3 event notifications to notify you when a restore
         * is initiated or completed. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
         * Amazon S3 Event Notifications</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p>After restoring an archived object, you can update the restoration period by
         * reissuing the request with a new period. Amazon S3 updates the restoration
         * period relative to the current time and charges only for the request-there are
         * no data transfer charges. You cannot update the restoration period when Amazon
         * S3 is actively processing your current restore request for the object.</p> <p>If
         * your bucket has a lifecycle configuration with a rule that includes an
         * expiration action, the object expiration overrides the life span that you
         * specify in a restore request. For example, if you restore an object copy for 10
         * days, but the object is scheduled to expire in 3 days, Amazon S3 deletes the
         * object in 3 days. For more information about lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
         * Lifecycle Management</a> in <i>Amazon S3 User Guide</i>.</p> <p>
         * <b>Responses</b> </p> <p>A successful action returns either the <code>200
         * OK</code> or <code>202 Accepted</code> status code. </p> <ul> <li> <p>If the
         * object is not previously restored, then Amazon S3 returns <code>202
         * Accepted</code> in the response. </p> </li> <li> <p>If the object is previously
         * restored, Amazon S3 returns <code>200 OK</code> in the response. </p> </li>
         * </ul> <p class="title"> <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p>
         * <i>Code: RestoreAlreadyInProgress</i> </p> </li> <li> <p> <i>Cause: Object
         * restore is already in progress. (This error does not apply to SELECT type
         * requests.)</i> </p> </li> <li> <p> <i>HTTP Status Code: 409 Conflict</i> </p>
         * </li> <li> <p> <i>SOAP Fault Code Prefix: Client</i> </p> </li> </ul> </li> <li>
         * <ul> <li> <p> <i>Code: GlacierExpeditedRetrievalNotAvailable</i> </p> </li> <li>
         * <p> <i>Cause: expedited retrievals are currently not available. Try again later.
         * (Returned if there is insufficient capacity to process the Expedited request.
         * This error applies only to Expedited retrievals and not to S3 Standard or Bulk
         * retrievals.)</i> </p> </li> <li> <p> <i>HTTP Status Code: 503</i> </p> </li>
         * <li> <p> <i>SOAP Fault Code Prefix: N/A</i> </p> </li> </ul> </li> </ul> <p
         * class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketNotificationConfiguration.html">GetBucketNotificationConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">SQL
         * Reference for Amazon S3 Select and S3 Glacier Select </a> in the <i>Amazon S3
         * User Guide</i> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/RestoreObject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreObjectOutcomeCallable RestoreObjectCallable(const Model::RestoreObjectRequest& request) const;

        /**
         * <p>Restores an archived copy of an object back into Amazon S3</p> <p>This action
         * is not supported by Amazon S3 on Outposts.</p> <p>This action performs the
         * following types of requests: </p> <ul> <li> <p> <code>select</code> - Perform a
         * select query on an archived object</p> </li> <li> <p> <code>restore an
         * archive</code> - Restore an archived object</p> </li> </ul> <p>To use this
         * operation, you must have permissions to perform the
         * <code>s3:RestoreObject</code> action. The bucket owner has this permission by
         * default and can grant this permission to others. For more information about
         * permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-with-s3-actions.html#using-with-s3-actions-related-to-bucket-subresources">Permissions
         * Related to Bucket Subresource Operations</a> and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-access-control.html">Managing
         * Access Permissions to Your Amazon S3 Resources</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p> <b>Querying Archives with Select Requests</b> </p> <p>You use
         * a select type of request to perform SQL queries on archived objects. The
         * archived objects that are being queried by the select request must be formatted
         * as uncompressed comma-separated values (CSV) files. You can run queries and
         * custom analytics on your archived data without having to restore your data to a
         * hotter Amazon S3 tier. For an overview about select requests, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/querying-glacier-archives.html">Querying
         * Archived Objects</a> in the <i>Amazon S3 User Guide</i>.</p> <p>When making a
         * select request, do the following:</p> <ul> <li> <p>Define an output location for
         * the select query's output. This must be an Amazon S3 bucket in the same Amazon
         * Web Services Region as the bucket that contains the archive object that is being
         * queried. The Amazon Web Services account that initiates the job must have
         * permissions to write to the S3 bucket. You can specify the storage class and
         * encryption for the output objects stored in the bucket. For more information
         * about output, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/querying-glacier-archives.html">Querying
         * Archived Objects</a> in the <i>Amazon S3 User Guide</i>.</p> <p>For more
         * information about the <code>S3</code> structure in the request body, see the
         * following:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObject.html">PutObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/S3_ACLs_UsingACLs.html">Managing
         * Access with ACLs</a> in the <i>Amazon S3 User Guide</i> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
         * Data Using Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i> </p>
         * </li> </ul> </li> <li> <p>Define the SQL expression for the <code>SELECT</code>
         * type of restoration for your query in the request body's
         * <code>SelectParameters</code> structure. You can use expressions like the
         * following examples.</p> <ul> <li> <p>The following expression returns all
         * records from the specified object.</p> <p> <code>SELECT * FROM Object</code>
         * </p> </li> <li> <p>Assuming that you are not using any headers for data stored
         * in the object, you can specify columns with positional headers.</p> <p>
         * <code>SELECT s._1, s._2 FROM Object s WHERE s._3 &gt; 100</code> </p> </li> <li>
         * <p>If you have headers and you set the <code>fileHeaderInfo</code> in the
         * <code>CSV</code> structure in the request body to <code>USE</code>, you can
         * specify headers in the query. (If you set the <code>fileHeaderInfo</code> field
         * to <code>IGNORE</code>, the first row is skipped for the query.) You cannot mix
         * ordinal positions with header column names. </p> <p> <code>SELECT s.Id,
         * s.FirstName, s.SSN FROM S3Object s</code> </p> </li> </ul> </li> </ul> <p>For
         * more information about using SQL with S3 Glacier Select restore, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">SQL
         * Reference for Amazon S3 Select and S3 Glacier Select</a> in the <i>Amazon S3
         * User Guide</i>. </p> <p>When making a select request, you can also do the
         * following:</p> <ul> <li> <p>To expedite your queries, specify the
         * <code>Expedited</code> tier. For more information about tiers, see "Restoring
         * Archives," later in this topic.</p> </li> <li> <p>Specify details about the data
         * serialization format of both the input object that is being queried and the
         * serialization of the CSV-encoded query results.</p> </li> </ul> <p>The following
         * are additional important facts about the select feature:</p> <ul> <li> <p>The
         * output results are new Amazon S3 objects. Unlike archive retrievals, they are
         * stored until explicitly deleted-manually or through a lifecycle policy.</p>
         * </li> <li> <p>You can issue more than one select request on the same Amazon S3
         * object. Amazon S3 doesn't deduplicate requests, so avoid issuing duplicate
         * requests.</p> </li> <li> <p> Amazon S3 accepts a select request even if the
         * object has already been restored. A select request doesn’t return error response
         * <code>409</code>.</p> </li> </ul> <p> <b>Restoring objects</b> </p> <p>Objects
         * that you archive to the S3 Glacier or S3 Glacier Deep Archive storage class, and
         * S3 Intelligent-Tiering Archive or S3 Intelligent-Tiering Deep Archive tiers are
         * not accessible in real time. For objects in Archive Access or Deep Archive
         * Access tiers you must first initiate a restore request, and then wait until the
         * object is moved into the Frequent Access tier. For objects in S3 Glacier or S3
         * Glacier Deep Archive storage classes you must first initiate a restore request,
         * and then wait until a temporary copy of the object is available. To access an
         * archived object, you must restore the object for the duration (number of days)
         * that you specify.</p> <p>To restore a specific object version, you can provide a
         * version ID. If you don't provide a version ID, Amazon S3 restores the current
         * version.</p> <p>When restoring an archived object (or using a select request),
         * you can specify one of the following data access tier options in the
         * <code>Tier</code> element of the request body: </p> <ul> <li> <p> <b>
         * <code>Expedited</code> </b> - Expedited retrievals allow you to quickly access
         * your data stored in the S3 Glacier storage class or S3 Intelligent-Tiering
         * Archive tier when occasional urgent requests for a subset of archives are
         * required. For all but the largest archived objects (250 MB+), data accessed
         * using Expedited retrievals is typically made available within 1–5 minutes.
         * Provisioned capacity ensures that retrieval capacity for Expedited retrievals is
         * available when you need it. Expedited retrievals and provisioned capacity are
         * not available for objects stored in the S3 Glacier Deep Archive storage class or
         * S3 Intelligent-Tiering Deep Archive tier.</p> </li> <li> <p> <b>
         * <code>Standard</code> </b> - Standard retrievals allow you to access any of your
         * archived objects within several hours. This is the default option for retrieval
         * requests that do not specify the retrieval option. Standard retrievals typically
         * finish within 3–5 hours for objects stored in the S3 Glacier storage class or S3
         * Intelligent-Tiering Archive tier. They typically finish within 12 hours for
         * objects stored in the S3 Glacier Deep Archive storage class or S3
         * Intelligent-Tiering Deep Archive tier. Standard retrievals are free for objects
         * stored in S3 Intelligent-Tiering.</p> </li> <li> <p> <b> <code>Bulk</code> </b>
         * - Bulk retrievals are the lowest-cost retrieval option in S3 Glacier, enabling
         * you to retrieve large amounts, even petabytes, of data inexpensively. Bulk
         * retrievals typically finish within 5–12 hours for objects stored in the S3
         * Glacier storage class or S3 Intelligent-Tiering Archive tier. They typically
         * finish within 48 hours for objects stored in the S3 Glacier Deep Archive storage
         * class or S3 Intelligent-Tiering Deep Archive tier. Bulk retrievals are free for
         * objects stored in S3 Intelligent-Tiering.</p> </li> </ul> <p>For more
         * information about archive retrieval options and provisioned capacity for
         * <code>Expedited</code> data access, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html">Restoring
         * Archived Objects</a> in the <i>Amazon S3 User Guide</i>. </p> <p>You can use
         * Amazon S3 restore speed upgrade to change the restore speed to a faster speed
         * while it is in progress. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/restoring-objects.html#restoring-objects-upgrade-tier.title.html">
         * Upgrading the speed of an in-progress restore</a> in the <i>Amazon S3 User
         * Guide</i>. </p> <p>To get the status of object restoration, you can send a
         * <code>HEAD</code> request. Operations return the <code>x-amz-restore</code>
         * header, which provides information about the restoration status, in the
         * response. You can use Amazon S3 event notifications to notify you when a restore
         * is initiated or completed. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/NotificationHowTo.html">Configuring
         * Amazon S3 Event Notifications</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p>After restoring an archived object, you can update the restoration period by
         * reissuing the request with a new period. Amazon S3 updates the restoration
         * period relative to the current time and charges only for the request-there are
         * no data transfer charges. You cannot update the restoration period when Amazon
         * S3 is actively processing your current restore request for the object.</p> <p>If
         * your bucket has a lifecycle configuration with a rule that includes an
         * expiration action, the object expiration overrides the life span that you
         * specify in a restore request. For example, if you restore an object copy for 10
         * days, but the object is scheduled to expire in 3 days, Amazon S3 deletes the
         * object in 3 days. For more information about lifecycle configuration, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lifecycle-mgmt.html">Object
         * Lifecycle Management</a> in <i>Amazon S3 User Guide</i>.</p> <p>
         * <b>Responses</b> </p> <p>A successful action returns either the <code>200
         * OK</code> or <code>202 Accepted</code> status code. </p> <ul> <li> <p>If the
         * object is not previously restored, then Amazon S3 returns <code>202
         * Accepted</code> in the response. </p> </li> <li> <p>If the object is previously
         * restored, Amazon S3 returns <code>200 OK</code> in the response. </p> </li>
         * </ul> <p class="title"> <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p>
         * <i>Code: RestoreAlreadyInProgress</i> </p> </li> <li> <p> <i>Cause: Object
         * restore is already in progress. (This error does not apply to SELECT type
         * requests.)</i> </p> </li> <li> <p> <i>HTTP Status Code: 409 Conflict</i> </p>
         * </li> <li> <p> <i>SOAP Fault Code Prefix: Client</i> </p> </li> </ul> </li> <li>
         * <ul> <li> <p> <i>Code: GlacierExpeditedRetrievalNotAvailable</i> </p> </li> <li>
         * <p> <i>Cause: expedited retrievals are currently not available. Try again later.
         * (Returned if there is insufficient capacity to process the Expedited request.
         * This error applies only to Expedited retrievals and not to S3 Standard or Bulk
         * retrievals.)</i> </p> </li> <li> <p> <i>HTTP Status Code: 503</i> </p> </li>
         * <li> <p> <i>SOAP Fault Code Prefix: N/A</i> </p> </li> </ul> </li> </ul> <p
         * class="title"> <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketNotificationConfiguration.html">GetBucketNotificationConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">SQL
         * Reference for Amazon S3 Select and S3 Glacier Select </a> in the <i>Amazon S3
         * User Guide</i> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/RestoreObject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreObjectAsync(const Model::RestoreObjectRequest& request, const RestoreObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action filters the contents of an Amazon S3 object based on a simple
         * structured query language (SQL) statement. In the request, along with the SQL
         * expression, you must also specify a data serialization format (JSON, CSV, or
         * Apache Parquet) of the object. Amazon S3 uses this format to parse object data
         * into records, and returns only records that match the specified SQL expression.
         * You must also specify the data serialization format for the response.</p>
         * <p>This action is not supported by Amazon S3 on Outposts.</p> <p>For more
         * information about Amazon S3 Select, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/selecting-content-from-objects.html">Selecting
         * Content from Objects</a> in the <i>Amazon S3 User Guide</i>.</p> <p>For more
         * information about using SQL with Amazon S3 Select, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">
         * SQL Reference for Amazon S3 Select and S3 Glacier Select</a> in the <i>Amazon S3
         * User Guide</i>.</p> <p/> <p> <b>Permissions</b> </p> <p>You must have
         * <code>s3:GetObject</code> permission for this operation. Amazon S3 Select does
         * not support anonymous access. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a> in the <i>Amazon S3 User Guide</i>.</p> <p/> <p>
         * <i>Object Data Formats</i> </p> <p>You can use Amazon S3 Select to query objects
         * that have the following format properties:</p> <ul> <li> <p> <i>CSV, JSON, and
         * Parquet</i> - Objects must be in CSV, JSON, or Parquet format.</p> </li> <li>
         * <p> <i>UTF-8</i> - UTF-8 is the only encoding type Amazon S3 Select
         * supports.</p> </li> <li> <p> <i>GZIP or BZIP2</i> - CSV and JSON files can be
         * compressed using GZIP or BZIP2. GZIP and BZIP2 are the only compression formats
         * that Amazon S3 Select supports for CSV and JSON files. Amazon S3 Select supports
         * columnar compression for Parquet using GZIP or Snappy. Amazon S3 Select does not
         * support whole-object compression for Parquet objects.</p> </li> <li> <p>
         * <i>Server-side encryption</i> - Amazon S3 Select supports querying objects that
         * are protected with server-side encryption.</p> <p>For objects that are encrypted
         * with customer-provided encryption keys (SSE-C), you must use HTTPS, and you must
         * use the headers that are documented in the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>.
         * For more information about SSE-C, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
         * Encryption (Using Customer-Provided Encryption Keys)</a> in the <i>Amazon S3
         * User Guide</i>.</p> <p>For objects that are encrypted with Amazon S3 managed
         * encryption keys (SSE-S3) and Amazon Web Services KMS keys (SSE-KMS), server-side
         * encryption is handled transparently, so you don't need to specify anything. For
         * more information about server-side encryption, including SSE-S3 and SSE-KMS, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
         * Data Using Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i>.</p>
         * </li> </ul> <p> <b>Working with the Response Body</b> </p> <p>Given the response
         * size is unknown, Amazon S3 Select streams the response as a series of messages
         * and includes a <code>Transfer-Encoding</code> header with <code>chunked</code>
         * as its value in the response. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTSelectObjectAppendix.html">Appendix:
         * SelectObjectContent Response</a>.</p> <p/> <p> <b>GetObject Support</b> </p>
         * <p>The <code>SelectObjectContent</code> action does not support the following
         * <code>GetObject</code> functionality. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>.</p>
         * <ul> <li> <p> <code>Range</code>: Although you can specify a scan range for an
         * Amazon S3 Select request (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_SelectObjectContent.html#AmazonS3-SelectObjectContent-request-ScanRange">SelectObjectContentRequest
         * - ScanRange</a> in the request parameters), you cannot specify the range of
         * bytes of an object to return. </p> </li> <li> <p>GLACIER, DEEP_ARCHIVE and
         * REDUCED_REDUNDANCY storage classes: You cannot specify the GLACIER,
         * DEEP_ARCHIVE, or <code>REDUCED_REDUNDANCY</code> storage classes. For more
         * information, about storage classes see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#storage-class-intro">Storage
         * Classes</a> in the <i>Amazon S3 User Guide</i>.</p> </li> </ul> <p/> <p>
         * <b>Special Errors</b> </p> <p>For a list of special errors for this operation,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#SelectObjectContentErrorCodeList">List
         * of SELECT Object Content Error Codes</a> </p> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/SelectObjectContent">AWS
         * API Reference</a></p>
         */
        virtual Model::SelectObjectContentOutcome SelectObjectContent(Model::SelectObjectContentRequest& request) const;

        /**
         * <p>This action filters the contents of an Amazon S3 object based on a simple
         * structured query language (SQL) statement. In the request, along with the SQL
         * expression, you must also specify a data serialization format (JSON, CSV, or
         * Apache Parquet) of the object. Amazon S3 uses this format to parse object data
         * into records, and returns only records that match the specified SQL expression.
         * You must also specify the data serialization format for the response.</p>
         * <p>This action is not supported by Amazon S3 on Outposts.</p> <p>For more
         * information about Amazon S3 Select, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/selecting-content-from-objects.html">Selecting
         * Content from Objects</a> in the <i>Amazon S3 User Guide</i>.</p> <p>For more
         * information about using SQL with Amazon S3 Select, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">
         * SQL Reference for Amazon S3 Select and S3 Glacier Select</a> in the <i>Amazon S3
         * User Guide</i>.</p> <p/> <p> <b>Permissions</b> </p> <p>You must have
         * <code>s3:GetObject</code> permission for this operation. Amazon S3 Select does
         * not support anonymous access. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a> in the <i>Amazon S3 User Guide</i>.</p> <p/> <p>
         * <i>Object Data Formats</i> </p> <p>You can use Amazon S3 Select to query objects
         * that have the following format properties:</p> <ul> <li> <p> <i>CSV, JSON, and
         * Parquet</i> - Objects must be in CSV, JSON, or Parquet format.</p> </li> <li>
         * <p> <i>UTF-8</i> - UTF-8 is the only encoding type Amazon S3 Select
         * supports.</p> </li> <li> <p> <i>GZIP or BZIP2</i> - CSV and JSON files can be
         * compressed using GZIP or BZIP2. GZIP and BZIP2 are the only compression formats
         * that Amazon S3 Select supports for CSV and JSON files. Amazon S3 Select supports
         * columnar compression for Parquet using GZIP or Snappy. Amazon S3 Select does not
         * support whole-object compression for Parquet objects.</p> </li> <li> <p>
         * <i>Server-side encryption</i> - Amazon S3 Select supports querying objects that
         * are protected with server-side encryption.</p> <p>For objects that are encrypted
         * with customer-provided encryption keys (SSE-C), you must use HTTPS, and you must
         * use the headers that are documented in the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>.
         * For more information about SSE-C, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
         * Encryption (Using Customer-Provided Encryption Keys)</a> in the <i>Amazon S3
         * User Guide</i>.</p> <p>For objects that are encrypted with Amazon S3 managed
         * encryption keys (SSE-S3) and Amazon Web Services KMS keys (SSE-KMS), server-side
         * encryption is handled transparently, so you don't need to specify anything. For
         * more information about server-side encryption, including SSE-S3 and SSE-KMS, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
         * Data Using Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i>.</p>
         * </li> </ul> <p> <b>Working with the Response Body</b> </p> <p>Given the response
         * size is unknown, Amazon S3 Select streams the response as a series of messages
         * and includes a <code>Transfer-Encoding</code> header with <code>chunked</code>
         * as its value in the response. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTSelectObjectAppendix.html">Appendix:
         * SelectObjectContent Response</a>.</p> <p/> <p> <b>GetObject Support</b> </p>
         * <p>The <code>SelectObjectContent</code> action does not support the following
         * <code>GetObject</code> functionality. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>.</p>
         * <ul> <li> <p> <code>Range</code>: Although you can specify a scan range for an
         * Amazon S3 Select request (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_SelectObjectContent.html#AmazonS3-SelectObjectContent-request-ScanRange">SelectObjectContentRequest
         * - ScanRange</a> in the request parameters), you cannot specify the range of
         * bytes of an object to return. </p> </li> <li> <p>GLACIER, DEEP_ARCHIVE and
         * REDUCED_REDUNDANCY storage classes: You cannot specify the GLACIER,
         * DEEP_ARCHIVE, or <code>REDUCED_REDUNDANCY</code> storage classes. For more
         * information, about storage classes see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#storage-class-intro">Storage
         * Classes</a> in the <i>Amazon S3 User Guide</i>.</p> </li> </ul> <p/> <p>
         * <b>Special Errors</b> </p> <p>For a list of special errors for this operation,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#SelectObjectContentErrorCodeList">List
         * of SELECT Object Content Error Codes</a> </p> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/SelectObjectContent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SelectObjectContentOutcomeCallable SelectObjectContentCallable(Model::SelectObjectContentRequest& request) const;

        /**
         * <p>This action filters the contents of an Amazon S3 object based on a simple
         * structured query language (SQL) statement. In the request, along with the SQL
         * expression, you must also specify a data serialization format (JSON, CSV, or
         * Apache Parquet) of the object. Amazon S3 uses this format to parse object data
         * into records, and returns only records that match the specified SQL expression.
         * You must also specify the data serialization format for the response.</p>
         * <p>This action is not supported by Amazon S3 on Outposts.</p> <p>For more
         * information about Amazon S3 Select, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/selecting-content-from-objects.html">Selecting
         * Content from Objects</a> in the <i>Amazon S3 User Guide</i>.</p> <p>For more
         * information about using SQL with Amazon S3 Select, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-glacier-select-sql-reference.html">
         * SQL Reference for Amazon S3 Select and S3 Glacier Select</a> in the <i>Amazon S3
         * User Guide</i>.</p> <p/> <p> <b>Permissions</b> </p> <p>You must have
         * <code>s3:GetObject</code> permission for this operation. Amazon S3 Select does
         * not support anonymous access. For more information about permissions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/using-with-s3-actions.html">Specifying
         * Permissions in a Policy</a> in the <i>Amazon S3 User Guide</i>.</p> <p/> <p>
         * <i>Object Data Formats</i> </p> <p>You can use Amazon S3 Select to query objects
         * that have the following format properties:</p> <ul> <li> <p> <i>CSV, JSON, and
         * Parquet</i> - Objects must be in CSV, JSON, or Parquet format.</p> </li> <li>
         * <p> <i>UTF-8</i> - UTF-8 is the only encoding type Amazon S3 Select
         * supports.</p> </li> <li> <p> <i>GZIP or BZIP2</i> - CSV and JSON files can be
         * compressed using GZIP or BZIP2. GZIP and BZIP2 are the only compression formats
         * that Amazon S3 Select supports for CSV and JSON files. Amazon S3 Select supports
         * columnar compression for Parquet using GZIP or Snappy. Amazon S3 Select does not
         * support whole-object compression for Parquet objects.</p> </li> <li> <p>
         * <i>Server-side encryption</i> - Amazon S3 Select supports querying objects that
         * are protected with server-side encryption.</p> <p>For objects that are encrypted
         * with customer-provided encryption keys (SSE-C), you must use HTTPS, and you must
         * use the headers that are documented in the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>.
         * For more information about SSE-C, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Server-Side
         * Encryption (Using Customer-Provided Encryption Keys)</a> in the <i>Amazon S3
         * User Guide</i>.</p> <p>For objects that are encrypted with Amazon S3 managed
         * encryption keys (SSE-S3) and Amazon Web Services KMS keys (SSE-KMS), server-side
         * encryption is handled transparently, so you don't need to specify anything. For
         * more information about server-side encryption, including SSE-S3 and SSE-KMS, see
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html">Protecting
         * Data Using Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i>.</p>
         * </li> </ul> <p> <b>Working with the Response Body</b> </p> <p>Given the response
         * size is unknown, Amazon S3 Select streams the response as a series of messages
         * and includes a <code>Transfer-Encoding</code> header with <code>chunked</code>
         * as its value in the response. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTSelectObjectAppendix.html">Appendix:
         * SelectObjectContent Response</a>.</p> <p/> <p> <b>GetObject Support</b> </p>
         * <p>The <code>SelectObjectContent</code> action does not support the following
         * <code>GetObject</code> functionality. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>.</p>
         * <ul> <li> <p> <code>Range</code>: Although you can specify a scan range for an
         * Amazon S3 Select request (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_SelectObjectContent.html#AmazonS3-SelectObjectContent-request-ScanRange">SelectObjectContentRequest
         * - ScanRange</a> in the request parameters), you cannot specify the range of
         * bytes of an object to return. </p> </li> <li> <p>GLACIER, DEEP_ARCHIVE and
         * REDUCED_REDUNDANCY storage classes: You cannot specify the GLACIER,
         * DEEP_ARCHIVE, or <code>REDUCED_REDUNDANCY</code> storage classes. For more
         * information, about storage classes see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingMetadata.html#storage-class-intro">Storage
         * Classes</a> in the <i>Amazon S3 User Guide</i>.</p> </li> </ul> <p/> <p>
         * <b>Special Errors</b> </p> <p>For a list of special errors for this operation,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/ErrorResponses.html#SelectObjectContentErrorCodeList">List
         * of SELECT Object Content Error Codes</a> </p> <p class="title"> <b>Related
         * Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketLifecycleConfiguration.html">GetBucketLifecycleConfiguration</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketLifecycleConfiguration.html">PutBucketLifecycleConfiguration</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/SelectObjectContent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SelectObjectContentAsync(Model::SelectObjectContentRequest& request, const SelectObjectContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads a part in a multipart upload.</p>  <p>In this operation, you
         * provide part data in your request. However, you have an option to specify your
         * existing Amazon S3 object as a data source for the part you are uploading. To
         * upload a part from an existing object, you use the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a>
         * operation. </p>  <p>You must initiate a multipart upload (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>)
         * before you can upload any part. In response to your initiate request, Amazon S3
         * returns an upload ID, a unique identifier, that you must include in your upload
         * part request.</p> <p>Part numbers can be any number from 1 to 10,000, inclusive.
         * A part number uniquely identifies a part and also defines its position within
         * the object being created. If you upload a new part using the same part number
         * that was used with a previous part, the previously uploaded part is overwritten.
         * Each part must be at least 5 MB in size, except the last part. There is no size
         * limit on the last part of your multipart upload.</p> <p>To ensure that data is
         * not corrupted when traversing the network, specify the <code>Content-MD5</code>
         * header in the upload part request. Amazon S3 checks the part data against the
         * provided MD5 value. If they do not match, Amazon S3 returns an error. </p> <p>If
         * the upload request is signed with Signature Version 4, then Amazon Web Services
         * S3 uses the <code>x-amz-content-sha256</code> header as a checksum instead of
         * <code>Content-MD5</code>. For more information see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-auth-using-authorization-header.html">Authenticating
         * Requests: Using the Authorization Header (Amazon Web Services Signature Version
         * 4)</a>. </p> <p> <b>Note:</b> After you initiate multipart upload and upload one
         * or more parts, you must either complete or abort multipart upload in order to
         * stop getting charged for storage of the uploaded parts. Only after you either
         * complete or abort multipart upload, Amazon S3 frees up the parts storage and
         * stops charging you for the parts storage.</p> <p>For more information on
         * multipart uploads, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart
         * Upload Overview</a> in the <i>Amazon S3 User Guide </i>.</p> <p>For information
         * on the permissions required to use the multipart upload API, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a> in the <i>Amazon S3 User Guide</i>.</p> <p>You can
         * optionally request server-side encryption where Amazon S3 encrypts your data as
         * it writes it to disks in its data centers and decrypts it for you when you
         * access it. You have the option of providing your own encryption key, or you can
         * use the Amazon Web Services managed encryption keys. If you choose to provide
         * your own encryption key, the request headers you provide in the request must
         * match the headers you used in the request to initiate the upload by using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>.
         * For more information, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingServerSideEncryption.html">Using
         * Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p>Server-side encryption is supported by the S3 Multipart Upload actions.
         * Unless you are using a customer-provided encryption key, you don't need to
         * specify the encryption parameters in each UploadPart request. Instead, you only
         * need to specify the server-side encryption parameters in the initial Initiate
         * Multipart request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>.</p>
         * <p>If you requested server-side encryption using a customer-provided encryption
         * key in your initiate multipart upload request, you must provide identical
         * encryption information in each part upload using the following headers.</p> <ul>
         * <li> <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p
         * class="title"> <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p> <i>Code:
         * NoSuchUpload</i> </p> </li> <li> <p> <i>Cause: The specified multipart upload
         * does not exist. The upload ID might be invalid, or the multipart upload might
         * have been aborted or completed.</i> </p> </li> <li> <p> <i> HTTP Status Code:
         * 404 Not Found </i> </p> </li> <li> <p> <i>SOAP Fault Code Prefix: Client</i>
         * </p> </li> </ul> </li> </ul> <p class="title"> <b>Related Resources</b> </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/UploadPart">AWS API
         * Reference</a></p>
         */
        virtual Model::UploadPartOutcome UploadPart(const Model::UploadPartRequest& request) const;

        /**
         * <p>Uploads a part in a multipart upload.</p>  <p>In this operation, you
         * provide part data in your request. However, you have an option to specify your
         * existing Amazon S3 object as a data source for the part you are uploading. To
         * upload a part from an existing object, you use the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a>
         * operation. </p>  <p>You must initiate a multipart upload (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>)
         * before you can upload any part. In response to your initiate request, Amazon S3
         * returns an upload ID, a unique identifier, that you must include in your upload
         * part request.</p> <p>Part numbers can be any number from 1 to 10,000, inclusive.
         * A part number uniquely identifies a part and also defines its position within
         * the object being created. If you upload a new part using the same part number
         * that was used with a previous part, the previously uploaded part is overwritten.
         * Each part must be at least 5 MB in size, except the last part. There is no size
         * limit on the last part of your multipart upload.</p> <p>To ensure that data is
         * not corrupted when traversing the network, specify the <code>Content-MD5</code>
         * header in the upload part request. Amazon S3 checks the part data against the
         * provided MD5 value. If they do not match, Amazon S3 returns an error. </p> <p>If
         * the upload request is signed with Signature Version 4, then Amazon Web Services
         * S3 uses the <code>x-amz-content-sha256</code> header as a checksum instead of
         * <code>Content-MD5</code>. For more information see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-auth-using-authorization-header.html">Authenticating
         * Requests: Using the Authorization Header (Amazon Web Services Signature Version
         * 4)</a>. </p> <p> <b>Note:</b> After you initiate multipart upload and upload one
         * or more parts, you must either complete or abort multipart upload in order to
         * stop getting charged for storage of the uploaded parts. Only after you either
         * complete or abort multipart upload, Amazon S3 frees up the parts storage and
         * stops charging you for the parts storage.</p> <p>For more information on
         * multipart uploads, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart
         * Upload Overview</a> in the <i>Amazon S3 User Guide </i>.</p> <p>For information
         * on the permissions required to use the multipart upload API, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a> in the <i>Amazon S3 User Guide</i>.</p> <p>You can
         * optionally request server-side encryption where Amazon S3 encrypts your data as
         * it writes it to disks in its data centers and decrypts it for you when you
         * access it. You have the option of providing your own encryption key, or you can
         * use the Amazon Web Services managed encryption keys. If you choose to provide
         * your own encryption key, the request headers you provide in the request must
         * match the headers you used in the request to initiate the upload by using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>.
         * For more information, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingServerSideEncryption.html">Using
         * Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p>Server-side encryption is supported by the S3 Multipart Upload actions.
         * Unless you are using a customer-provided encryption key, you don't need to
         * specify the encryption parameters in each UploadPart request. Instead, you only
         * need to specify the server-side encryption parameters in the initial Initiate
         * Multipart request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>.</p>
         * <p>If you requested server-side encryption using a customer-provided encryption
         * key in your initiate multipart upload request, you must provide identical
         * encryption information in each part upload using the following headers.</p> <ul>
         * <li> <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p
         * class="title"> <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p> <i>Code:
         * NoSuchUpload</i> </p> </li> <li> <p> <i>Cause: The specified multipart upload
         * does not exist. The upload ID might be invalid, or the multipart upload might
         * have been aborted or completed.</i> </p> </li> <li> <p> <i> HTTP Status Code:
         * 404 Not Found </i> </p> </li> <li> <p> <i>SOAP Fault Code Prefix: Client</i>
         * </p> </li> </ul> </li> </ul> <p class="title"> <b>Related Resources</b> </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/UploadPart">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadPartOutcomeCallable UploadPartCallable(const Model::UploadPartRequest& request) const;

        /**
         * <p>Uploads a part in a multipart upload.</p>  <p>In this operation, you
         * provide part data in your request. However, you have an option to specify your
         * existing Amazon S3 object as a data source for the part you are uploading. To
         * upload a part from an existing object, you use the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPartCopy.html">UploadPartCopy</a>
         * operation. </p>  <p>You must initiate a multipart upload (see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>)
         * before you can upload any part. In response to your initiate request, Amazon S3
         * returns an upload ID, a unique identifier, that you must include in your upload
         * part request.</p> <p>Part numbers can be any number from 1 to 10,000, inclusive.
         * A part number uniquely identifies a part and also defines its position within
         * the object being created. If you upload a new part using the same part number
         * that was used with a previous part, the previously uploaded part is overwritten.
         * Each part must be at least 5 MB in size, except the last part. There is no size
         * limit on the last part of your multipart upload.</p> <p>To ensure that data is
         * not corrupted when traversing the network, specify the <code>Content-MD5</code>
         * header in the upload part request. Amazon S3 checks the part data against the
         * provided MD5 value. If they do not match, Amazon S3 returns an error. </p> <p>If
         * the upload request is signed with Signature Version 4, then Amazon Web Services
         * S3 uses the <code>x-amz-content-sha256</code> header as a checksum instead of
         * <code>Content-MD5</code>. For more information see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-auth-using-authorization-header.html">Authenticating
         * Requests: Using the Authorization Header (Amazon Web Services Signature Version
         * 4)</a>. </p> <p> <b>Note:</b> After you initiate multipart upload and upload one
         * or more parts, you must either complete or abort multipart upload in order to
         * stop getting charged for storage of the uploaded parts. Only after you either
         * complete or abort multipart upload, Amazon S3 frees up the parts storage and
         * stops charging you for the parts storage.</p> <p>For more information on
         * multipart uploads, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart
         * Upload Overview</a> in the <i>Amazon S3 User Guide </i>.</p> <p>For information
         * on the permissions required to use the multipart upload API, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a> in the <i>Amazon S3 User Guide</i>.</p> <p>You can
         * optionally request server-side encryption where Amazon S3 encrypts your data as
         * it writes it to disks in its data centers and decrypts it for you when you
         * access it. You have the option of providing your own encryption key, or you can
         * use the Amazon Web Services managed encryption keys. If you choose to provide
         * your own encryption key, the request headers you provide in the request must
         * match the headers you used in the request to initiate the upload by using <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>.
         * For more information, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingServerSideEncryption.html">Using
         * Server-Side Encryption</a> in the <i>Amazon S3 User Guide</i>.</p>
         * <p>Server-side encryption is supported by the S3 Multipart Upload actions.
         * Unless you are using a customer-provided encryption key, you don't need to
         * specify the encryption parameters in each UploadPart request. Instead, you only
         * need to specify the server-side encryption parameters in the initial Initiate
         * Multipart request. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>.</p>
         * <p>If you requested server-side encryption using a customer-provided encryption
         * key in your initiate multipart upload request, you must provide identical
         * encryption information in each part upload using the following headers.</p> <ul>
         * <li> <p>x-amz-server-side-encryption-customer-algorithm</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key</p> </li> <li>
         * <p>x-amz-server-side-encryption-customer-key-MD5</p> </li> </ul> <p
         * class="title"> <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p> <i>Code:
         * NoSuchUpload</i> </p> </li> <li> <p> <i>Cause: The specified multipart upload
         * does not exist. The upload ID might be invalid, or the multipart upload might
         * have been aborted or completed.</i> </p> </li> <li> <p> <i> HTTP Status Code:
         * 404 Not Found </i> </p> </li> <li> <p> <i>SOAP Fault Code Prefix: Client</i>
         * </p> </li> </ul> </li> </ul> <p class="title"> <b>Related Resources</b> </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/UploadPart">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadPartAsync(const Model::UploadPartRequest& request, const UploadPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads a part by copying data from an existing object as data source. You
         * specify the data source by adding the request header
         * <code>x-amz-copy-source</code> in your request and a byte range by adding the
         * request header <code>x-amz-copy-source-range</code> in your request. </p> <p>The
         * minimum allowable part size for a multipart upload is 5 MB. For more information
         * about multipart upload limits, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/qfacts.html">Quick
         * Facts</a> in the <i>Amazon S3 User Guide</i>. </p>  <p>Instead of using an
         * existing object as part data, you might use the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * action and provide data in your request.</p>  <p>You must initiate a
         * multipart upload before you can upload any part. In response to your initiate
         * request. Amazon S3 returns a unique identifier, the upload ID, that you must
         * include in your upload part request.</p> <p>For more information about using the
         * <code>UploadPartCopy</code> operation, see the following:</p> <ul> <li> <p>For
         * conceptual information about multipart uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a> in the <i>Amazon S3 User Guide</i>.</p> </li>
         * <li> <p>For information about permissions required to use the multipart upload
         * API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a> in the <i>Amazon S3 User Guide</i>.</p> </li> <li>
         * <p>For information about copying objects using a single atomic action vs. the
         * multipart upload, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ObjectOperations.html">Operations
         * on Objects</a> in the <i>Amazon S3 User Guide</i>.</p> </li> <li> <p>For
         * information about using server-side encryption with customer-provided encryption
         * keys with the UploadPartCopy operation, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>.</p>
         * </li> </ul> <p>Note the following additional considerations about the request
         * headers <code>x-amz-copy-source-if-match</code>,
         * <code>x-amz-copy-source-if-none-match</code>,
         * <code>x-amz-copy-source-if-unmodified-since</code>, and
         * <code>x-amz-copy-source-if-modified-since</code>:</p> <p> </p> <ul> <li> <p>
         * <b>Consideration 1</b> - If both of the <code>x-amz-copy-source-if-match</code>
         * and <code>x-amz-copy-source-if-unmodified-since</code> headers are present in
         * the request as follows:</p> <p> <code>x-amz-copy-source-if-match</code>
         * condition evaluates to <code>true</code>, and;</p> <p>
         * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
         * <code>false</code>;</p> <p>Amazon S3 returns <code>200 OK</code> and copies the
         * data. </p> </li> <li> <p> <b>Consideration 2</b> - If both of the
         * <code>x-amz-copy-source-if-none-match</code> and
         * <code>x-amz-copy-source-if-modified-since</code> headers are present in the
         * request as follows:</p> <p> <code>x-amz-copy-source-if-none-match</code>
         * condition evaluates to <code>false</code>, and;</p> <p>
         * <code>x-amz-copy-source-if-modified-since</code> condition evaluates to
         * <code>true</code>;</p> <p>Amazon S3 returns <code>412 Precondition Failed</code>
         * response code. </p> </li> </ul> <p> <b>Versioning</b> </p> <p>If your bucket has
         * versioning enabled, you could have multiple versions of the same object. By
         * default, <code>x-amz-copy-source</code> identifies the current version of the
         * object to copy. If the current version is a delete marker and you don't specify
         * a versionId in the <code>x-amz-copy-source</code>, Amazon S3 returns a 404
         * error, because the object does not exist. If you specify versionId in the
         * <code>x-amz-copy-source</code> and the versionId is a delete marker, Amazon S3
         * returns an HTTP 400 error, because you are not allowed to specify a delete
         * marker as a version for the <code>x-amz-copy-source</code>. </p> <p>You can
         * optionally specify a specific version of the source object to copy by adding the
         * <code>versionId</code> subresource as shown in the following example:</p> <p>
         * <code>x-amz-copy-source: /bucket/object?versionId=version id</code> </p> <p
         * class="title"> <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p> <i>Code:
         * NoSuchUpload</i> </p> </li> <li> <p> <i>Cause: The specified multipart upload
         * does not exist. The upload ID might be invalid, or the multipart upload might
         * have been aborted or completed.</i> </p> </li> <li> <p> <i>HTTP Status Code: 404
         * Not Found</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code:
         * InvalidRequest</i> </p> </li> <li> <p> <i>Cause: The specified copy source is
         * not supported as a byte-range copy source.</i> </p> </li> <li> <p> <i>HTTP
         * Status Code: 400 Bad Request</i> </p> </li> </ul> </li> </ul> <p class="title">
         * <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/UploadPartCopy">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadPartCopyOutcome UploadPartCopy(const Model::UploadPartCopyRequest& request) const;

        /**
         * <p>Uploads a part by copying data from an existing object as data source. You
         * specify the data source by adding the request header
         * <code>x-amz-copy-source</code> in your request and a byte range by adding the
         * request header <code>x-amz-copy-source-range</code> in your request. </p> <p>The
         * minimum allowable part size for a multipart upload is 5 MB. For more information
         * about multipart upload limits, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/qfacts.html">Quick
         * Facts</a> in the <i>Amazon S3 User Guide</i>. </p>  <p>Instead of using an
         * existing object as part data, you might use the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * action and provide data in your request.</p>  <p>You must initiate a
         * multipart upload before you can upload any part. In response to your initiate
         * request. Amazon S3 returns a unique identifier, the upload ID, that you must
         * include in your upload part request.</p> <p>For more information about using the
         * <code>UploadPartCopy</code> operation, see the following:</p> <ul> <li> <p>For
         * conceptual information about multipart uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a> in the <i>Amazon S3 User Guide</i>.</p> </li>
         * <li> <p>For information about permissions required to use the multipart upload
         * API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a> in the <i>Amazon S3 User Guide</i>.</p> </li> <li>
         * <p>For information about copying objects using a single atomic action vs. the
         * multipart upload, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ObjectOperations.html">Operations
         * on Objects</a> in the <i>Amazon S3 User Guide</i>.</p> </li> <li> <p>For
         * information about using server-side encryption with customer-provided encryption
         * keys with the UploadPartCopy operation, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>.</p>
         * </li> </ul> <p>Note the following additional considerations about the request
         * headers <code>x-amz-copy-source-if-match</code>,
         * <code>x-amz-copy-source-if-none-match</code>,
         * <code>x-amz-copy-source-if-unmodified-since</code>, and
         * <code>x-amz-copy-source-if-modified-since</code>:</p> <p> </p> <ul> <li> <p>
         * <b>Consideration 1</b> - If both of the <code>x-amz-copy-source-if-match</code>
         * and <code>x-amz-copy-source-if-unmodified-since</code> headers are present in
         * the request as follows:</p> <p> <code>x-amz-copy-source-if-match</code>
         * condition evaluates to <code>true</code>, and;</p> <p>
         * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
         * <code>false</code>;</p> <p>Amazon S3 returns <code>200 OK</code> and copies the
         * data. </p> </li> <li> <p> <b>Consideration 2</b> - If both of the
         * <code>x-amz-copy-source-if-none-match</code> and
         * <code>x-amz-copy-source-if-modified-since</code> headers are present in the
         * request as follows:</p> <p> <code>x-amz-copy-source-if-none-match</code>
         * condition evaluates to <code>false</code>, and;</p> <p>
         * <code>x-amz-copy-source-if-modified-since</code> condition evaluates to
         * <code>true</code>;</p> <p>Amazon S3 returns <code>412 Precondition Failed</code>
         * response code. </p> </li> </ul> <p> <b>Versioning</b> </p> <p>If your bucket has
         * versioning enabled, you could have multiple versions of the same object. By
         * default, <code>x-amz-copy-source</code> identifies the current version of the
         * object to copy. If the current version is a delete marker and you don't specify
         * a versionId in the <code>x-amz-copy-source</code>, Amazon S3 returns a 404
         * error, because the object does not exist. If you specify versionId in the
         * <code>x-amz-copy-source</code> and the versionId is a delete marker, Amazon S3
         * returns an HTTP 400 error, because you are not allowed to specify a delete
         * marker as a version for the <code>x-amz-copy-source</code>. </p> <p>You can
         * optionally specify a specific version of the source object to copy by adding the
         * <code>versionId</code> subresource as shown in the following example:</p> <p>
         * <code>x-amz-copy-source: /bucket/object?versionId=version id</code> </p> <p
         * class="title"> <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p> <i>Code:
         * NoSuchUpload</i> </p> </li> <li> <p> <i>Cause: The specified multipart upload
         * does not exist. The upload ID might be invalid, or the multipart upload might
         * have been aborted or completed.</i> </p> </li> <li> <p> <i>HTTP Status Code: 404
         * Not Found</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code:
         * InvalidRequest</i> </p> </li> <li> <p> <i>Cause: The specified copy source is
         * not supported as a byte-range copy source.</i> </p> </li> <li> <p> <i>HTTP
         * Status Code: 400 Bad Request</i> </p> </li> </ul> </li> </ul> <p class="title">
         * <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/UploadPartCopy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadPartCopyOutcomeCallable UploadPartCopyCallable(const Model::UploadPartCopyRequest& request) const;

        /**
         * <p>Uploads a part by copying data from an existing object as data source. You
         * specify the data source by adding the request header
         * <code>x-amz-copy-source</code> in your request and a byte range by adding the
         * request header <code>x-amz-copy-source-range</code> in your request. </p> <p>The
         * minimum allowable part size for a multipart upload is 5 MB. For more information
         * about multipart upload limits, go to <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/qfacts.html">Quick
         * Facts</a> in the <i>Amazon S3 User Guide</i>. </p>  <p>Instead of using an
         * existing object as part data, you might use the <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * action and provide data in your request.</p>  <p>You must initiate a
         * multipart upload before you can upload any part. In response to your initiate
         * request. Amazon S3 returns a unique identifier, the upload ID, that you must
         * include in your upload part request.</p> <p>For more information about using the
         * <code>UploadPartCopy</code> operation, see the following:</p> <ul> <li> <p>For
         * conceptual information about multipart uploads, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/uploadobjusingmpu.html">Uploading
         * Objects Using Multipart Upload</a> in the <i>Amazon S3 User Guide</i>.</p> </li>
         * <li> <p>For information about permissions required to use the multipart upload
         * API, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuAndPermissions.html">Multipart
         * Upload and Permissions</a> in the <i>Amazon S3 User Guide</i>.</p> </li> <li>
         * <p>For information about copying objects using a single atomic action vs. the
         * multipart upload, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ObjectOperations.html">Operations
         * on Objects</a> in the <i>Amazon S3 User Guide</i>.</p> </li> <li> <p>For
         * information about using server-side encryption with customer-provided encryption
         * keys with the UploadPartCopy operation, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CopyObject.html">CopyObject</a>
         * and <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>.</p>
         * </li> </ul> <p>Note the following additional considerations about the request
         * headers <code>x-amz-copy-source-if-match</code>,
         * <code>x-amz-copy-source-if-none-match</code>,
         * <code>x-amz-copy-source-if-unmodified-since</code>, and
         * <code>x-amz-copy-source-if-modified-since</code>:</p> <p> </p> <ul> <li> <p>
         * <b>Consideration 1</b> - If both of the <code>x-amz-copy-source-if-match</code>
         * and <code>x-amz-copy-source-if-unmodified-since</code> headers are present in
         * the request as follows:</p> <p> <code>x-amz-copy-source-if-match</code>
         * condition evaluates to <code>true</code>, and;</p> <p>
         * <code>x-amz-copy-source-if-unmodified-since</code> condition evaluates to
         * <code>false</code>;</p> <p>Amazon S3 returns <code>200 OK</code> and copies the
         * data. </p> </li> <li> <p> <b>Consideration 2</b> - If both of the
         * <code>x-amz-copy-source-if-none-match</code> and
         * <code>x-amz-copy-source-if-modified-since</code> headers are present in the
         * request as follows:</p> <p> <code>x-amz-copy-source-if-none-match</code>
         * condition evaluates to <code>false</code>, and;</p> <p>
         * <code>x-amz-copy-source-if-modified-since</code> condition evaluates to
         * <code>true</code>;</p> <p>Amazon S3 returns <code>412 Precondition Failed</code>
         * response code. </p> </li> </ul> <p> <b>Versioning</b> </p> <p>If your bucket has
         * versioning enabled, you could have multiple versions of the same object. By
         * default, <code>x-amz-copy-source</code> identifies the current version of the
         * object to copy. If the current version is a delete marker and you don't specify
         * a versionId in the <code>x-amz-copy-source</code>, Amazon S3 returns a 404
         * error, because the object does not exist. If you specify versionId in the
         * <code>x-amz-copy-source</code> and the versionId is a delete marker, Amazon S3
         * returns an HTTP 400 error, because you are not allowed to specify a delete
         * marker as a version for the <code>x-amz-copy-source</code>. </p> <p>You can
         * optionally specify a specific version of the source object to copy by adding the
         * <code>versionId</code> subresource as shown in the following example:</p> <p>
         * <code>x-amz-copy-source: /bucket/object?versionId=version id</code> </p> <p
         * class="title"> <b>Special Errors</b> </p> <ul> <li> <ul> <li> <p> <i>Code:
         * NoSuchUpload</i> </p> </li> <li> <p> <i>Cause: The specified multipart upload
         * does not exist. The upload ID might be invalid, or the multipart upload might
         * have been aborted or completed.</i> </p> </li> <li> <p> <i>HTTP Status Code: 404
         * Not Found</i> </p> </li> </ul> </li> <li> <ul> <li> <p> <i>Code:
         * InvalidRequest</i> </p> </li> <li> <p> <i>Cause: The specified copy source is
         * not supported as a byte-range copy source.</i> </p> </li> <li> <p> <i>HTTP
         * Status Code: 400 Bad Request</i> </p> </li> </ul> </li> </ul> <p class="title">
         * <b>Related Resources</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CreateMultipartUpload.html">CreateMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_UploadPart.html">UploadPart</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_CompleteMultipartUpload.html">CompleteMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_AbortMultipartUpload.html">AbortMultipartUpload</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListParts.html">ListParts</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_ListMultipartUploads.html">ListMultipartUploads</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/UploadPartCopy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadPartCopyAsync(const Model::UploadPartCopyRequest& request, const UploadPartCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Passes transformed objects to a <code>GetObject</code> operation when using
         * Object Lambda access points. For information about Object Lambda access points,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/transforming-objects.html">Transforming
         * objects with Object Lambda access points</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p>This operation supports metadata that can be returned by <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>,
         * in addition to <code>RequestRoute</code>, <code>RequestToken</code>,
         * <code>StatusCode</code>, <code>ErrorCode</code>, and <code>ErrorMessage</code>.
         * The <code>GetObject</code> response metadata is supported so that the
         * <code>WriteGetObjectResponse</code> caller, typically an Lambda function, can
         * provide the same metadata when it internally invokes <code>GetObject</code>.
         * When <code>WriteGetObjectResponse</code> is called by a customer-owned Lambda
         * function, the metadata returned to the end user <code>GetObject</code> call
         * might differ from what Amazon S3 would normally return.</p> <p>You can include
         * any number of metadata headers. When including a metadata header, it should be
         * prefaced with <code>x-amz-meta</code>. For example,
         * <code>x-amz-meta-my-custom-header: MyCustomValue</code>. The primary use case
         * for this is to forward <code>GetObject</code> metadata.</p> <p>Amazon Web
         * Services provides some prebuilt Lambda functions that you can use with S3 Object
         * Lambda to detect and redact personally identifiable information (PII) and
         * decompress S3 objects. These Lambda functions are available in the Amazon Web
         * Services Serverless Application Repository, and can be selected through the
         * Amazon Web Services Management Console when you create your Object Lambda access
         * point.</p> <p>Example 1: PII Access Control - This Lambda function uses Amazon
         * Comprehend, a natural language processing (NLP) service using machine learning
         * to find insights and relationships in text. It automatically detects personally
         * identifiable information (PII) such as names, addresses, dates, credit card
         * numbers, and social security numbers from documents in your Amazon S3 bucket.
         * </p> <p>Example 2: PII Redaction - This Lambda function uses Amazon Comprehend,
         * a natural language processing (NLP) service using machine learning to find
         * insights and relationships in text. It automatically redacts personally
         * identifiable information (PII) such as names, addresses, dates, credit card
         * numbers, and social security numbers from documents in your Amazon S3 bucket.
         * </p> <p>Example 3: Decompression - The Lambda function
         * S3ObjectLambdaDecompression, is equipped to decompress objects stored in S3 in
         * one of six compressed file formats including bzip2, gzip, snappy, zlib,
         * zstandard and ZIP. </p> <p>For information on how to view and use these
         * functions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/olap-examples.html">Using
         * Amazon Web Services built Lambda functions</a> in the <i>Amazon S3 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/WriteGetObjectResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::WriteGetObjectResponseOutcome WriteGetObjectResponse(const Model::WriteGetObjectResponseRequest& request) const;

        /**
         * <p>Passes transformed objects to a <code>GetObject</code> operation when using
         * Object Lambda access points. For information about Object Lambda access points,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/transforming-objects.html">Transforming
         * objects with Object Lambda access points</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p>This operation supports metadata that can be returned by <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>,
         * in addition to <code>RequestRoute</code>, <code>RequestToken</code>,
         * <code>StatusCode</code>, <code>ErrorCode</code>, and <code>ErrorMessage</code>.
         * The <code>GetObject</code> response metadata is supported so that the
         * <code>WriteGetObjectResponse</code> caller, typically an Lambda function, can
         * provide the same metadata when it internally invokes <code>GetObject</code>.
         * When <code>WriteGetObjectResponse</code> is called by a customer-owned Lambda
         * function, the metadata returned to the end user <code>GetObject</code> call
         * might differ from what Amazon S3 would normally return.</p> <p>You can include
         * any number of metadata headers. When including a metadata header, it should be
         * prefaced with <code>x-amz-meta</code>. For example,
         * <code>x-amz-meta-my-custom-header: MyCustomValue</code>. The primary use case
         * for this is to forward <code>GetObject</code> metadata.</p> <p>Amazon Web
         * Services provides some prebuilt Lambda functions that you can use with S3 Object
         * Lambda to detect and redact personally identifiable information (PII) and
         * decompress S3 objects. These Lambda functions are available in the Amazon Web
         * Services Serverless Application Repository, and can be selected through the
         * Amazon Web Services Management Console when you create your Object Lambda access
         * point.</p> <p>Example 1: PII Access Control - This Lambda function uses Amazon
         * Comprehend, a natural language processing (NLP) service using machine learning
         * to find insights and relationships in text. It automatically detects personally
         * identifiable information (PII) such as names, addresses, dates, credit card
         * numbers, and social security numbers from documents in your Amazon S3 bucket.
         * </p> <p>Example 2: PII Redaction - This Lambda function uses Amazon Comprehend,
         * a natural language processing (NLP) service using machine learning to find
         * insights and relationships in text. It automatically redacts personally
         * identifiable information (PII) such as names, addresses, dates, credit card
         * numbers, and social security numbers from documents in your Amazon S3 bucket.
         * </p> <p>Example 3: Decompression - The Lambda function
         * S3ObjectLambdaDecompression, is equipped to decompress objects stored in S3 in
         * one of six compressed file formats including bzip2, gzip, snappy, zlib,
         * zstandard and ZIP. </p> <p>For information on how to view and use these
         * functions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/olap-examples.html">Using
         * Amazon Web Services built Lambda functions</a> in the <i>Amazon S3 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/WriteGetObjectResponse">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::WriteGetObjectResponseOutcomeCallable WriteGetObjectResponseCallable(const Model::WriteGetObjectResponseRequest& request) const;

        /**
         * <p>Passes transformed objects to a <code>GetObject</code> operation when using
         * Object Lambda access points. For information about Object Lambda access points,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/transforming-objects.html">Transforming
         * objects with Object Lambda access points</a> in the <i>Amazon S3 User
         * Guide</i>.</p> <p>This operation supports metadata that can be returned by <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetObject.html">GetObject</a>,
         * in addition to <code>RequestRoute</code>, <code>RequestToken</code>,
         * <code>StatusCode</code>, <code>ErrorCode</code>, and <code>ErrorMessage</code>.
         * The <code>GetObject</code> response metadata is supported so that the
         * <code>WriteGetObjectResponse</code> caller, typically an Lambda function, can
         * provide the same metadata when it internally invokes <code>GetObject</code>.
         * When <code>WriteGetObjectResponse</code> is called by a customer-owned Lambda
         * function, the metadata returned to the end user <code>GetObject</code> call
         * might differ from what Amazon S3 would normally return.</p> <p>You can include
         * any number of metadata headers. When including a metadata header, it should be
         * prefaced with <code>x-amz-meta</code>. For example,
         * <code>x-amz-meta-my-custom-header: MyCustomValue</code>. The primary use case
         * for this is to forward <code>GetObject</code> metadata.</p> <p>Amazon Web
         * Services provides some prebuilt Lambda functions that you can use with S3 Object
         * Lambda to detect and redact personally identifiable information (PII) and
         * decompress S3 objects. These Lambda functions are available in the Amazon Web
         * Services Serverless Application Repository, and can be selected through the
         * Amazon Web Services Management Console when you create your Object Lambda access
         * point.</p> <p>Example 1: PII Access Control - This Lambda function uses Amazon
         * Comprehend, a natural language processing (NLP) service using machine learning
         * to find insights and relationships in text. It automatically detects personally
         * identifiable information (PII) such as names, addresses, dates, credit card
         * numbers, and social security numbers from documents in your Amazon S3 bucket.
         * </p> <p>Example 2: PII Redaction - This Lambda function uses Amazon Comprehend,
         * a natural language processing (NLP) service using machine learning to find
         * insights and relationships in text. It automatically redacts personally
         * identifiable information (PII) such as names, addresses, dates, credit card
         * numbers, and social security numbers from documents in your Amazon S3 bucket.
         * </p> <p>Example 3: Decompression - The Lambda function
         * S3ObjectLambdaDecompression, is equipped to decompress objects stored in S3 in
         * one of six compressed file formats including bzip2, gzip, snappy, zlib,
         * zstandard and ZIP. </p> <p>For information on how to view and use these
         * functions, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/olap-examples.html">Using
         * Amazon Web Services built Lambda functions</a> in the <i>Amazon S3 User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/WriteGetObjectResponse">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void WriteGetObjectResponseAsync(const Model::WriteGetObjectResponseRequest& request, const WriteGetObjectResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        Aws::String GeneratePresignedUrl(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, long long expirationInSeconds = MAX_EXPIRATION_SECONDS);

        Aws::String GeneratePresignedUrl(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, const Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds = MAX_EXPIRATION_SECONDS);

        /**
         * Server Side Encryption Headers and Algorithm
         * Method    Algorithm    Required Headers
         * SSE-S3    AES256       x-amz-server-side-encryption:AES256
         * SSE-KMS   aws:kms      x-amz-server-side--encryption:aws:kms, x-amz-server-side-encryption-aws-kms-key-id:<kmsMasterKeyId>
         * SS3-C     AES256       x-amz-server-side-encryption-customer-algorithm:AES256, x-amz-server-side-encryption-customer-key:<base64EncodedKey>, x-amz-server-side-encryption-customer-key-MD5:<Base64EncodedMD5ofNonBase64EncodedKey>
         */
        /**
         * Generate presigned URL with Sever Side Encryption(SSE) and with S3 managed keys.
         * https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html (algo: AES256)
         */
        Aws::String GeneratePresignedUrlWithSSES3(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, long long expirationInSeconds = MAX_EXPIRATION_SECONDS);
        /**
         * Generate presigned URL with Sever Side Encryption(SSE) and with S3 managed keys.
         * https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html (algo: AES256)
         * Header: "x-amz-server-side-encryption" will be added internally, don't customize it.
         */
        Aws::String GeneratePresignedUrlWithSSES3(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, Http::HeaderValueCollection customizedHeaders, long long expirationInSeconds = MAX_EXPIRATION_SECONDS);

        /**
         * Generate presigned URL with Server Side Encryption(SSE) and with KMS master key id.
         * if kmsMasterKeyId is empty, we will end up use the default one generated by KMS for you. You can find it via AWS IAM console, it's the one aliased as "aws/s3".
         * https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html (algo: aws:kms)
         */
        Aws::String GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, const Aws::String& kmsMasterKeyId = "", long long expirationInSeconds = MAX_EXPIRATION_SECONDS);
        /**
         * Generate presigned URL with Server Side Encryption(SSE) and with KMS master key id.
         * if kmsMasterKeyId is empty, we will end up use the default one generated by KMS for you. You can find it via AWS IAM console, it's the one aliased as "aws/s3".
         * https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html (algo: aws:kms)
         * Headers: "x-amz-server-side-encryption" and "x-amz-server-side-encryption-aws-kms-key-id" will be added internally, don't customize them.
         */
        Aws::String GeneratePresignedUrlWithSSEKMS(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, Http::HeaderValueCollection customizedHeaders, const Aws::String& kmsMasterKeyId = "", long long expirationInSeconds = MAX_EXPIRATION_SECONDS);

        /**
         * Generate presigned URL with Sever Side Encryption(SSE) and with customer supplied Key.
         * https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html (algo: AES256)
         */
        Aws::String GeneratePresignedUrlWithSSEC(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, const Aws::String& base64EncodedAES256Key, long long expirationInSeconds = MAX_EXPIRATION_SECONDS);
        /**
         * Generate presigned URL with Sever Side Encryption(SSE) and with customer supplied Key.
         * https://docs.aws.amazon.com/AmazonS3/latest/dev/serv-side-encryption.html (algo: AES256)
         * Headers: "x-amz-server-side-encryption-customer-algorithm","x-amz-server-side-encryption-customer-key" and "x-amz-server-side-encryption-customer-key-MD5" will be added internally, don't customize them.
         */
        Aws::String GeneratePresignedUrlWithSSEC(const Aws::String& bucket, const Aws::String& key, Aws::Http::HttpMethod method, Http::HeaderValueCollection customizedHeaders, const Aws::String& base64EncodedAES256Key, long long expirationInSeconds = MAX_EXPIRATION_SECONDS);


        virtual bool MultipartUploadSupported() const;

        void OverrideEndpoint(const Aws::String& endpoint);


        struct CrtRequestCallbackUserData {
          const S3CrtClient *s3CrtClient;
          const void *userCallback;
          std::shared_ptr<const Aws::Client::AsyncCallerContext> userCallbackContext;
          const Aws::AmazonWebServiceRequest *originalRequest;
          std::shared_ptr<Aws::Http::HttpRequest> request;
          std::shared_ptr<Aws::Http::HttpResponse> response;
          std::shared_ptr<Aws::Crt::Http::HttpRequest> crtHttpRequest;
          aws_s3_meta_request *underlyingS3Request;
        };

        Aws::Client::XmlOutcome GenerateXmlOutcome(const std::shared_ptr<Http::HttpResponse>& response) const;
        Aws::Client::StreamOutcome GenerateStreamOutcome(const std::shared_ptr<Http::HttpResponse>& response) const;

    private:
        void init(const S3Crt::ClientConfiguration& clientConfiguration, const Aws::Auth::AWSCredentials* credentials = nullptr);

        struct CrtClientShutdownCallbackDataWrapper {
          void *data;
          std::function<void(void*)> fn;
          std::shared_ptr<Aws::Utils::Threading::Semaphore> clientShutdownSem;
        };

        static void CrtClientShutdownCallback(void *data) {
          auto *wrappedData = static_cast<CrtClientShutdownCallbackDataWrapper*>(data);
          if (wrappedData->fn)
          {
            wrappedData->fn(wrappedData->data);
          }
          wrappedData->clientShutdownSem->Release();
        }

        void InitCommonCrtRequestOption(CrtRequestCallbackUserData *userData, aws_s3_meta_request_options *options, const Aws::AmazonWebServiceRequest *requset, const Aws::Http::URI &uri, Aws::Http::HttpMethod method) const;
        void LoadS3CrtSpecificConfig(const Aws::String& profile);
        ComputeEndpointOutcome ComputeEndpointString(const Aws::String& bucket) const;
        ComputeEndpointOutcome ComputeEndpointString() const;
        ComputeEndpointOutcome ComputeEndpointStringWithServiceName(const Aws::String& serviceNameOverride = "") const;

        void AbortMultipartUploadAsyncHelper(const Model::AbortMultipartUploadRequest& request, const AbortMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CompleteMultipartUploadAsyncHelper(const Model::CompleteMultipartUploadRequest& request, const CompleteMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopyObjectAsyncHelper(const Model::CopyObjectRequest& request, const CopyObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBucketAsyncHelper(const Model::CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMultipartUploadAsyncHelper(const Model::CreateMultipartUploadRequest& request, const CreateMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketAsyncHelper(const Model::DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketAnalyticsConfigurationAsyncHelper(const Model::DeleteBucketAnalyticsConfigurationRequest& request, const DeleteBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketCorsAsyncHelper(const Model::DeleteBucketCorsRequest& request, const DeleteBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketEncryptionAsyncHelper(const Model::DeleteBucketEncryptionRequest& request, const DeleteBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketIntelligentTieringConfigurationAsyncHelper(const Model::DeleteBucketIntelligentTieringConfigurationRequest& request, const DeleteBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketInventoryConfigurationAsyncHelper(const Model::DeleteBucketInventoryConfigurationRequest& request, const DeleteBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketLifecycleAsyncHelper(const Model::DeleteBucketLifecycleRequest& request, const DeleteBucketLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketMetricsConfigurationAsyncHelper(const Model::DeleteBucketMetricsConfigurationRequest& request, const DeleteBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketOwnershipControlsAsyncHelper(const Model::DeleteBucketOwnershipControlsRequest& request, const DeleteBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketPolicyAsyncHelper(const Model::DeleteBucketPolicyRequest& request, const DeleteBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketReplicationAsyncHelper(const Model::DeleteBucketReplicationRequest& request, const DeleteBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketTaggingAsyncHelper(const Model::DeleteBucketTaggingRequest& request, const DeleteBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketWebsiteAsyncHelper(const Model::DeleteBucketWebsiteRequest& request, const DeleteBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteObjectAsyncHelper(const Model::DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteObjectTaggingAsyncHelper(const Model::DeleteObjectTaggingRequest& request, const DeleteObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteObjectsAsyncHelper(const Model::DeleteObjectsRequest& request, const DeleteObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePublicAccessBlockAsyncHelper(const Model::DeletePublicAccessBlockRequest& request, const DeletePublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketAccelerateConfigurationAsyncHelper(const Model::GetBucketAccelerateConfigurationRequest& request, const GetBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketAclAsyncHelper(const Model::GetBucketAclRequest& request, const GetBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketAnalyticsConfigurationAsyncHelper(const Model::GetBucketAnalyticsConfigurationRequest& request, const GetBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketCorsAsyncHelper(const Model::GetBucketCorsRequest& request, const GetBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketEncryptionAsyncHelper(const Model::GetBucketEncryptionRequest& request, const GetBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketIntelligentTieringConfigurationAsyncHelper(const Model::GetBucketIntelligentTieringConfigurationRequest& request, const GetBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketInventoryConfigurationAsyncHelper(const Model::GetBucketInventoryConfigurationRequest& request, const GetBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketLifecycleConfigurationAsyncHelper(const Model::GetBucketLifecycleConfigurationRequest& request, const GetBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketLocationAsyncHelper(const Model::GetBucketLocationRequest& request, const GetBucketLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketLoggingAsyncHelper(const Model::GetBucketLoggingRequest& request, const GetBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketMetricsConfigurationAsyncHelper(const Model::GetBucketMetricsConfigurationRequest& request, const GetBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketNotificationConfigurationAsyncHelper(const Model::GetBucketNotificationConfigurationRequest& request, const GetBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketOwnershipControlsAsyncHelper(const Model::GetBucketOwnershipControlsRequest& request, const GetBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketPolicyAsyncHelper(const Model::GetBucketPolicyRequest& request, const GetBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketPolicyStatusAsyncHelper(const Model::GetBucketPolicyStatusRequest& request, const GetBucketPolicyStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketReplicationAsyncHelper(const Model::GetBucketReplicationRequest& request, const GetBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketRequestPaymentAsyncHelper(const Model::GetBucketRequestPaymentRequest& request, const GetBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketTaggingAsyncHelper(const Model::GetBucketTaggingRequest& request, const GetBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketVersioningAsyncHelper(const Model::GetBucketVersioningRequest& request, const GetBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketWebsiteAsyncHelper(const Model::GetBucketWebsiteRequest& request, const GetBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectAsyncHelper(const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectAclAsyncHelper(const Model::GetObjectAclRequest& request, const GetObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectLegalHoldAsyncHelper(const Model::GetObjectLegalHoldRequest& request, const GetObjectLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectLockConfigurationAsyncHelper(const Model::GetObjectLockConfigurationRequest& request, const GetObjectLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectRetentionAsyncHelper(const Model::GetObjectRetentionRequest& request, const GetObjectRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectTaggingAsyncHelper(const Model::GetObjectTaggingRequest& request, const GetObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetObjectTorrentAsyncHelper(const Model::GetObjectTorrentRequest& request, const GetObjectTorrentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPublicAccessBlockAsyncHelper(const Model::GetPublicAccessBlockRequest& request, const GetPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void HeadBucketAsyncHelper(const Model::HeadBucketRequest& request, const HeadBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void HeadObjectAsyncHelper(const Model::HeadObjectRequest& request, const HeadObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBucketAnalyticsConfigurationsAsyncHelper(const Model::ListBucketAnalyticsConfigurationsRequest& request, const ListBucketAnalyticsConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBucketIntelligentTieringConfigurationsAsyncHelper(const Model::ListBucketIntelligentTieringConfigurationsRequest& request, const ListBucketIntelligentTieringConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBucketInventoryConfigurationsAsyncHelper(const Model::ListBucketInventoryConfigurationsRequest& request, const ListBucketInventoryConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBucketMetricsConfigurationsAsyncHelper(const Model::ListBucketMetricsConfigurationsRequest& request, const ListBucketMetricsConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBucketsAsyncHelper(const ListBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMultipartUploadsAsyncHelper(const Model::ListMultipartUploadsRequest& request, const ListMultipartUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectVersionsAsyncHelper(const Model::ListObjectVersionsRequest& request, const ListObjectVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectsAsyncHelper(const Model::ListObjectsRequest& request, const ListObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListObjectsV2AsyncHelper(const Model::ListObjectsV2Request& request, const ListObjectsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPartsAsyncHelper(const Model::ListPartsRequest& request, const ListPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketAccelerateConfigurationAsyncHelper(const Model::PutBucketAccelerateConfigurationRequest& request, const PutBucketAccelerateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketAclAsyncHelper(const Model::PutBucketAclRequest& request, const PutBucketAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketAnalyticsConfigurationAsyncHelper(const Model::PutBucketAnalyticsConfigurationRequest& request, const PutBucketAnalyticsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketCorsAsyncHelper(const Model::PutBucketCorsRequest& request, const PutBucketCorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketEncryptionAsyncHelper(const Model::PutBucketEncryptionRequest& request, const PutBucketEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketIntelligentTieringConfigurationAsyncHelper(const Model::PutBucketIntelligentTieringConfigurationRequest& request, const PutBucketIntelligentTieringConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketInventoryConfigurationAsyncHelper(const Model::PutBucketInventoryConfigurationRequest& request, const PutBucketInventoryConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketLifecycleConfigurationAsyncHelper(const Model::PutBucketLifecycleConfigurationRequest& request, const PutBucketLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketLoggingAsyncHelper(const Model::PutBucketLoggingRequest& request, const PutBucketLoggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketMetricsConfigurationAsyncHelper(const Model::PutBucketMetricsConfigurationRequest& request, const PutBucketMetricsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketNotificationConfigurationAsyncHelper(const Model::PutBucketNotificationConfigurationRequest& request, const PutBucketNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketOwnershipControlsAsyncHelper(const Model::PutBucketOwnershipControlsRequest& request, const PutBucketOwnershipControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketPolicyAsyncHelper(const Model::PutBucketPolicyRequest& request, const PutBucketPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketReplicationAsyncHelper(const Model::PutBucketReplicationRequest& request, const PutBucketReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketRequestPaymentAsyncHelper(const Model::PutBucketRequestPaymentRequest& request, const PutBucketRequestPaymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketTaggingAsyncHelper(const Model::PutBucketTaggingRequest& request, const PutBucketTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketVersioningAsyncHelper(const Model::PutBucketVersioningRequest& request, const PutBucketVersioningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBucketWebsiteAsyncHelper(const Model::PutBucketWebsiteRequest& request, const PutBucketWebsiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutObjectAsyncHelper(const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutObjectAclAsyncHelper(const Model::PutObjectAclRequest& request, const PutObjectAclResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutObjectLegalHoldAsyncHelper(const Model::PutObjectLegalHoldRequest& request, const PutObjectLegalHoldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutObjectLockConfigurationAsyncHelper(const Model::PutObjectLockConfigurationRequest& request, const PutObjectLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutObjectRetentionAsyncHelper(const Model::PutObjectRetentionRequest& request, const PutObjectRetentionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutObjectTaggingAsyncHelper(const Model::PutObjectTaggingRequest& request, const PutObjectTaggingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutPublicAccessBlockAsyncHelper(const Model::PutPublicAccessBlockRequest& request, const PutPublicAccessBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreObjectAsyncHelper(const Model::RestoreObjectRequest& request, const RestoreObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SelectObjectContentAsyncHelper(Model::SelectObjectContentRequest& request, const SelectObjectContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadPartAsyncHelper(const Model::UploadPartRequest& request, const UploadPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadPartCopyAsyncHelper(const Model::UploadPartCopyRequest& request, const UploadPartCopyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void WriteGetObjectResponseAsyncHelper(const Model::WriteGetObjectResponseRequest& request, const WriteGetObjectResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_baseUri;
        Aws::String m_scheme;
        bool m_enableHostPrefixInjection;
        Aws::String m_configScheme;
        std::shared_ptr<Utils::Threading::Executor> m_executor;
        struct aws_s3_client* m_s3CrtClient;
        struct aws_signing_config_aws m_s3CrtSigningConfig;
        struct CrtClientShutdownCallbackDataWrapper m_wrappedData;
        std::shared_ptr<Aws::Utils::Threading::Semaphore> m_clientShutdownSem;
        Aws::String m_userAgent;
        bool m_useVirtualAddressing;
        bool m_useDualStack;
        bool m_useArnRegion;
        bool m_disableMultiRegionAccessPoints;
        bool m_useCustomEndpoint;
        Aws::S3Crt::US_EAST_1_REGIONAL_ENDPOINT_OPTION m_USEast1RegionalEndpointOption;
    };

  } // namespace S3Crt
} // namespace Aws
