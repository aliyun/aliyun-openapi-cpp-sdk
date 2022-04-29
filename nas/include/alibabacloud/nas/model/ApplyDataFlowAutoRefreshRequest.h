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

#ifndef ALIBABACLOUD_NAS_MODEL_APPLYDATAFLOWAUTOREFRESHREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_APPLYDATAFLOWAUTOREFRESHREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT ApplyDataFlowAutoRefreshRequest : public RpcServiceRequest {
public:
	struct AutoRefreshs {
		std::string refreshPath;
	};
	ApplyDataFlowAutoRefreshRequest();
	~ApplyDataFlowAutoRefreshRequest();
	std::string getAutoRefreshPolicy() const;
	void setAutoRefreshPolicy(const std::string &autoRefreshPolicy);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<AutoRefreshs> getAutoRefreshs() const;
	void setAutoRefreshs(const std::vector<AutoRefreshs> &autoRefreshs);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getDataFlowId() const;
	void setDataFlowId(const std::string &dataFlowId);
	long getAutoRefreshInterval() const;
	void setAutoRefreshInterval(long autoRefreshInterval);

private:
	std::string autoRefreshPolicy_;
	std::string clientToken_;
	std::vector<AutoRefreshs> autoRefreshs_;
	std::string fileSystemId_;
	bool dryRun_;
	std::string dataFlowId_;
	long autoRefreshInterval_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_APPLYDATAFLOWAUTOREFRESHREQUEST_H_
