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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEINVOCATIONSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEINVOCATIONSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeInvocationsRequest : public RpcServiceRequest {
public:
	DescribeInvocationsRequest();
	~DescribeInvocationsRequest();
	std::string getInvokeStatus() const;
	void setInvokeStatus(const std::string &invokeStatus);
	std::vector<std::string> getDesktopIds() const;
	void setDesktopIds(const std::vector<std::string> &desktopIds);
	bool getIncludeOutput() const;
	void setIncludeOutput(bool includeOutput);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getContentEncoding() const;
	void setContentEncoding(const std::string &contentEncoding);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);
	std::string getDesktopId() const;
	void setDesktopId(const std::string &desktopId);
	std::string getInvokeId() const;
	void setInvokeId(const std::string &invokeId);
	std::string getCommandType() const;
	void setCommandType(const std::string &commandType);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::string invokeStatus_;
	std::vector<std::string> desktopIds_;
	bool includeOutput_;
	std::string regionId_;
	std::string nextToken_;
	std::string contentEncoding_;
	std::string endUserId_;
	std::string desktopId_;
	std::string invokeId_;
	std::string commandType_;
	int maxResults_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEINVOCATIONSREQUEST_H_
