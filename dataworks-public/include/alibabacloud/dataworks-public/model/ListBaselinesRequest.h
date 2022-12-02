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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTBASELINESREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTBASELINESREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListBaselinesRequest : public RpcServiceRequest {
public:
	ListBaselinesRequest();
	~ListBaselinesRequest();
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getSearchText() const;
	void setSearchText(const std::string &searchText);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	bool getEnable() const;
	void setEnable(bool enable);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getBaselineTypes() const;
	void setBaselineTypes(const std::string &baselineTypes);

private:
	std::string owner_;
	std::string searchText_;
	std::string priority_;
	int pageNumber_;
	bool enable_;
	int pageSize_;
	long projectId_;
	std::string baselineTypes_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTBASELINESREQUEST_H_
