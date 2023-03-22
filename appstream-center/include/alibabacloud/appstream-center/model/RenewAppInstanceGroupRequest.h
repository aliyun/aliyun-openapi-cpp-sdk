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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_RENEWAPPINSTANCEGROUPREQUEST_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_RENEWAPPINSTANCEGROUPREQUEST_H_

#include <alibabacloud/appstream-center/Appstream_centerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Appstream_center {
namespace Model {
class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT RenewAppInstanceGroupRequest : public RpcServiceRequest {
public:
	RenewAppInstanceGroupRequest();
	~RenewAppInstanceGroupRequest();
	int getPeriod() const;
	void setPeriod(int period);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getPromotionId() const;
	void setPromotionId(const std::string &promotionId);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getAppInstanceGroupId() const;
	void setAppInstanceGroupId(const std::string &appInstanceGroupId);

private:
	int period_;
	bool autoPay_;
	std::string promotionId_;
	std::string productType_;
	std::string periodUnit_;
	std::string appInstanceGroupId_;
};
} // namespace Model
} // namespace Appstream_center
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_RENEWAPPINSTANCEGROUPREQUEST_H_
