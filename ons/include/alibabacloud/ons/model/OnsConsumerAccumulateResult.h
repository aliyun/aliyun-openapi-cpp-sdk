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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSCONSUMERACCUMULATERESULT_H_
#define ALIBABACLOUD_ONS_MODEL_ONSCONSUMERACCUMULATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ons/OnsExport.h>

namespace AlibabaCloud
{
	namespace Ons
	{
		namespace Model
		{
			class ALIBABACLOUD_ONS_EXPORT OnsConsumerAccumulateResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct DetailInTopicDo
					{
						long lastTimestamp;
						long totalDiff;
						long delayTime;
						std::string topic;
					};
					float consumeTps;
					long lastTimestamp;
					long totalDiff;
					long delayTime;
					bool online;
					std::vector<DetailInTopicDo> detailInTopicList;
				};


				OnsConsumerAccumulateResult();
				explicit OnsConsumerAccumulateResult(const std::string &payload);
				~OnsConsumerAccumulateResult();
				Data getData()const;
				std::string getHelpUrl()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string helpUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSCONSUMERACCUMULATERESULT_H_