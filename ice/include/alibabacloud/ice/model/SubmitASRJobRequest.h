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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITASRJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITASRJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitASRJobRequest : public RpcServiceRequest {
public:
	SubmitASRJobRequest();
	~SubmitASRJobRequest();
	std::string getInputFile() const;
	void setInputFile(const std::string &inputFile);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getDuration() const;
	void setDuration(const std::string &duration);
	std::string getUserData() const;
	void setUserData(const std::string &userData);

private:
	std::string inputFile_;
	std::string description_;
	std::string startTime_;
	std::string title_;
	std::string duration_;
	std::string userData_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITASRJOBREQUEST_H_
