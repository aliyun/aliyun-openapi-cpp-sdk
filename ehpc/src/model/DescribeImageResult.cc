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

#include <alibabacloud/ehpc/model/DescribeImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeImageResult::DescribeImageResult() :
	ServiceResult()
{}

DescribeImageResult::DescribeImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageResult::~DescribeImageResult()
{}

void DescribeImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto imageInfoNode = value["ImageInfo"];
	if(!imageInfoNode["Type"].isNull())
		imageInfo_.type = imageInfoNode["Type"].asString();
	if(!imageInfoNode["Status"].isNull())
		imageInfo_.status = imageInfoNode["Status"].asString();
	if(!imageInfoNode["UpdateDateTime"].isNull())
		imageInfo_.updateDateTime = imageInfoNode["UpdateDateTime"].asString();
	if(!imageInfoNode["Repository"].isNull())
		imageInfo_.repository = imageInfoNode["Repository"].asString();
	if(!imageInfoNode["Tag"].isNull())
		imageInfo_.tag = imageInfoNode["Tag"].asString();
	if(!imageInfoNode["System"].isNull())
		imageInfo_.system = imageInfoNode["System"].asString();
	if(!imageInfoNode["ImageId"].isNull())
		imageInfo_.imageId = imageInfoNode["ImageId"].asString();

}

DescribeImageResult::ImageInfo DescribeImageResult::getImageInfo()const
{
	return imageInfo_;
}

