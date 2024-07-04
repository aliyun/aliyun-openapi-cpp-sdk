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

#ifndef ALIBABACLOUD_NIS_MODEL_CREATEANDANALYZENETWORKPATHREQUEST_H_
#define ALIBABACLOUD_NIS_MODEL_CREATEANDANALYZENETWORKPATHREQUEST_H_

#include <alibabacloud/nis/NisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nis {
namespace Model {
class ALIBABACLOUD_NIS_EXPORT CreateAndAnalyzeNetworkPathRequest : public RpcServiceRequest {
public:
	CreateAndAnalyzeNetworkPathRequest();
	~CreateAndAnalyzeNetworkPathRequest();
	std::string getTargetId() const;
	void setTargetId(const std::string &targetId);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getTargetIpAddress() const;
	void setTargetIpAddress(const std::string &targetIpAddress);
	int getSourcePort() const;
	void setSourcePort(int sourcePort);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getSourceAliUid() const;
	void setSourceAliUid(long sourceAliUid);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getAuditParam() const;
	void setAuditParam(const std::string &auditParam);
	int getTargetPort() const;
	void setTargetPort(int targetPort);
	std::string getSourceId() const;
	void setSourceId(const std::string &sourceId);
	std::string getSourceIpAddress() const;
	void setSourceIpAddress(const std::string &sourceIpAddress);
	bool getUseMultiAccount() const;
	void setUseMultiAccount(bool useMultiAccount);
	long getTargetAliUid() const;
	void setTargetAliUid(long targetAliUid);

private:
	std::string targetId_;
	std::string targetType_;
	std::string targetIpAddress_;
	int sourcePort_;
	std::string protocol_;
	std::string regionId_;
	long sourceAliUid_;
	std::string sourceType_;
	std::string auditParam_;
	int targetPort_;
	std::string sourceId_;
	std::string sourceIpAddress_;
	bool useMultiAccount_;
	long targetAliUid_;
};
} // namespace Model
} // namespace Nis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NIS_MODEL_CREATEANDANALYZENETWORKPATHREQUEST_H_
