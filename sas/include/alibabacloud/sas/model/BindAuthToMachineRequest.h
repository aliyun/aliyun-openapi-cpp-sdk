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

#ifndef ALIBABACLOUD_SAS_MODEL_BINDAUTHTOMACHINEREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_BINDAUTHTOMACHINEREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT BindAuthToMachineRequest : public RpcServiceRequest {
public:
	BindAuthToMachineRequest();
	~BindAuthToMachineRequest();
	std::string getCriteria() const;
	void setCriteria(const std::string &criteria);
	bool getBindAll() const;
	void setBindAll(bool bindAll);
	std::vector<std::string> getBind() const;
	void setBind(const std::vector<std::string> &bind);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getAuthVersion() const;
	void setAuthVersion(int authVersion);
	std::string getLogicalExp() const;
	void setLogicalExp(const std::string &logicalExp);
	int getAutoBind() const;
	void setAutoBind(int autoBind);
	std::vector<std::string> getUnBind() const;
	void setUnBind(const std::vector<std::string> &unBind);

private:
	std::string criteria_;
	bool bindAll_;
	std::vector<std::string> bind_;
	std::string sourceIp_;
	int authVersion_;
	std::string logicalExp_;
	int autoBind_;
	std::vector<std::string> unBind_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_BINDAUTHTOMACHINEREQUEST_H_
