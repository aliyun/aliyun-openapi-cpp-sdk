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

#ifndef ALIBABACLOUD_DTS_MODEL_SKIPPRECHECKREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_SKIPPRECHECKREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT SkipPreCheckRequest : public RpcServiceRequest {
public:
	SkipPreCheckRequest();
	~SkipPreCheckRequest();
	bool getSkip() const;
	void setSkip(bool skip);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSkipPreCheckNames() const;
	void setSkipPreCheckNames(const std::string &skipPreCheckNames);
	std::string getDtsJobId() const;
	void setDtsJobId(const std::string &dtsJobId);
	std::string getSkipPreCheckItems() const;
	void setSkipPreCheckItems(const std::string &skipPreCheckItems);

private:
	bool skip_;
	std::string jobId_;
	std::string regionId_;
	std::string skipPreCheckNames_;
	std::string dtsJobId_;
	std::string skipPreCheckItems_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_SKIPPRECHECKREQUEST_H_
