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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEHISTORYEVENTSSTATREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEHISTORYEVENTSSTATREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeHistoryEventsStatRequest : public RpcServiceRequest {
public:
	DescribeHistoryEventsStatRequest();
	~DescribeHistoryEventsStatRequest();
	std::string getToStartTime() const;
	void setToStartTime(const std::string &toStartTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getFromStartTime() const;
	void setFromStartTime(const std::string &fromStartTime);
	std::string getArchiveStatus() const;
	void setArchiveStatus(const std::string &archiveStatus);

private:
	std::string toStartTime_;
	std::string accessKeyId_;
	std::string securityToken_;
	std::string regionId_;
	std::string fromStartTime_;
	std::string archiveStatus_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEHISTORYEVENTSSTATREQUEST_H_
