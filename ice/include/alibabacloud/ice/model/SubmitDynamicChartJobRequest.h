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

#ifndef ALIBABACLOUD_ICE_MODEL_SUBMITDYNAMICCHARTJOBREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_SUBMITDYNAMICCHARTJOBREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT SubmitDynamicChartJobRequest : public RpcServiceRequest {
public:
	SubmitDynamicChartJobRequest();
	~SubmitDynamicChartJobRequest();
	std::string getOutputConfig() const;
	void setOutputConfig(const std::string &outputConfig);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getChartType() const;
	void setChartType(const std::string &chartType);
	std::string getChartTitle() const;
	void setChartTitle(const std::string &chartTitle);
	std::string getChartConfig() const;
	void setChartConfig(const std::string &chartConfig);
	std::string getInput() const;
	void setInput(const std::string &input);
	std::string getUnit() const;
	void setUnit(const std::string &unit);
	std::string getDataSource() const;
	void setDataSource(const std::string &dataSource);
	std::string getBackground() const;
	void setBackground(const std::string &background);
	std::string getSubtitle() const;
	void setSubtitle(const std::string &subtitle);
	std::string getAxisParams() const;
	void setAxisParams(const std::string &axisParams);

private:
	std::string outputConfig_;
	std::string description_;
	std::string title_;
	std::string userData_;
	std::string chartType_;
	std::string chartTitle_;
	std::string chartConfig_;
	std::string input_;
	std::string unit_;
	std::string dataSource_;
	std::string background_;
	std::string subtitle_;
	std::string axisParams_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_SUBMITDYNAMICCHARTJOBREQUEST_H_
