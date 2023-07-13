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

#ifndef ALIBABACLOUD_MSE_MODEL_UNTAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UNTAGRESOURCESREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UntagResourcesRequest : public RpcServiceRequest {
public:
	UntagResourcesRequest();
	~UntagResourcesRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getAll() const;
	void setAll(bool all);
	std::vector<std::string> getResourceId() const;
	void setResourceId(const std::vector<std::string> &resourceId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::vector<std::string> getTagKey() const;
	void setTagKey(const std::vector<std::string> &tagKey);

private:
	std::string mseSessionId_;
	std::string regionId_;
	bool all_;
	std::vector<std::string> resourceId_;
	std::string resourceType_;
	std::string acceptLanguage_;
	std::vector<std::string> tagKey_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UNTAGRESOURCESREQUEST_H_
