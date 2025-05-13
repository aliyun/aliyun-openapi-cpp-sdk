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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_UPDATEJOBSCRIPTREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_UPDATEJOBSCRIPTREQUEST_H_

#include <alibabacloud/schedulerx2/Schedulerx2Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Schedulerx2 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX2_EXPORT UpdateJobScriptRequest : public RpcServiceRequest {
public:
	UpdateJobScriptRequest();
	~UpdateJobScriptRequest();
	std::string getNamespaceSource() const;
	void setNamespaceSource(const std::string &namespaceSource);
	long getJobId() const;
	void setJobId(long jobId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getScriptContent() const;
	void setScriptContent(const std::string &scriptContent);
	std::string getVersionDescription() const;
	void setVersionDescription(const std::string &versionDescription);

private:
	std::string namespaceSource_;
	long jobId_;
	std::string regionId_;
	std::string groupId_;
	std::string _namespace_;
	std::string scriptContent_;
	std::string versionDescription_;
};
} // namespace Model
} // namespace Schedulerx2
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_UPDATEJOBSCRIPTREQUEST_H_
