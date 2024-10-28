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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEDATAFLOWREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEDATAFLOWREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateDataFlowRequest : public RpcServiceRequest {
public:
	struct AutoRefreshs {
		std::string refreshPath;
	};
	CreateDataFlowRequest();
	~CreateDataFlowRequest();
	std::string getAutoRefreshPolicy() const;
	void setAutoRefreshPolicy(const std::string &autoRefreshPolicy);
	std::string getFsetId() const;
	void setFsetId(const std::string &fsetId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::vector<AutoRefreshs> getAutoRefreshs() const;
	void setAutoRefreshs(const std::vector<AutoRefreshs> &autoRefreshs);
	std::string getSourceSecurityType() const;
	void setSourceSecurityType(const std::string &sourceSecurityType);
	std::string getSourceStorage() const;
	void setSourceStorage(const std::string &sourceStorage);
	long getThroughput() const;
	void setThroughput(long throughput);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	long getAutoRefreshInterval() const;
	void setAutoRefreshInterval(long autoRefreshInterval);
	std::string getSourceStoragePath() const;
	void setSourceStoragePath(const std::string &sourceStoragePath);
	std::string getFileSystemPath() const;
	void setFileSystemPath(const std::string &fileSystemPath);

private:
	std::string autoRefreshPolicy_;
	std::string fsetId_;
	std::string clientToken_;
	std::string description_;
	std::vector<AutoRefreshs> autoRefreshs_;
	std::string sourceSecurityType_;
	std::string sourceStorage_;
	long throughput_;
	std::string fileSystemId_;
	bool dryRun_;
	long autoRefreshInterval_;
	std::string sourceStoragePath_;
	std::string fileSystemPath_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEDATAFLOWREQUEST_H_
