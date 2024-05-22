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

#ifndef ALIBABACLOUD_ENS_MODEL_RESCALEAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_RESCALEAPPLICATIONREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT RescaleApplicationRequest : public RpcServiceRequest {
public:
	RescaleApplicationRequest();
	~RescaleApplicationRequest();
	std::string getRescaleType() const;
	void setRescaleType(const std::string &rescaleType);
	std::string getResourceSelector() const;
	void setResourceSelector(const std::string &resourceSelector);
	int getTimeout() const;
	void setTimeout(int timeout);
	std::string getRescaleLevel() const;
	void setRescaleLevel(const std::string &rescaleLevel);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getToAppVersion() const;
	void setToAppVersion(const std::string &toAppVersion);

private:
	std::string rescaleType_;
	std::string resourceSelector_;
	int timeout_;
	std::string rescaleLevel_;
	std::string appId_;
	std::string toAppVersion_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_RESCALEAPPLICATIONREQUEST_H_
