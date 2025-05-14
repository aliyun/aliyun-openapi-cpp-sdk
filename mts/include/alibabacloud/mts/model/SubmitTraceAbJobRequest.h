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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITTRACEABJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITTRACEABJOBREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT SubmitTraceAbJobRequest : public RpcServiceRequest {
public:
	SubmitTraceAbJobRequest();
	~SubmitTraceAbJobRequest();
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getOutput() const;
	void setOutput(const std::string &output);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getCipherBase64ed() const;
	void setCipherBase64ed(const std::string &cipherBase64ed);
	long getLevel() const;
	void setLevel(long level);
	std::string getUrl() const;
	void setUrl(const std::string &url);
	std::string getInput() const;
	void setInput(const std::string &input);
	long getTotalTime() const;
	void setTotalTime(long totalTime);
	std::string getCallBack() const;
	void setCallBack(const std::string &callBack);

private:
	long startTime_;
	std::string output_;
	std::string userData_;
	std::string cipherBase64ed_;
	long level_;
	std::string url_;
	std::string input_;
	long totalTime_;
	std::string callBack_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITTRACEABJOBREQUEST_H_
