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

#ifndef ALIBABACLOUD_NAS_MODEL_CANCELDATAFLOWSUBTASKREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CANCELDATAFLOWSUBTASKREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CancelDataFlowSubTaskRequest : public RpcServiceRequest {
public:
	CancelDataFlowSubTaskRequest();
	~CancelDataFlowSubTaskRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDataFlowTaskId() const;
	void setDataFlowTaskId(const std::string &dataFlowTaskId);
	std::string getDataFlowSubTaskId() const;
	void setDataFlowSubTaskId(const std::string &dataFlowSubTaskId);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getDataFlowId() const;
	void setDataFlowId(const std::string &dataFlowId);

private:
	std::string clientToken_;
	std::string dataFlowTaskId_;
	std::string dataFlowSubTaskId_;
	std::string fileSystemId_;
	bool dryRun_;
	std::string dataFlowId_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CANCELDATAFLOWSUBTASKREQUEST_H_
