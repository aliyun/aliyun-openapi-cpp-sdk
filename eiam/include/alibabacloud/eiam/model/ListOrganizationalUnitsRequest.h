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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTORGANIZATIONALUNITSREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTORGANIZATIONALUNITSREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT ListOrganizationalUnitsRequest : public RpcServiceRequest {
public:
	ListOrganizationalUnitsRequest();
	~ListOrganizationalUnitsRequest();
	std::string getOrganizationalUnitNameStartsWith() const;
	void setOrganizationalUnitNameStartsWith(const std::string &organizationalUnitNameStartsWith);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getParentId() const;
	void setParentId(const std::string &parentId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::vector<std::string> getOrganizationalUnitIds() const;
	void setOrganizationalUnitIds(const std::vector<std::string> &organizationalUnitIds);
	std::string getOrganizationalUnitName() const;
	void setOrganizationalUnitName(const std::string &organizationalUnitName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string organizationalUnitNameStartsWith_;
	long pageNumber_;
	std::string parentId_;
	long pageSize_;
	std::vector<std::string> organizationalUnitIds_;
	std::string organizationalUnitName_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTORGANIZATIONALUNITSREQUEST_H_
