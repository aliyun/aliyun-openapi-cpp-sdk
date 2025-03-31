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

#ifndef ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEAUTOMATERESPONSECONFIGPLAYBOOKSREQUEST_H_
#define ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEAUTOMATERESPONSECONFIGPLAYBOOKSREQUEST_H_

#include <alibabacloud/cloud-siem/Cloud_siemExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloud_siem {
namespace Model {
class ALIBABACLOUD_CLOUD_SIEM_EXPORT DescribeAutomateResponseConfigPlayBooksRequest : public RpcServiceRequest {
public:
	DescribeAutomateResponseConfigPlayBooksRequest();
	~DescribeAutomateResponseConfigPlayBooksRequest();
	long getRoleFor() const;
	void setRoleFor(long roleFor);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAutoResponseType() const;
	void setAutoResponseType(const std::string &autoResponseType);
	int getRoleType() const;
	void setRoleType(int roleType);
	std::string getEntityType() const;
	void setEntityType(const std::string &entityType);

private:
	long roleFor_;
	std::string regionId_;
	std::string autoResponseType_;
	int roleType_;
	std::string entityType_;
};
} // namespace Model
} // namespace Cloud_siem
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUD_SIEM_MODEL_DESCRIBEAUTOMATERESPONSECONFIGPLAYBOOKSREQUEST_H_
