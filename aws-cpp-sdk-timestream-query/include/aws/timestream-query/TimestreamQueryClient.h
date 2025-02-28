﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-query/model/CancelQueryResult.h>
#include <aws/timestream-query/model/CreateScheduledQueryResult.h>
#include <aws/timestream-query/model/DescribeEndpointsResult.h>
#include <aws/timestream-query/model/DescribeScheduledQueryResult.h>
#include <aws/timestream-query/model/ListScheduledQueriesResult.h>
#include <aws/timestream-query/model/ListTagsForResourceResult.h>
#include <aws/timestream-query/model/PrepareQueryResult.h>
#include <aws/timestream-query/model/QueryResult.h>
#include <aws/timestream-query/model/TagResourceResult.h>
#include <aws/timestream-query/model/UntagResourceResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/ConcurrentCache.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace TimestreamQuery
{

namespace Model
{
        class CancelQueryRequest;
        class CreateScheduledQueryRequest;
        class DeleteScheduledQueryRequest;
        class DescribeEndpointsRequest;
        class DescribeScheduledQueryRequest;
        class ExecuteScheduledQueryRequest;
        class ListScheduledQueriesRequest;
        class ListTagsForResourceRequest;
        class PrepareQueryRequest;
        class QueryRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateScheduledQueryRequest;

        typedef Aws::Utils::Outcome<CancelQueryResult, TimestreamQueryError> CancelQueryOutcome;
        typedef Aws::Utils::Outcome<CreateScheduledQueryResult, TimestreamQueryError> CreateScheduledQueryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamQueryError> DeleteScheduledQueryOutcome;
        typedef Aws::Utils::Outcome<DescribeEndpointsResult, TimestreamQueryError> DescribeEndpointsOutcome;
        typedef Aws::Utils::Outcome<DescribeScheduledQueryResult, TimestreamQueryError> DescribeScheduledQueryOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamQueryError> ExecuteScheduledQueryOutcome;
        typedef Aws::Utils::Outcome<ListScheduledQueriesResult, TimestreamQueryError> ListScheduledQueriesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, TimestreamQueryError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<PrepareQueryResult, TimestreamQueryError> PrepareQueryOutcome;
        typedef Aws::Utils::Outcome<QueryResult, TimestreamQueryError> QueryOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, TimestreamQueryError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, TimestreamQueryError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamQueryError> UpdateScheduledQueryOutcome;

        typedef std::future<CancelQueryOutcome> CancelQueryOutcomeCallable;
        typedef std::future<CreateScheduledQueryOutcome> CreateScheduledQueryOutcomeCallable;
        typedef std::future<DeleteScheduledQueryOutcome> DeleteScheduledQueryOutcomeCallable;
        typedef std::future<DescribeEndpointsOutcome> DescribeEndpointsOutcomeCallable;
        typedef std::future<DescribeScheduledQueryOutcome> DescribeScheduledQueryOutcomeCallable;
        typedef std::future<ExecuteScheduledQueryOutcome> ExecuteScheduledQueryOutcomeCallable;
        typedef std::future<ListScheduledQueriesOutcome> ListScheduledQueriesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PrepareQueryOutcome> PrepareQueryOutcomeCallable;
        typedef std::future<QueryOutcome> QueryOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateScheduledQueryOutcome> UpdateScheduledQueryOutcomeCallable;
} // namespace Model

  class TimestreamQueryClient;

    typedef std::function<void(const TimestreamQueryClient*, const Model::CancelQueryRequest&, const Model::CancelQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::CreateScheduledQueryRequest&, const Model::CreateScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScheduledQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::DeleteScheduledQueryRequest&, const Model::DeleteScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduledQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::DescribeEndpointsRequest&, const Model::DescribeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEndpointsResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::DescribeScheduledQueryRequest&, const Model::DescribeScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::ExecuteScheduledQueryRequest&, const Model::ExecuteScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteScheduledQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::ListScheduledQueriesRequest&, const Model::ListScheduledQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScheduledQueriesResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::PrepareQueryRequest&, const Model::PrepareQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PrepareQueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::QueryRequest&, const Model::QueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > QueryResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamQueryClient*, const Model::UpdateScheduledQueryRequest&, const Model::UpdateScheduledQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScheduledQueryResponseReceivedHandler;

  /**
   * <fullname>Amazon Timestream Query </fullname> <p/>
   */
  class AWS_TIMESTREAMQUERY_API TimestreamQueryClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamQueryClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamQueryClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamQueryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~TimestreamQueryClient();


        /**
         * <p> Cancels a query that has been issued. Cancellation is provided only if the
         * query has not completed running before the cancellation request was issued.
         * Because cancellation is an idempotent operation, subsequent cancellation
         * requests will return a <code>CancellationMessage</code>, indicating that the
         * query has already been canceled. See <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/code-samples.cancel-query.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CancelQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelQueryOutcome CancelQuery(const Model::CancelQueryRequest& request) const;

        /**
         * <p> Cancels a query that has been issued. Cancellation is provided only if the
         * query has not completed running before the cancellation request was issued.
         * Because cancellation is an idempotent operation, subsequent cancellation
         * requests will return a <code>CancellationMessage</code>, indicating that the
         * query has already been canceled. See <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/code-samples.cancel-query.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CancelQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelQueryOutcomeCallable CancelQueryCallable(const Model::CancelQueryRequest& request) const;

        /**
         * <p> Cancels a query that has been issued. Cancellation is provided only if the
         * query has not completed running before the cancellation request was issued.
         * Because cancellation is an idempotent operation, subsequent cancellation
         * requests will return a <code>CancellationMessage</code>, indicating that the
         * query has already been canceled. See <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/code-samples.cancel-query.html">code
         * sample</a> for details. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CancelQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelQueryAsync(const Model::CancelQueryRequest& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Create a scheduled query that will be run on your behalf at the configured
         * schedule. Timestream assumes the execution role provided as part of the
         * <code>ScheduledQueryExecutionRoleArn</code> parameter to run the query. You can
         * use the <code>NotificationConfiguration</code> parameter to configure
         * notification for your scheduled query operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CreateScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduledQueryOutcome CreateScheduledQuery(const Model::CreateScheduledQueryRequest& request) const;

        /**
         * <p> Create a scheduled query that will be run on your behalf at the configured
         * schedule. Timestream assumes the execution role provided as part of the
         * <code>ScheduledQueryExecutionRoleArn</code> parameter to run the query. You can
         * use the <code>NotificationConfiguration</code> parameter to configure
         * notification for your scheduled query operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CreateScheduledQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScheduledQueryOutcomeCallable CreateScheduledQueryCallable(const Model::CreateScheduledQueryRequest& request) const;

        /**
         * <p> Create a scheduled query that will be run on your behalf at the configured
         * schedule. Timestream assumes the execution role provided as part of the
         * <code>ScheduledQueryExecutionRoleArn</code> parameter to run the query. You can
         * use the <code>NotificationConfiguration</code> parameter to configure
         * notification for your scheduled query operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/CreateScheduledQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScheduledQueryAsync(const Model::CreateScheduledQueryRequest& request, const CreateScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a given scheduled query. This is an irreversible operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DeleteScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledQueryOutcome DeleteScheduledQuery(const Model::DeleteScheduledQueryRequest& request) const;

        /**
         * <p>Deletes a given scheduled query. This is an irreversible operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DeleteScheduledQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduledQueryOutcomeCallable DeleteScheduledQueryCallable(const Model::DeleteScheduledQueryRequest& request) const;

        /**
         * <p>Deletes a given scheduled query. This is an irreversible operation.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DeleteScheduledQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduledQueryAsync(const Model::DeleteScheduledQueryRequest& request, const DeleteScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because the Timestream SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>You are using <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/VPCEndpoints">VPC
         * endpoints (Amazon Web Services PrivateLink) with Timestream </a> </p> </li> <li>
         * <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how and when to
         * use and implement DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/Using.API.html#Using-API.endpoint-discovery">The
         * Endpoint Discovery Pattern</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointsOutcome DescribeEndpoints(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because the Timestream SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>You are using <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/VPCEndpoints">VPC
         * endpoints (Amazon Web Services PrivateLink) with Timestream </a> </p> </li> <li>
         * <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how and when to
         * use and implement DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/Using.API.html#Using-API.endpoint-discovery">The
         * Endpoint Discovery Pattern</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointsOutcomeCallable DescribeEndpointsCallable(const Model::DescribeEndpointsRequest& request) const;

        /**
         * <p>DescribeEndpoints returns a list of available endpoints to make Timestream
         * API calls against. This API is available through both Write and Query.</p>
         * <p>Because the Timestream SDKs are designed to transparently work with the
         * service’s architecture, including the management and mapping of the service
         * endpoints, <i>it is not recommended that you use this API unless</i>:</p> <ul>
         * <li> <p>You are using <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/VPCEndpoints">VPC
         * endpoints (Amazon Web Services PrivateLink) with Timestream </a> </p> </li> <li>
         * <p>Your application uses a programming language that does not yet have SDK
         * support</p> </li> <li> <p>You require better control over the client-side
         * implementation</p> </li> </ul> <p>For detailed information on how and when to
         * use and implement DescribeEndpoints, see <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/Using.API.html#Using-API.endpoint-discovery">The
         * Endpoint Discovery Pattern</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeEndpoints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointsAsync(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides detailed information about a scheduled query.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledQueryOutcome DescribeScheduledQuery(const Model::DescribeScheduledQueryRequest& request) const;

        /**
         * <p>Provides detailed information about a scheduled query.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeScheduledQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledQueryOutcomeCallable DescribeScheduledQueryCallable(const Model::DescribeScheduledQueryRequest& request) const;

        /**
         * <p>Provides detailed information about a scheduled query.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/DescribeScheduledQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledQueryAsync(const Model::DescribeScheduledQueryRequest& request, const DescribeScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> You can use this API to run a scheduled query manually. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ExecuteScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteScheduledQueryOutcome ExecuteScheduledQuery(const Model::ExecuteScheduledQueryRequest& request) const;

        /**
         * <p> You can use this API to run a scheduled query manually. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ExecuteScheduledQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExecuteScheduledQueryOutcomeCallable ExecuteScheduledQueryCallable(const Model::ExecuteScheduledQueryRequest& request) const;

        /**
         * <p> You can use this API to run a scheduled query manually. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ExecuteScheduledQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExecuteScheduledQueryAsync(const Model::ExecuteScheduledQueryRequest& request, const ExecuteScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all scheduled queries in the caller's Amazon account and
         * Region. <code>ListScheduledQueries</code> is eventually consistent.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ListScheduledQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScheduledQueriesOutcome ListScheduledQueries(const Model::ListScheduledQueriesRequest& request) const;

        /**
         * <p>Gets a list of all scheduled queries in the caller's Amazon account and
         * Region. <code>ListScheduledQueries</code> is eventually consistent.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ListScheduledQueries">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListScheduledQueriesOutcomeCallable ListScheduledQueriesCallable(const Model::ListScheduledQueriesRequest& request) const;

        /**
         * <p>Gets a list of all scheduled queries in the caller's Amazon account and
         * Region. <code>ListScheduledQueries</code> is eventually consistent.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ListScheduledQueries">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListScheduledQueriesAsync(const Model::ListScheduledQueriesRequest& request, const ListScheduledQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all tags on a Timestream query resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags on a Timestream query resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List all tags on a Timestream query resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A synchronous operation that allows you to submit a query with parameters to
         * be stored by Timestream for later running. Timestream only supports using this
         * operation with the <code>PrepareQueryRequest$ValidateOnly</code> set to
         * <code>true</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/PrepareQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::PrepareQueryOutcome PrepareQuery(const Model::PrepareQueryRequest& request) const;

        /**
         * <p>A synchronous operation that allows you to submit a query with parameters to
         * be stored by Timestream for later running. Timestream only supports using this
         * operation with the <code>PrepareQueryRequest$ValidateOnly</code> set to
         * <code>true</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/PrepareQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PrepareQueryOutcomeCallable PrepareQueryCallable(const Model::PrepareQueryRequest& request) const;

        /**
         * <p>A synchronous operation that allows you to submit a query with parameters to
         * be stored by Timestream for later running. Timestream only supports using this
         * operation with the <code>PrepareQueryRequest$ValidateOnly</code> set to
         * <code>true</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/PrepareQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PrepareQueryAsync(const Model::PrepareQueryRequest& request, const PrepareQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <code>Query</code> is a synchronous operation that enables you to run a
         * query against your Amazon Timestream data. <code>Query</code> will time out
         * after 60 seconds. You must update the default timeout in the SDK to support a
         * timeout of 60 seconds. See the <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/code-samples.run-query.html">code
         * sample</a> for details. </p> <p>Your query request will fail in the following
         * cases:</p> <ul> <li> <p> If you submit a <code>Query</code> request with the
         * same client token outside of the 5-minute idempotency window. </p> </li> <li>
         * <p> If you submit a <code>Query</code> request with the same client token, but
         * change other parameters, within the 5-minute idempotency window. </p> </li> <li>
         * <p> If the size of the row (including the query metadata) exceeds 1 MB, then the
         * query will fail with the following error message: </p> <p> <code>Query aborted
         * as max page response size has been exceeded by the output result row</code> </p>
         * </li> <li> <p> If the IAM principal of the query initiator and the result reader
         * are not the same and/or the query initiator and the result reader do not have
         * the same query string in the query requests, the query will fail with an
         * <code>Invalid pagination token</code> error. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Query">AWS
         * API Reference</a></p>
         */
        virtual Model::QueryOutcome Query(const Model::QueryRequest& request) const;

        /**
         * <p> <code>Query</code> is a synchronous operation that enables you to run a
         * query against your Amazon Timestream data. <code>Query</code> will time out
         * after 60 seconds. You must update the default timeout in the SDK to support a
         * timeout of 60 seconds. See the <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/code-samples.run-query.html">code
         * sample</a> for details. </p> <p>Your query request will fail in the following
         * cases:</p> <ul> <li> <p> If you submit a <code>Query</code> request with the
         * same client token outside of the 5-minute idempotency window. </p> </li> <li>
         * <p> If you submit a <code>Query</code> request with the same client token, but
         * change other parameters, within the 5-minute idempotency window. </p> </li> <li>
         * <p> If the size of the row (including the query metadata) exceeds 1 MB, then the
         * query will fail with the following error message: </p> <p> <code>Query aborted
         * as max page response size has been exceeded by the output result row</code> </p>
         * </li> <li> <p> If the IAM principal of the query initiator and the result reader
         * are not the same and/or the query initiator and the result reader do not have
         * the same query string in the query requests, the query will fail with an
         * <code>Invalid pagination token</code> error. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Query">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::QueryOutcomeCallable QueryCallable(const Model::QueryRequest& request) const;

        /**
         * <p> <code>Query</code> is a synchronous operation that enables you to run a
         * query against your Amazon Timestream data. <code>Query</code> will time out
         * after 60 seconds. You must update the default timeout in the SDK to support a
         * timeout of 60 seconds. See the <a
         * href="https://docs.aws.amazon.com/Timestream/latest/developerguide/code-samples.run-query.html">code
         * sample</a> for details. </p> <p>Your query request will fail in the following
         * cases:</p> <ul> <li> <p> If you submit a <code>Query</code> request with the
         * same client token outside of the 5-minute idempotency window. </p> </li> <li>
         * <p> If you submit a <code>Query</code> request with the same client token, but
         * change other parameters, within the 5-minute idempotency window. </p> </li> <li>
         * <p> If the size of the row (including the query metadata) exceeds 1 MB, then the
         * query will fail with the following error message: </p> <p> <code>Query aborted
         * as max page response size has been exceeded by the output result row</code> </p>
         * </li> <li> <p> If the IAM principal of the query initiator and the result reader
         * are not the same and/or the query initiator and the result reader do not have
         * the same query string in the query requests, the query will fail with an
         * <code>Invalid pagination token</code> error. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Query">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QueryAsync(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associate a set of tags with a Timestream resource. You can then activate
         * these user-defined tags so that they appear on the Billing and Cost Management
         * console for cost allocation tracking. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associate a set of tags with a Timestream resource. You can then activate
         * these user-defined tags so that they appear on the Billing and Cost Management
         * console for cost allocation tracking. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associate a set of tags with a Timestream resource. You can then activate
         * these user-defined tags so that they appear on the Billing and Cost Management
         * console for cost allocation tracking. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the association of tags from a Timestream query
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the association of tags from a Timestream query
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes the association of tags from a Timestream query
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a scheduled query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/UpdateScheduledQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScheduledQueryOutcome UpdateScheduledQuery(const Model::UpdateScheduledQueryRequest& request) const;

        /**
         * <p>Update a scheduled query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/UpdateScheduledQuery">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScheduledQueryOutcomeCallable UpdateScheduledQueryCallable(const Model::UpdateScheduledQueryRequest& request) const;

        /**
         * <p>Update a scheduled query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/UpdateScheduledQuery">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScheduledQueryAsync(const Model::UpdateScheduledQueryRequest& request, const UpdateScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
      void LoadTimestreamQuerySpecificConfig(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelQueryAsyncHelper(const Model::CancelQueryRequest& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateScheduledQueryAsyncHelper(const Model::CreateScheduledQueryRequest& request, const CreateScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScheduledQueryAsyncHelper(const Model::DeleteScheduledQueryRequest& request, const DeleteScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEndpointsAsyncHelper(const Model::DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScheduledQueryAsyncHelper(const Model::DescribeScheduledQueryRequest& request, const DescribeScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExecuteScheduledQueryAsyncHelper(const Model::ExecuteScheduledQueryRequest& request, const ExecuteScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListScheduledQueriesAsyncHelper(const Model::ListScheduledQueriesRequest& request, const ListScheduledQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PrepareQueryAsyncHelper(const Model::PrepareQueryRequest& request, const PrepareQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void QueryAsyncHelper(const Model::QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateScheduledQueryAsyncHelper(const Model::UpdateScheduledQueryRequest& request, const UpdateScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      mutable Aws::Utils::ConcurrentCache<Aws::String, Aws::String> m_endpointsCache;
      bool m_enableEndpointDiscovery;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace TimestreamQuery
} // namespace Aws
