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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTEROPERATELOGSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTEROPERATELOGSREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT DescribeClusterOperateLogsRequest : public RpcServiceRequest {
public:
	DescribeClusterOperateLogsRequest();
	~DescribeClusterOperateLogsRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDedicatedClusterId() const;
	void setDedicatedClusterId(const std::string &dedicatedClusterId);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccountId() const;
	void setAccountId(const std::string &accountId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDtsJobId() const;
	void setDtsJobId(const std::string &dtsJobId);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getOwnerID() const;
	void setOwnerID(const std::string &ownerID);

private:
	std::string clientToken_;
	std::string dedicatedClusterId_;
	long startTime_;
	int pageNumber_;
	std::string accountId_;
	int pageSize_;
	std::string dtsJobId_;
	long endTime_;
	std::string ownerID_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBECLUSTEROPERATELOGSREQUEST_H_
