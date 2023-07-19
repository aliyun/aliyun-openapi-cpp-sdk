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

#ifndef ALIBABACLOUD_DTS_MODEL_CONFIGUREDTSJOBREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CONFIGUREDTSJOBREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT ConfigureDtsJobRequest : public RpcServiceRequest {
public:
	ConfigureDtsJobRequest();
	~ConfigureDtsJobRequest();
	std::string getCheckpoint() const;
	void setCheckpoint(const std::string &checkpoint);
	std::string getSourceEndpointUserName() const;
	void setSourceEndpointUserName(const std::string &sourceEndpointUserName);
	std::string getDestinationEndpointOwnerID() const;
	void setDestinationEndpointOwnerID(const std::string &destinationEndpointOwnerID);
	std::string getDelayPhone() const;
	void setDelayPhone(const std::string &delayPhone);
	std::string getDtsBisLabel() const;
	void setDtsBisLabel(const std::string &dtsBisLabel);
	std::string getSourceEndpointIP() const;
	void setSourceEndpointIP(const std::string &sourceEndpointIP);
	std::string getErrorPhone() const;
	void setErrorPhone(const std::string &errorPhone);
	std::string getDestinationEndpointUserName() const;
	void setDestinationEndpointUserName(const std::string &destinationEndpointUserName);
	std::string getDtsJobId() const;
	void setDtsJobId(const std::string &dtsJobId);
	std::string getDestinationEndpointRole() const;
	void setDestinationEndpointRole(const std::string &destinationEndpointRole);
	std::string getDbList() const;
	void setDbList(const std::string &dbList);
	std::string getDestinationEndpointOracleSID() const;
	void setDestinationEndpointOracleSID(const std::string &destinationEndpointOracleSID);
	std::string getDestinationEndpointPort() const;
	void setDestinationEndpointPort(const std::string &destinationEndpointPort);
	std::string getSourceEndpointPassword() const;
	void setSourceEndpointPassword(const std::string &sourceEndpointPassword);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getJobType() const;
	void setJobType(const std::string &jobType);
	long getDelayRuleTime() const;
	void setDelayRuleTime(long delayRuleTime);
	bool getDisasterRecoveryJob() const;
	void setDisasterRecoveryJob(bool disasterRecoveryJob);
	std::string getDestinationEndpointIP() const;
	void setDestinationEndpointIP(const std::string &destinationEndpointIP);
	std::string getSourceEndpointInstanceType() const;
	void setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType);
	std::string getDtsJobName() const;
	void setDtsJobName(const std::string &dtsJobName);
	std::string getDtsInstanceId() const;
	void setDtsInstanceId(const std::string &dtsInstanceId);
	std::string getSynchronizationDirection() const;
	void setSynchronizationDirection(const std::string &synchronizationDirection);
	std::string getSourceEndpointRegion() const;
	void setSourceEndpointRegion(const std::string &sourceEndpointRegion);
	bool getDelayNotice() const;
	void setDelayNotice(bool delayNotice);
	std::string getDestinationEndpointInstanceType() const;
	void setDestinationEndpointInstanceType(const std::string &destinationEndpointInstanceType);
	bool getDataInitialization() const;
	void setDataInitialization(bool dataInitialization);
	std::string getSourceEndpointInstanceID() const;
	void setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID);
	bool getStructureInitialization() const;
	void setStructureInitialization(bool structureInitialization);
	std::string getSourceEndpointOwnerID() const;
	void setSourceEndpointOwnerID(const std::string &sourceEndpointOwnerID);
	std::string getDedicatedClusterId() const;
	void setDedicatedClusterId(const std::string &dedicatedClusterId);
	std::string getSourceEndpointDatabaseName() const;
	void setSourceEndpointDatabaseName(const std::string &sourceEndpointDatabaseName);
	std::string getDestinationEndpointRegion() const;
	void setDestinationEndpointRegion(const std::string &destinationEndpointRegion);
	std::string getDataCheckConfigure() const;
	void setDataCheckConfigure(const std::string &dataCheckConfigure);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getReserve() const;
	void setReserve(const std::string &reserve);
	std::string getSourceEndpointVSwitchID() const;
	void setSourceEndpointVSwitchID(const std::string &sourceEndpointVSwitchID);
	bool getDataSynchronization() const;
	void setDataSynchronization(bool dataSynchronization);
	std::string getFileOssUrl() const;
	void setFileOssUrl(const std::string &fileOssUrl);
	std::string getDestinationEndpointEngineName() const;
	void setDestinationEndpointEngineName(const std::string &destinationEndpointEngineName);
	std::string getDestinationEndpointInstanceID() const;
	void setDestinationEndpointInstanceID(const std::string &destinationEndpointInstanceID);
	std::string getSourceEndpointPort() const;
	void setSourceEndpointPort(const std::string &sourceEndpointPort);
	std::string getSourceEndpointOracleSID() const;
	void setSourceEndpointOracleSID(const std::string &sourceEndpointOracleSID);
	std::string getDestinationEndpointDataBaseName() const;
	void setDestinationEndpointDataBaseName(const std::string &destinationEndpointDataBaseName);
	bool getErrorNotice() const;
	void setErrorNotice(bool errorNotice);
	std::string getSourceEndpointRole() const;
	void setSourceEndpointRole(const std::string &sourceEndpointRole);
	std::string getDestinationEndpointPassword() const;
	void setDestinationEndpointPassword(const std::string &destinationEndpointPassword);
	std::string getSourceEndpointEngineName() const;
	void setSourceEndpointEngineName(const std::string &sourceEndpointEngineName);

private:
	std::string checkpoint_;
	std::string sourceEndpointUserName_;
	std::string destinationEndpointOwnerID_;
	std::string delayPhone_;
	std::string dtsBisLabel_;
	std::string sourceEndpointIP_;
	std::string errorPhone_;
	std::string destinationEndpointUserName_;
	std::string dtsJobId_;
	std::string destinationEndpointRole_;
	std::string dbList_;
	std::string destinationEndpointOracleSID_;
	std::string destinationEndpointPort_;
	std::string sourceEndpointPassword_;
	std::string ownerId_;
	std::string jobType_;
	long delayRuleTime_;
	bool disasterRecoveryJob_;
	std::string destinationEndpointIP_;
	std::string sourceEndpointInstanceType_;
	std::string dtsJobName_;
	std::string dtsInstanceId_;
	std::string synchronizationDirection_;
	std::string sourceEndpointRegion_;
	bool delayNotice_;
	std::string destinationEndpointInstanceType_;
	bool dataInitialization_;
	std::string sourceEndpointInstanceID_;
	bool structureInitialization_;
	std::string sourceEndpointOwnerID_;
	std::string dedicatedClusterId_;
	std::string sourceEndpointDatabaseName_;
	std::string destinationEndpointRegion_;
	std::string dataCheckConfigure_;
	std::string regionId_;
	std::string reserve_;
	std::string sourceEndpointVSwitchID_;
	bool dataSynchronization_;
	std::string fileOssUrl_;
	std::string destinationEndpointEngineName_;
	std::string destinationEndpointInstanceID_;
	std::string sourceEndpointPort_;
	std::string sourceEndpointOracleSID_;
	std::string destinationEndpointDataBaseName_;
	bool errorNotice_;
	std::string sourceEndpointRole_;
	std::string destinationEndpointPassword_;
	std::string sourceEndpointEngineName_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_CONFIGUREDTSJOBREQUEST_H_
