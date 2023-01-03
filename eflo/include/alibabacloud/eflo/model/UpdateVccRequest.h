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

#ifndef ALIBABACLOUD_EFLO_MODEL_UPDATEVCCREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_UPDATEVCCREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT UpdateVccRequest : public RpcServiceRequest {
public:
	UpdateVccRequest();
	~UpdateVccRequest();
	int getBandwidth() const;
	void setBandwidth(int bandwidth);
	std::string getOrderId() const;
	void setOrderId(const std::string &orderId);
	std::string getVccName() const;
	void setVccName(const std::string &vccName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getVccId() const;
	void setVccId(const std::string &vccId);

private:
	int bandwidth_;
	std::string orderId_;
	std::string vccName_;
	std::string regionId_;
	std::string vccId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_UPDATEVCCREQUEST_H_
