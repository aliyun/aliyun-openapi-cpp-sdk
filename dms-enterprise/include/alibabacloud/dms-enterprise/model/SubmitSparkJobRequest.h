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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SUBMITSPARKJOBREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SUBMITSPARKJOBREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT SubmitSparkJobRequest : public RpcServiceRequest {
public:
	struct OssInfo {
		std::string endpoint;
		std::string accessKeySecret;
		std::string accessKeyId;
	};
	SubmitSparkJobRequest();
	~SubmitSparkJobRequest();
	std::string getMainClass() const;
	void setMainClass(const std::string &mainClass);
	std::map<std::string, std::string> getConfiguration() const;
	void setConfiguration(const std::map<std::string, std::string> &configuration);
	OssInfo getOssInfo() const;
	void setOssInfo(const OssInfo &ossInfo);
	long getTid() const;
	void setTid(long tid);
	std::string getMainFile() const;
	void setMainFile(const std::string &mainFile);
	std::string getName() const;
	void setName(const std::string &name);
	std::vector<std::string> getFiles() const;
	void setFiles(const std::vector<std::string> &files);
	std::string getAppCode() const;
	void setAppCode(const std::string &appCode);
	std::vector<std::string> getArguments() const;
	void setArguments(const std::vector<std::string> &arguments);

private:
	std::string mainClass_;
	std::map<std::string, std::string> configuration_;
	OssInfo ossInfo_;
	long tid_;
	std::string mainFile_;
	std::string name_;
	std::vector<std::string> files_;
	std::string appCode_;
	std::vector<std::string> arguments_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_SUBMITSPARKJOBREQUEST_H_
