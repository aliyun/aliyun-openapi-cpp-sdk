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

#ifndef ALIBABACLOUD_MTS_MODEL_SEARCHWATERMARKTEMPLATERESULT_H_
#define ALIBABACLOUD_MTS_MODEL_SEARCHWATERMARKTEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT SearchWaterMarkTemplateResult : public ServiceResult
			{
			public:
				struct WaterMarkTemplate
				{
					struct RatioRefer
					{
						std::string dx;
						std::string dy;
						std::string height;
						std::string width;
					};
					struct Timeline
					{
						std::string start;
						std::string duration;
					};
					RatioRefer ratioRefer;
					Timeline timeline;
					std::string type;
					std::string dx;
					std::string dy;
					std::string state;
					std::string height;
					std::string id;
					std::string referPos;
					std::string width;
					std::string name;
				};


				SearchWaterMarkTemplateResult();
				explicit SearchWaterMarkTemplateResult(const std::string &payload);
				~SearchWaterMarkTemplateResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNumber()const;
				std::vector<WaterMarkTemplate> getWaterMarkTemplateList()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNumber_;
				std::vector<WaterMarkTemplate> waterMarkTemplateList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_SEARCHWATERMARKTEMPLATERESULT_H_