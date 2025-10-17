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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBLOGFILESREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBLOGFILESREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeDBLogFilesRequest : public RpcServiceRequest {
public:
	DescribeDBLogFilesRequest();
	~DescribeDBLogFilesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDBNodeId() const;
	void setDBNodeId(const std::string &dBNodeId);
	std::string getSimulateListId() const;
	void setSimulateListId(const std::string &simulateListId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getLogType() const;
	void setLogType(const std::string &logType);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getSwitchId() const;
	void setSwitchId(const std::string &switchId);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDescribeSimulateSwitchMode() const;
	void setDescribeSimulateSwitchMode(const std::string &describeSimulateSwitchMode);
	std::string getSimulateStatusList() const;
	void setSimulateStatusList(const std::string &simulateStatusList);
	std::string getSimulateModeList() const;
	void setSimulateModeList(const std::string &simulateModeList);

private:
	long resourceOwnerId_;
	std::string dBNodeId_;
	std::string simulateListId_;
	std::string startTime_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string logType_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	std::string switchId_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	std::string describeSimulateSwitchMode_;
	std::string simulateStatusList_;
	std::string simulateModeList_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBLOGFILESREQUEST_H_
