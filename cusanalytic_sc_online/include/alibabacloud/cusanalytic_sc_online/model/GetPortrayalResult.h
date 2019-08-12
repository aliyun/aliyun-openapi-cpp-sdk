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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETPORTRAYALRESULT_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETPORTRAYALRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cusanalytic_sc_online/Cusanalytic_sc_onlineExport.h>

namespace AlibabaCloud
{
	namespace Cusanalytic_sc_online
	{
		namespace Model
		{
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT GetPortrayalResult : public ServiceResult
			{
			public:


				GetPortrayalResult();
				explicit GetPortrayalResult(const std::string &payload);
				~GetPortrayalResult();
				long getOldcount()const;
				float getAgecount5160Percent()const;
				long getFcount5160()const;
				long getMcount010()const;
				float getMalePercent()const;
				long getFcount()const;
				float getAgecount3140Percent()const;
				float getNewcountPercent()const;
				long getMcount1120()const;
				long getFcountgt60()const;
				long getMcount5160()const;
				long getMcount4150()const;
				float getAgecount010Percent()const;
				long getMcount3140()const;
				long getNewcount()const;
				long getMcount2130()const;
				float getAgecount4150Percent()const;
				float getAgecountgt60Percent()const;
				float getFemalePercent()const;
				float getAgecount1120Percent()const;
				long getMcount()const;
				float getOldcountPercent()const;
				long getFcount010()const;
				long getFcount1120()const;
				long getFcount2130()const;
				long getFcount3140()const;
				long getFcount4150()const;
				long getMcountgt60()const;
				float getAgecount2130Percent()const;

			protected:
				void parse(const std::string &payload);
			private:
				long oldcount_;
				float agecount5160Percent_;
				long fcount5160_;
				long mcount010_;
				float malePercent_;
				long fcount_;
				float agecount3140Percent_;
				float newcountPercent_;
				long mcount1120_;
				long fcountgt60_;
				long mcount5160_;
				long mcount4150_;
				float agecount010Percent_;
				long mcount3140_;
				long newcount_;
				long mcount2130_;
				float agecount4150Percent_;
				float agecountgt60Percent_;
				float femalePercent_;
				float agecount1120Percent_;
				long mcount_;
				float oldcountPercent_;
				long fcount010_;
				long fcount1120_;
				long fcount2130_;
				long fcount3140_;
				long fcount4150_;
				long mcountgt60_;
				float agecount2130Percent_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETPORTRAYALRESULT_H_