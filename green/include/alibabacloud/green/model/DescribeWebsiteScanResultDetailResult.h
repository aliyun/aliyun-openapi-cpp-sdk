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

#ifndef ALIBABACLOUD_GREEN_MODEL_DESCRIBEWEBSITESCANRESULTDETAILRESULT_H_
#define ALIBABACLOUD_GREEN_MODEL_DESCRIBEWEBSITESCANRESULTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT DescribeWebsiteScanResultDetailResult : public ServiceResult
			{
			public:
				struct ImageScanResult
				{
					std::vector<std::string> labels;
					std::string url;
				};


				DescribeWebsiteScanResultDetailResult();
				explicit DescribeWebsiteScanResultDetailResult(const std::string &payload);
				~DescribeWebsiteScanResultDetailResult();
				std::vector<std::string> getHitKeywords()const;
				std::vector<ImageScanResult> getImageScanResults()const;
				std::string getContent()const;
				std::string getResourceType()const;
				std::string getBaseline()const;
				std::string getTamperedSource()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> hitKeywords_;
				std::vector<ImageScanResult> imageScanResults_;
				std::string content_;
				std::string resourceType_;
				std::string baseline_;
				std::string tamperedSource_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_DESCRIBEWEBSITESCANRESULTDETAILRESULT_H_