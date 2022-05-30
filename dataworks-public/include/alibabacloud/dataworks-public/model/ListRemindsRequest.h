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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTREMINDSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTREMINDSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListRemindsRequest : public RpcServiceRequest {
public:
	ListRemindsRequest();
	~ListRemindsRequest();
	std::string getSearchText() const;
	void setSearchText(const std::string &searchText);
	std::string getFounder() const;
	void setFounder(const std::string &founder);
	std::string getRemindTypes() const;
	void setRemindTypes(const std::string &remindTypes);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAlertTarget() const;
	void setAlertTarget(const std::string &alertTarget);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getNodeId() const;
	void setNodeId(long nodeId);

private:
	std::string searchText_;
	std::string founder_;
	std::string remindTypes_;
	int pageNumber_;
	std::string alertTarget_;
	int pageSize_;
	long nodeId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTREMINDSREQUEST_H_
