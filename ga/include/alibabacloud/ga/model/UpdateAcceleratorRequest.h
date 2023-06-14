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

#ifndef ALIBABACLOUD_GA_MODEL_UPDATEACCELERATORREQUEST_H_
#define ALIBABACLOUD_GA_MODEL_UPDATEACCELERATORREQUEST_H_

#include <alibabacloud/ga/GaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ga {
namespace Model {
class ALIBABACLOUD_GA_EXPORT UpdateAcceleratorRequest : public RpcServiceRequest {
public:
	UpdateAcceleratorRequest();
	~UpdateAcceleratorRequest();
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getPromotionOptionNo() const;
	void setPromotionOptionNo(const std::string &promotionOptionNo);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getSpec() const;
	void setSpec(const std::string &spec);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceleratorId() const;
	void setAcceleratorId(const std::string &acceleratorId);

private:
	bool autoPay_;
	std::string promotionOptionNo_;
	std::string clientToken_;
	std::string description_;
	bool autoUseCoupon_;
	std::string spec_;
	std::string regionId_;
	std::string name_;
	std::string acceleratorId_;
};
} // namespace Model
} // namespace Ga
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GA_MODEL_UPDATEACCELERATORREQUEST_H_
