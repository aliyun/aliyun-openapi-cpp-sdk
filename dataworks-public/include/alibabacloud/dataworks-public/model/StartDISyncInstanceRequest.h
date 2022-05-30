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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_STARTDISYNCINSTANCEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_STARTDISYNCINSTANCEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT StartDISyncInstanceRequest : public RpcServiceRequest {
public:
	StartDISyncInstanceRequest();
	~StartDISyncInstanceRequest();
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	std::string getStartParam() const;
	void setStartParam(const std::string &startParam);
	long getProjectId() const;
	void setProjectId(long projectId);
	long getFileId() const;
	void setFileId(long fileId);

private:
	std::string taskType_;
	std::string startParam_;
	long projectId_;
	long fileId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_STARTDISYNCINSTANCEREQUEST_H_
