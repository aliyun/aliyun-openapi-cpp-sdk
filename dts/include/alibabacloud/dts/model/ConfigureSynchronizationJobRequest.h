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

#ifndef ALIBABACLOUD_DTS_MODEL_CONFIGURESYNCHRONIZATIONJOBREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CONFIGURESYNCHRONIZATIONJOBREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT ConfigureSynchronizationJobRequest : public RpcServiceRequest {
public:
	ConfigureSynchronizationJobRequest();
	~ConfigureSynchronizationJobRequest();
	std::string getSourceEndpointInstanceId() const;
	void setSourceEndpointInstanceId(const std::string &sourceEndpointInstanceId);
	std::string getCheckpoint() const;
	void setCheckpoint(const std::string &checkpoint);
	std::string getDestinationEndpointInstanceId() const;
	void setDestinationEndpointInstanceId(const std::string &destinationEndpointInstanceId);
	std::string getSourceEndpointIP() const;
	void setSourceEndpointIP(const std::string &sourceEndpointIP);
	std::string getSynchronizationObjects() const;
	void setSynchronizationObjects(const std::string &synchronizationObjects);
	std::string getDestinationEndpointPassword() const;
	void setDestinationEndpointPassword(const std::string &destinationEndpointPassword);
	bool getDataInitialization() const;
	void setDataInitialization(bool dataInitialization);
	bool getStructureInitialization() const;
	void setStructureInitialization(bool structureInitialization);
	bool getPartitionKeyModifyTime_Minute() const;
	void setPartitionKeyModifyTime_Minute(bool partitionKeyModifyTime_Minute);
	bool getPartitionKeyModifyTime_Day() const;
	void setPartitionKeyModifyTime_Day(bool partitionKeyModifyTime_Day);
	std::string getSourceEndpointInstanceType() const;
	void setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType);
	std::string getSynchronizationJobId() const;
	void setSynchronizationJobId(const std::string &synchronizationJobId);
	std::string getSynchronizationJobName() const;
	void setSynchronizationJobName(const std::string &synchronizationJobName);
	std::string getSourceEndpointUserName() const;
	void setSourceEndpointUserName(const std::string &sourceEndpointUserName);
	bool getPartitionKeyModifyTime_Month() const;
	void setPartitionKeyModifyTime_Month(bool partitionKeyModifyTime_Month);
	std::string getSourceEndpointPort() const;
	void setSourceEndpointPort(const std::string &sourceEndpointPort);
	std::string getSourceEndpointOwnerID() const;
	void setSourceEndpointOwnerID(const std::string &sourceEndpointOwnerID);
	std::string getDestinationEndpointUserName() const;
	void setDestinationEndpointUserName(const std::string &destinationEndpointUserName);
	std::string getDestinationEndpointPort() const;
	void setDestinationEndpointPort(const std::string &destinationEndpointPort);
	bool getPartitionKeyModifyTime_Year() const;
	void setPartitionKeyModifyTime_Year(bool partitionKeyModifyTime_Year);
	std::string getSourceEndpointRole() const;
	void setSourceEndpointRole(const std::string &sourceEndpointRole);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	bool getPartitionKeyModifyTime_Hour() const;
	void setPartitionKeyModifyTime_Hour(bool partitionKeyModifyTime_Hour);
	std::string getSourceEndpointPassword() const;
	void setSourceEndpointPassword(const std::string &sourceEndpointPassword);
	std::string getMigrationReserved() const;
	void setMigrationReserved(const std::string &migrationReserved);
	std::string getDestinationEndpointIP() const;
	void setDestinationEndpointIP(const std::string &destinationEndpointIP);
	std::string getDestinationEndpointInstanceType() const;
	void setDestinationEndpointInstanceType(const std::string &destinationEndpointInstanceType);
	std::string getSynchronizationDirection() const;
	void setSynchronizationDirection(const std::string &synchronizationDirection);

private:
	std::string sourceEndpointInstanceId_;
	std::string checkpoint_;
	std::string destinationEndpointInstanceId_;
	std::string sourceEndpointIP_;
	std::string synchronizationObjects_;
	std::string destinationEndpointPassword_;
	bool dataInitialization_;
	bool structureInitialization_;
	bool partitionKeyModifyTime_Minute_;
	bool partitionKeyModifyTime_Day_;
	std::string sourceEndpointInstanceType_;
	std::string synchronizationJobId_;
	std::string synchronizationJobName_;
	std::string sourceEndpointUserName_;
	bool partitionKeyModifyTime_Month_;
	std::string sourceEndpointPort_;
	std::string sourceEndpointOwnerID_;
	std::string destinationEndpointUserName_;
	std::string destinationEndpointPort_;
	bool partitionKeyModifyTime_Year_;
	std::string sourceEndpointRole_;
	std::string ownerId_;
	bool partitionKeyModifyTime_Hour_;
	std::string sourceEndpointPassword_;
	std::string migrationReserved_;
	std::string destinationEndpointIP_;
	std::string destinationEndpointInstanceType_;
	std::string synchronizationDirection_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_CONFIGURESYNCHRONIZATIONJOBREQUEST_H_
