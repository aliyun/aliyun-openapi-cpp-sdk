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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBENETWORKRULESREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBENETWORKRULESREQUEST_H_

#include <alibabacloud/ddoscoo/DdoscooExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddoscoo {
namespace Model {
class ALIBABACLOUD_DDOSCOO_EXPORT DescribeNetworkRulesRequest : public RpcServiceRequest {
public:
	DescribeNetworkRulesRequest();
	~DescribeNetworkRulesRequest();
	bool getIsOffset() const;
	void setIsOffset(bool isOffset);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getFrontendPort() const;
	void setFrontendPort(int frontendPort);
	std::string getForwardProtocol() const;
	void setForwardProtocol(const std::string &forwardProtocol);

private:
	bool isOffset_;
	int pageNumber_;
	std::string sourceIp_;
	int pageSize_;
	std::string instanceId_;
	int frontendPort_;
	std::string forwardProtocol_;
};
} // namespace Model
} // namespace Ddoscoo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBENETWORKRULESREQUEST_H_
