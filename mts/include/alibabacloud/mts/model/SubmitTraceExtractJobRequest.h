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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITTRACEEXTRACTJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITTRACEEXTRACTJOBREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT SubmitTraceExtractJobRequest : public RpcServiceRequest {
public:
	SubmitTraceExtractJobRequest();
	~SubmitTraceExtractJobRequest();
	std::string getParams() const;
	void setParams(const std::string &params);
	std::string getUrl() const;
	void setUrl(const std::string &url);
	std::string getInput() const;
	void setInput(const std::string &input);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getCallBack() const;
	void setCallBack(const std::string &callBack);

private:
	std::string params_;
	std::string url_;
	std::string input_;
	std::string userData_;
	std::string callBack_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITTRACEEXTRACTJOBREQUEST_H_
