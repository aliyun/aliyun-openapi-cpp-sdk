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

#ifndef ALIBABACLOUD_DCDN_MODEL_UPDATEDCDNDELIVERTASKREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_UPDATEDCDNDELIVERTASKREQUEST_H_

#include <alibabacloud/dcdn/DcdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dcdn {
namespace Model {
class ALIBABACLOUD_DCDN_EXPORT UpdateDcdnDeliverTaskRequest : public RpcServiceRequest {
public:
	UpdateDcdnDeliverTaskRequest();
	~UpdateDcdnDeliverTaskRequest();
	std::string getReports() const;
	void setReports(const std::string &reports);
	std::string getSchedule() const;
	void setSchedule(const std::string &schedule);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	std::string getDeliver() const;
	void setDeliver(const std::string &deliver);
	long getDeliverId() const;
	void setDeliverId(long deliverId);

private:
	std::string reports_;
	std::string schedule_;
	std::string name_;
	std::string domainName_;
	std::string deliver_;
	long deliverId_;
};
} // namespace Model
} // namespace Dcdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DCDN_MODEL_UPDATEDCDNDELIVERTASKREQUEST_H_
