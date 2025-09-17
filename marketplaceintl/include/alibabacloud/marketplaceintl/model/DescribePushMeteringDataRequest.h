/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_MARKETPLACEINTL_MODEL_DESCRIBEPUSHMETERINGDATAREQUEST_H_
#define ALIBABACLOUD_MARKETPLACEINTL_MODEL_DESCRIBEPUSHMETERINGDATAREQUEST_H_

#include <alibabacloud/marketplaceintl/MarketplaceIntlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace MarketplaceIntl {
namespace Model {
class ALIBABACLOUD_MARKETPLACEINTL_EXPORT DescribePushMeteringDataRequest : public RpcServiceRequest {
public:
	DescribePushMeteringDataRequest();
	~DescribePushMeteringDataRequest();
	std::string getPushOrderBizId() const;
	void setPushOrderBizId(const std::string &pushOrderBizId);

private:
	std::string pushOrderBizId_;
};
} // namespace Model
} // namespace MarketplaceIntl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MARKETPLACEINTL_MODEL_DESCRIBEPUSHMETERINGDATAREQUEST_H_
