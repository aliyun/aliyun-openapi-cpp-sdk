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

#ifndef ALIBABACLOUD_ADB_MODEL_MODIFYELASTICPLANREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_MODIFYELASTICPLANREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT ModifyElasticPlanRequest : public RpcServiceRequest {
public:
	ModifyElasticPlanRequest();
	~ModifyElasticPlanRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getElasticPlanType() const;
	void setElasticPlanType(const std::string &elasticPlanType);
	std::string getElasticPlanTimeStart() const;
	void setElasticPlanTimeStart(const std::string &elasticPlanTimeStart);
	std::string getElasticPlanEndDay() const;
	void setElasticPlanEndDay(const std::string &elasticPlanEndDay);
	std::string getElasticPlanWeeklyRepeat() const;
	void setElasticPlanWeeklyRepeat(const std::string &elasticPlanWeeklyRepeat);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getElasticPlanWorkerSpec() const;
	void setElasticPlanWorkerSpec(const std::string &elasticPlanWorkerSpec);
	bool getElasticPlanEnable() const;
	void setElasticPlanEnable(bool elasticPlanEnable);
	std::string getElasticPlanTimeEnd() const;
	void setElasticPlanTimeEnd(const std::string &elasticPlanTimeEnd);
	std::string getElasticPlanStartDay() const;
	void setElasticPlanStartDay(const std::string &elasticPlanStartDay);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getElasticPlanName() const;
	void setElasticPlanName(const std::string &elasticPlanName);
	std::string getResourcePoolName() const;
	void setResourcePoolName(const std::string &resourcePoolName);
	int getElasticPlanNodeNum() const;
	void setElasticPlanNodeNum(int elasticPlanNodeNum);

private:
	long resourceOwnerId_;
	std::string elasticPlanType_;
	std::string elasticPlanTimeStart_;
	std::string elasticPlanEndDay_;
	std::string elasticPlanWeeklyRepeat_;
	std::string accessKeyId_;
	std::string elasticPlanWorkerSpec_;
	bool elasticPlanEnable_;
	std::string elasticPlanTimeEnd_;
	std::string elasticPlanStartDay_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	long ownerId_;
	std::string elasticPlanName_;
	std::string resourcePoolName_;
	int elasticPlanNodeNum_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_MODIFYELASTICPLANREQUEST_H_
