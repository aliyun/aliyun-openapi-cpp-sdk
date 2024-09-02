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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBERESTORABLETENANTSREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBERESTORABLETENANTSREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeRestorableTenantsRequest : public RpcServiceRequest {
public:
	DescribeRestorableTenantsRequest();
	~DescribeRestorableTenantsRequest();
	std::string getRestoreMode() const;
	void setRestoreMode(const std::string &restoreMode);
	std::string getRestoreObjectType() const;
	void setRestoreObjectType(const std::string &restoreObjectType);
	bool getIsOnline() const;
	void setIsOnline(bool isOnline);
	bool getIsRemote() const;
	void setIsRemote(bool isRemote);
	std::string getMethod() const;
	void setMethod(const std::string &method);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSetId() const;
	void setSetId(const std::string &setId);

private:
	std::string restoreMode_;
	std::string restoreObjectType_;
	bool isOnline_;
	bool isRemote_;
	std::string method_;
	std::string instanceId_;
	std::string setId_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBERESTORABLETENANTSREQUEST_H_
