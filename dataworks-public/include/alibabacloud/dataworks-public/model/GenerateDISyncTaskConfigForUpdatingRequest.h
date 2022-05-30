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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GENERATEDISYNCTASKCONFIGFORUPDATINGREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GENERATEDISYNCTASKCONFIGFORUPDATINGREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GenerateDISyncTaskConfigForUpdatingRequest : public RpcServiceRequest {
public:
	GenerateDISyncTaskConfigForUpdatingRequest();
	~GenerateDISyncTaskConfigForUpdatingRequest();
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getTaskParam() const;
	void setTaskParam(const std::string &taskParam);
	long getProjectId() const;
	void setProjectId(long projectId);
	long getTaskId() const;
	void setTaskId(long taskId);

private:
	std::string taskType_;
	std::string clientToken_;
	std::string taskParam_;
	long projectId_;
	long taskId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GENERATEDISYNCTASKCONFIGFORUPDATINGREQUEST_H_
