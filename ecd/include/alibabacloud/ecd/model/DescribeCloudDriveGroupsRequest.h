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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBECLOUDDRIVEGROUPSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBECLOUDDRIVEGROUPSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeCloudDriveGroupsRequest : public RpcServiceRequest {
public:
	DescribeCloudDriveGroupsRequest();
	~DescribeCloudDriveGroupsRequest();
	std::string getParentGroupId() const;
	void setParentGroupId(const std::string &parentGroupId);
	std::string getGroupType() const;
	void setGroupType(const std::string &groupType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDriveType() const;
	void setDriveType(const std::string &driveType);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getDirectoryId() const;
	void setDirectoryId(const std::string &directoryId);
	std::vector<std::string> getGroupId() const;
	void setGroupId(const std::vector<std::string> &groupId);
	std::string getDirectoryName() const;
	void setDirectoryName(const std::string &directoryName);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	std::string getCdsId() const;
	void setCdsId(const std::string &cdsId);
	std::string getDriveStatus() const;
	void setDriveStatus(const std::string &driveStatus);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string parentGroupId_;
	std::string groupType_;
	std::string regionId_;
	std::string driveType_;
	std::string nextToken_;
	std::string directoryId_;
	std::vector<std::string> groupId_;
	std::string directoryName_;
	std::string groupName_;
	std::string cdsId_;
	std::string driveStatus_;
	int maxResults_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBECLOUDDRIVEGROUPSREQUEST_H_
