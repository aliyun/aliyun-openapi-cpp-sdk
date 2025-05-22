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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyRCInstanceRequest : public RpcServiceRequest {
public:
	ModifyRCInstanceRequest();
	~ModifyRCInstanceRequest();
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getRebootTime() const;
	void setRebootTime(const std::string &rebootTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	bool getRebootWhenFinished() const;
	void setRebootWhenFinished(bool rebootWhenFinished);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getPromotionCode() const;
	void setPromotionCode(const std::string &promotionCode);

private:
	bool autoUseCoupon_;
	std::string rebootTime_;
	std::string regionId_;
	std::string instanceType_;
	std::string direction_;
	bool autoPay_;
	bool dryRun_;
	bool rebootWhenFinished_;
	std::string instanceId_;
	std::string promotionCode_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCEREQUEST_H_
