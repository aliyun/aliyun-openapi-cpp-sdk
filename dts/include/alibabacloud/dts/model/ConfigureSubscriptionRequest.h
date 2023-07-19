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

#ifndef ALIBABACLOUD_DTS_MODEL_CONFIGURESUBSCRIPTIONREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CONFIGURESUBSCRIPTIONREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT ConfigureSubscriptionRequest : public RpcServiceRequest {
public:
	ConfigureSubscriptionRequest();
	~ConfigureSubscriptionRequest();
	std::string getCheckpoint() const;
	void setCheckpoint(const std::string &checkpoint);
	std::string getSubscriptionInstanceVSwitchId() const;
	void setSubscriptionInstanceVSwitchId(const std::string &subscriptionInstanceVSwitchId);
	std::string getSourceEndpointUserName() const;
	void setSourceEndpointUserName(const std::string &sourceEndpointUserName);
	std::string getDelayPhone() const;
	void setDelayPhone(const std::string &delayPhone);
	std::string getDtsBisLabel() const;
	void setDtsBisLabel(const std::string &dtsBisLabel);
	std::string getSourceEndpointIP() const;
	void setSourceEndpointIP(const std::string &sourceEndpointIP);
	std::string getErrorPhone() const;
	void setErrorPhone(const std::string &errorPhone);
	std::string getDtsJobId() const;
	void setDtsJobId(const std::string &dtsJobId);
	std::string getDbList() const;
	void setDbList(const std::string &dbList);
	std::string getSubscriptionInstanceNetworkType() const;
	void setSubscriptionInstanceNetworkType(const std::string &subscriptionInstanceNetworkType);
	std::string getSourceEndpointPassword() const;
	void setSourceEndpointPassword(const std::string &sourceEndpointPassword);
	std::string getSubscriptionInstanceVPCId() const;
	void setSubscriptionInstanceVPCId(const std::string &subscriptionInstanceVPCId);
	long getDelayRuleTime() const;
	void setDelayRuleTime(long delayRuleTime);
	std::string getSourceEndpointInstanceType() const;
	void setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType);
	std::string getDtsJobName() const;
	void setDtsJobName(const std::string &dtsJobName);
	std::string getDtsInstanceId() const;
	void setDtsInstanceId(const std::string &dtsInstanceId);
	std::string getSourceEndpointRegion() const;
	void setSourceEndpointRegion(const std::string &sourceEndpointRegion);
	bool getDelayNotice() const;
	void setDelayNotice(bool delayNotice);
	std::string getSourceEndpointInstanceID() const;
	void setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID);
	std::string getSourceEndpointOwnerID() const;
	void setSourceEndpointOwnerID(const std::string &sourceEndpointOwnerID);
	std::string getDedicatedClusterId() const;
	void setDedicatedClusterId(const std::string &dedicatedClusterId);
	bool getSubscriptionDataTypeDML() const;
	void setSubscriptionDataTypeDML(bool subscriptionDataTypeDML);
	std::string getSourceEndpointDatabaseName() const;
	void setSourceEndpointDatabaseName(const std::string &sourceEndpointDatabaseName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getReserve() const;
	void setReserve(const std::string &reserve);
	bool getSubscriptionDataTypeDDL() const;
	void setSubscriptionDataTypeDDL(bool subscriptionDataTypeDDL);
	std::string getSourceEndpointPort() const;
	void setSourceEndpointPort(const std::string &sourceEndpointPort);
	std::string getSourceEndpointOracleSID() const;
	void setSourceEndpointOracleSID(const std::string &sourceEndpointOracleSID);
	bool getErrorNotice() const;
	void setErrorNotice(bool errorNotice);
	std::string getSourceEndpointRole() const;
	void setSourceEndpointRole(const std::string &sourceEndpointRole);
	std::string getSourceEndpointEngineName() const;
	void setSourceEndpointEngineName(const std::string &sourceEndpointEngineName);

private:
	std::string checkpoint_;
	std::string subscriptionInstanceVSwitchId_;
	std::string sourceEndpointUserName_;
	std::string delayPhone_;
	std::string dtsBisLabel_;
	std::string sourceEndpointIP_;
	std::string errorPhone_;
	std::string dtsJobId_;
	std::string dbList_;
	std::string subscriptionInstanceNetworkType_;
	std::string sourceEndpointPassword_;
	std::string subscriptionInstanceVPCId_;
	long delayRuleTime_;
	std::string sourceEndpointInstanceType_;
	std::string dtsJobName_;
	std::string dtsInstanceId_;
	std::string sourceEndpointRegion_;
	bool delayNotice_;
	std::string sourceEndpointInstanceID_;
	std::string sourceEndpointOwnerID_;
	std::string dedicatedClusterId_;
	bool subscriptionDataTypeDML_;
	std::string sourceEndpointDatabaseName_;
	std::string regionId_;
	std::string reserve_;
	bool subscriptionDataTypeDDL_;
	std::string sourceEndpointPort_;
	std::string sourceEndpointOracleSID_;
	bool errorNotice_;
	std::string sourceEndpointRole_;
	std::string sourceEndpointEngineName_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_CONFIGURESUBSCRIPTIONREQUEST_H_
