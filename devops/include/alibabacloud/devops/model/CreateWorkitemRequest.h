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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKITEMREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKITEMREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT CreateWorkitemRequest : public RoaServiceRequest {
public:
	struct Body {
		std::string parent;
		std::string subject;
		std::string string;
		std::vector<std::string> sprint;
		std::string description;
		std::string assignedTo;
		std::string space;
		std::string string;
		std::vector<std::string> participant;
		struct FieldValueListItem {
			std::string fieldIdentifier;
			std::string workitemIdentifier;
			std::string value;
		};
		fieldValueListItem fieldValueListItem;
		std::vector<fieldValueListItem> fieldValueList;
		std::string spaceType;
		std::string workitemType;
		std::string string;
		std::vector<std::string> verifier;
		std::string string;
		std::vector<std::string> tracker;
		std::string descriptionFormat;
		std::string spaceIdentifier;
		std::string category;
	};
	CreateWorkitemRequest();
	~CreateWorkitemRequest();
	body getBody() const;
	void setBody(const body &body);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);

private:
	body body_;
	std::string organizationId_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_CREATEWORKITEMREQUEST_H_
