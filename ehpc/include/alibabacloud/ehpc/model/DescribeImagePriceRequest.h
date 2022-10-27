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

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEPRICEREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEPRICEREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT DescribeImagePriceRequest : public RpcServiceRequest {
public:
	DescribeImagePriceRequest();
	~DescribeImagePriceRequest();
	int getPeriod() const;
	void setPeriod(int period);
	int getAmount() const;
	void setAmount(int amount);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getSkuCode() const;
	void setSkuCode(const std::string &skuCode);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPriceUnit() const;
	void setPriceUnit(const std::string &priceUnit);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	int period_;
	int amount_;
	std::string imageId_;
	std::string skuCode_;
	std::string accessKeyId_;
	std::string priceUnit_;
	std::string orderType_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEPRICEREQUEST_H_
