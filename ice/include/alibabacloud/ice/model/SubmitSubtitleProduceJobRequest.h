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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITSUBTITLEPRODUCEJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITSUBTITLEPRODUCEJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitSubtitleProduceJobRequest : public RpcServiceRequest {
public:
	SubmitSubtitleProduceJobRequest();
	~SubmitSubtitleProduceJobRequest();
	std::string getOutputConfig() const;
	void setOutputConfig(const std::string &outputConfig);
	std::string getEditingConfig() const;
	void setEditingConfig(const std::string &editingConfig);
	std::string getInputConfig() const;
	void setInputConfig(const std::string &inputConfig);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	long getIsAsync() const;
	void setIsAsync(long isAsync);

private:
	std::string outputConfig_;
	std::string editingConfig_;
	std::string inputConfig_;
	std::string description_;
	std::string type_;
	std::string title_;
	std::string userData_;
	long isAsync_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITSUBTITLEPRODUCEJOBREQUEST_H_
