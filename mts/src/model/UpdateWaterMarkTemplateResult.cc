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

#include <alibabacloud/mts/model/UpdateWaterMarkTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

UpdateWaterMarkTemplateResult::UpdateWaterMarkTemplateResult() :
	ServiceResult()
{}

UpdateWaterMarkTemplateResult::UpdateWaterMarkTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateWaterMarkTemplateResult::~UpdateWaterMarkTemplateResult()
{}

void UpdateWaterMarkTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto waterMarkTemplateNode = value["WaterMarkTemplate"];
	if(!waterMarkTemplateNode["Type"].isNull())
		waterMarkTemplate_.type = waterMarkTemplateNode["Type"].asString();
	if(!waterMarkTemplateNode["ReferPos"].isNull())
		waterMarkTemplate_.referPos = waterMarkTemplateNode["ReferPos"].asString();
	if(!waterMarkTemplateNode["State"].isNull())
		waterMarkTemplate_.state = waterMarkTemplateNode["State"].asString();
	if(!waterMarkTemplateNode["Dx"].isNull())
		waterMarkTemplate_.dx = waterMarkTemplateNode["Dx"].asString();
	if(!waterMarkTemplateNode["Width"].isNull())
		waterMarkTemplate_.width = waterMarkTemplateNode["Width"].asString();
	if(!waterMarkTemplateNode["Height"].isNull())
		waterMarkTemplate_.height = waterMarkTemplateNode["Height"].asString();
	if(!waterMarkTemplateNode["Name"].isNull())
		waterMarkTemplate_.name = waterMarkTemplateNode["Name"].asString();
	if(!waterMarkTemplateNode["Dy"].isNull())
		waterMarkTemplate_.dy = waterMarkTemplateNode["Dy"].asString();
	if(!waterMarkTemplateNode["Id"].isNull())
		waterMarkTemplate_.id = waterMarkTemplateNode["Id"].asString();
	auto ratioReferNode = waterMarkTemplateNode["RatioRefer"];
	if(!ratioReferNode["Dx"].isNull())
		waterMarkTemplate_.ratioRefer.dx = ratioReferNode["Dx"].asString();
	if(!ratioReferNode["Width"].isNull())
		waterMarkTemplate_.ratioRefer.width = ratioReferNode["Width"].asString();
	if(!ratioReferNode["Height"].isNull())
		waterMarkTemplate_.ratioRefer.height = ratioReferNode["Height"].asString();
	if(!ratioReferNode["Dy"].isNull())
		waterMarkTemplate_.ratioRefer.dy = ratioReferNode["Dy"].asString();
	auto timelineNode = waterMarkTemplateNode["Timeline"];
	if(!timelineNode["Start"].isNull())
		waterMarkTemplate_.timeline.start = timelineNode["Start"].asString();
	if(!timelineNode["Duration"].isNull())
		waterMarkTemplate_.timeline.duration = timelineNode["Duration"].asString();

}

UpdateWaterMarkTemplateResult::WaterMarkTemplate UpdateWaterMarkTemplateResult::getWaterMarkTemplate()const
{
	return waterMarkTemplate_;
}

