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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTHISTORYTASKSFORRESOURCEGROUPREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTHISTORYTASKSFORRESOURCEGROUPREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListHistoryTasksForResourceGroupRequest : public RpcServiceRequest {
public:
	ListHistoryTasksForResourceGroupRequest();
	~ListHistoryTasksForResourceGroupRequest();
	std::string getProjectEnv() const;
	void setProjectEnv(const std::string &projectEnv);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getResourceGroupIdentifier() const;
	void setResourceGroupIdentifier(const std::string &resourceGroupIdentifier);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);

private:
	std::string projectEnv_;
	int pageSize_;
	long endTime_;
	std::string resourceGroupIdentifier_;
	long startTime_;
	int pageNumber_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTHISTORYTASKSFORRESOURCEGROUPREQUEST_H_
