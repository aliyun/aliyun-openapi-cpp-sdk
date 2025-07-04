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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCINVOCATIONRESULTSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCINVOCATIONRESULTSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCInvocationResultsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeRCInvocationResultsRequest();
	~DescribeRCInvocationResultsRequest();
	std::string getCommandId() const;
	void setCommandId(const std::string &commandId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getContentEncoding() const;
	void setContentEncoding(const std::string &contentEncoding);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getInvokeId() const;
	void setInvokeId(const std::string &invokeId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInvokeRecordStatus() const;
	void setInvokeRecordStatus(const std::string &invokeRecordStatus);
	bool getIncludeHistory() const;
	void setIncludeHistory(bool includeHistory);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string commandId_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string nextToken_;
	std::string contentEncoding_;
	int pageSize_;
	std::vector<Tag> tag_;
	std::string invokeId_;
	std::string instanceId_;
	std::string invokeRecordStatus_;
	bool includeHistory_;
	int maxResults_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCINVOCATIONRESULTSREQUEST_H_
