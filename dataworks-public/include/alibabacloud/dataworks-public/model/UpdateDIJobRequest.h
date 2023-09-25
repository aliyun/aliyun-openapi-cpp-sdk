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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEDIJOBREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEDIJOBREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateDIJobRequest : public RpcServiceRequest {
public:
	UpdateDIJobRequest();
	~UpdateDIJobRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTransformationRules() const;
	void setTransformationRules(const std::string &transformationRules);
	long getDIJobId() const;
	void setDIJobId(long dIJobId);
	std::string getResourceSettings() const;
	void setResourceSettings(const std::string &resourceSettings);
	std::string getTableMappings() const;
	void setTableMappings(const std::string &tableMappings);
	std::string getJobSettings() const;
	void setJobSettings(const std::string &jobSettings);

private:
	std::string description_;
	std::string transformationRules_;
	long dIJobId_;
	std::string resourceSettings_;
	std::string tableMappings_;
	std::string jobSettings_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEDIJOBREQUEST_H_
