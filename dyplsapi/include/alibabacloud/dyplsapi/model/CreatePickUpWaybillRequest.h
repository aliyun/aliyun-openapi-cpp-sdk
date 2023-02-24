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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLREQUEST_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLREQUEST_H_

#include <alibabacloud/dyplsapi/DyplsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dyplsapi {
namespace Model {
class ALIBABACLOUD_DYPLSAPI_EXPORT CreatePickUpWaybillRequest : public RpcServiceRequest {
public:
	struct SendAddress {
		std::string provinceName;
		std::string cityName;
		std::string areaName;
		std::string townName;
		std::string addressDetail;
	};
	struct ConsigneeAddress {
		std::string provinceName;
		std::string cityName;
		std::string areaName;
		std::string townName;
		std::string addressDetail;
	};
	struct GoodsInfos {
		std::string name;
		std::string weight;
		std::string quantity;
	};
	CreatePickUpWaybillRequest();
	~CreatePickUpWaybillRequest();
	std::string getConsigneeName() const;
	void setConsigneeName(const std::string &consigneeName);
	std::string getOrderChannels() const;
	void setOrderChannels(const std::string &orderChannels);
	SendAddress getSendAddress() const;
	void setSendAddress(const SendAddress &sendAddress);
	std::string getOuterOrderCode() const;
	void setOuterOrderCode(const std::string &outerOrderCode);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getAppointGotStartTime() const;
	void setAppointGotStartTime(const std::string &appointGotStartTime);
	std::string getAppointGotEndTime() const;
	void setAppointGotEndTime(const std::string &appointGotEndTime);
	std::string getCpCode() const;
	void setCpCode(const std::string &cpCode);
	std::string getSendMobile() const;
	void setSendMobile(const std::string &sendMobile);
	std::string getConsigneeMobile() const;
	void setConsigneeMobile(const std::string &consigneeMobile);
	std::string getContentType() const;
	void setContentType(const std::string &contentType);
	ConsigneeAddress getConsigneeAddress() const;
	void setConsigneeAddress(const ConsigneeAddress &consigneeAddress);
	std::string getSendPhone() const;
	void setSendPhone(const std::string &sendPhone);
	std::vector<GoodsInfos> getGoodsInfos() const;
	void setGoodsInfos(const std::vector<GoodsInfos> &goodsInfos);
	int getBizType() const;
	void setBizType(int bizType);
	std::string getSendName() const;
	void setSendName(const std::string &sendName);
	std::string getConsigneePhone() const;
	void setConsigneePhone(const std::string &consigneePhone);

private:
	std::string consigneeName_;
	std::string orderChannels_;
	SendAddress sendAddress_;
	std::string outerOrderCode_;
	std::string remark_;
	std::string appointGotStartTime_;
	std::string appointGotEndTime_;
	std::string cpCode_;
	std::string sendMobile_;
	std::string consigneeMobile_;
	std::string contentType_;
	ConsigneeAddress consigneeAddress_;
	std::string sendPhone_;
	std::vector<GoodsInfos> goodsInfos_;
	int bizType_;
	std::string sendName_;
	std::string consigneePhone_;
};
} // namespace Model
} // namespace Dyplsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_CREATEPICKUPWAYBILLREQUEST_H_
