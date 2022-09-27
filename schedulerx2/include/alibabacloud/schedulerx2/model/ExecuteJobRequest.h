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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_EXECUTEJOBREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_EXECUTEJOBREQUEST_H_

#include <alibabacloud/schedulerx2/Schedulerx2Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Schedulerx2 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX2_EXPORT ExecuteJobRequest : public RpcServiceRequest {
public:
	ExecuteJobRequest();
	~ExecuteJobRequest();
	std::string getNamespaceSource() const;
	void setNamespaceSource(const std::string &namespaceSource);
	bool getCheckJobStatus() const;
	void setCheckJobStatus(bool checkJobStatus);
	int getDesignateType() const;
	void setDesignateType(int designateType);
	long getJobId() const;
	void setJobId(long jobId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getWorker() const;
	void setWorker(const std::string &worker);
	std::string getInstanceParameters() const;
	void setInstanceParameters(const std::string &instanceParameters);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getLabel() const;
	void setLabel(const std::string &label);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);

private:
	std::string namespaceSource_;
	bool checkJobStatus_;
	int designateType_;
	long jobId_;
	std::string regionId_;
	std::string worker_;
	std::string instanceParameters_;
	std::string groupId_;
	std::string label_;
	std::string _namespace_;
};
} // namespace Model
} // namespace Schedulerx2
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_EXECUTEJOBREQUEST_H_
