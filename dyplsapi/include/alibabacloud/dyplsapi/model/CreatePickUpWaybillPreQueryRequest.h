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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLPREQUERYREQUEST_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLPREQUERYREQUEST_H_

#include <alibabacloud/dyplsapi/DyplsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dyplsapi {
namespace Model {
class ALIBABACLOUD_DYPLSAPI_EXPORT CreatePickUpWaybillPreQueryRequest : public RpcServiceRequest {
public:
	struct ConsigneeInfo {
		std::string name;
		std::string mobile;
		struct AddressInfo {
			std::string provinceName;
			std::string cityName;
			std::string areaName;
			std::string townName;
			std::string addressDetail;
		};
		AddressInfo addressInfo;
	};
	struct SenderInfo {
		std::string name;
		std::string mobile;
		struct AddressInfo {
			std::string provinceName;
			std::string cityName;
			std::string areaName;
			std::string townName;
			std::string addressDetail;
		};
		AddressInfo addressInfo;
	};
	CreatePickUpWaybillPreQueryRequest();
	~CreatePickUpWaybillPreQueryRequest();
	std::string getPreWeight() const;
	void setPreWeight(const std::string &preWeight);
	std::string getOrderChannels() const;
	void setOrderChannels(const std::string &orderChannels);
	std::string getOuterOrderCode() const;
	void setOuterOrderCode(const std::string &outerOrderCode);
	ConsigneeInfo getConsigneeInfo() const;
	void setConsigneeInfo(const ConsigneeInfo &consigneeInfo);
	std::string getCpCode() const;
	void setCpCode(const std::string &cpCode);
	std::string getContentType() const;
	void setContentType(const std::string &contentType);
	SenderInfo getSenderInfo() const;
	void setSenderInfo(const SenderInfo &senderInfo);

private:
	std::string preWeight_;
	std::string orderChannels_;
	std::string outerOrderCode_;
	ConsigneeInfo consigneeInfo_;
	std::string cpCode_;
	std::string contentType_;
	SenderInfo senderInfo_;
};
} // namespace Model
} // namespace Dyplsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLPREQUERYREQUEST_H_
