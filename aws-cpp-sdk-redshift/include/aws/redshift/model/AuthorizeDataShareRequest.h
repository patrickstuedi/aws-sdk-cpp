﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API AuthorizeDataShareRequest : public RedshiftRequest
  {
  public:
    AuthorizeDataShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AuthorizeDataShare"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that producers are to
     * authorize sharing for.</p>
     */
    inline const Aws::String& GetDataShareArn() const{ return m_dataShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that producers are to
     * authorize sharing for.</p>
     */
    inline bool DataShareArnHasBeenSet() const { return m_dataShareArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that producers are to
     * authorize sharing for.</p>
     */
    inline void SetDataShareArn(const Aws::String& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that producers are to
     * authorize sharing for.</p>
     */
    inline void SetDataShareArn(Aws::String&& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that producers are to
     * authorize sharing for.</p>
     */
    inline void SetDataShareArn(const char* value) { m_dataShareArnHasBeenSet = true; m_dataShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that producers are to
     * authorize sharing for.</p>
     */
    inline AuthorizeDataShareRequest& WithDataShareArn(const Aws::String& value) { SetDataShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that producers are to
     * authorize sharing for.</p>
     */
    inline AuthorizeDataShareRequest& WithDataShareArn(Aws::String&& value) { SetDataShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that producers are to
     * authorize sharing for.</p>
     */
    inline AuthorizeDataShareRequest& WithDataShareArn(const char* value) { SetDataShareArn(value); return *this;}


    /**
     * <p>The identifier of the data consumer that is authorized to access the
     * datashare. This identifier is an Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetConsumerIdentifier() const{ return m_consumerIdentifier; }

    /**
     * <p>The identifier of the data consumer that is authorized to access the
     * datashare. This identifier is an Amazon Web Services account ID.</p>
     */
    inline bool ConsumerIdentifierHasBeenSet() const { return m_consumerIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the data consumer that is authorized to access the
     * datashare. This identifier is an Amazon Web Services account ID.</p>
     */
    inline void SetConsumerIdentifier(const Aws::String& value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier = value; }

    /**
     * <p>The identifier of the data consumer that is authorized to access the
     * datashare. This identifier is an Amazon Web Services account ID.</p>
     */
    inline void SetConsumerIdentifier(Aws::String&& value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier = std::move(value); }

    /**
     * <p>The identifier of the data consumer that is authorized to access the
     * datashare. This identifier is an Amazon Web Services account ID.</p>
     */
    inline void SetConsumerIdentifier(const char* value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier.assign(value); }

    /**
     * <p>The identifier of the data consumer that is authorized to access the
     * datashare. This identifier is an Amazon Web Services account ID.</p>
     */
    inline AuthorizeDataShareRequest& WithConsumerIdentifier(const Aws::String& value) { SetConsumerIdentifier(value); return *this;}

    /**
     * <p>The identifier of the data consumer that is authorized to access the
     * datashare. This identifier is an Amazon Web Services account ID.</p>
     */
    inline AuthorizeDataShareRequest& WithConsumerIdentifier(Aws::String&& value) { SetConsumerIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data consumer that is authorized to access the
     * datashare. This identifier is an Amazon Web Services account ID.</p>
     */
    inline AuthorizeDataShareRequest& WithConsumerIdentifier(const char* value) { SetConsumerIdentifier(value); return *this;}

  private:

    Aws::String m_dataShareArn;
    bool m_dataShareArnHasBeenSet;

    Aws::String m_consumerIdentifier;
    bool m_consumerIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
