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

#ifndef ALIBABACLOUD_SNSUAPI_MODEL_BANDPRECHECKRESULT_H_
#define ALIBABACLOUD_SNSUAPI_MODEL_BANDPRECHECKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/snsuapi/SnsuapiExport.h>

namespace AlibabaCloud
{
	namespace Snsuapi
	{
		namespace Model
		{
			class ALIBABACLOUD_SNSUAPI_EXPORT BandPrecheckResult : public ServiceResult
			{
			public:
				struct ResultModule
				{
					struct BandOfferListItem
					{
						long offerId;
						int bandwidth;
						long duration;
						std::string direction;
					};
					std::vector<BandOfferListItem> bandOfferList;
					long bandId;
					int downloadBandwidth;
					int uploadBandwidth;
				};


				BandPrecheckResult();
				explicit BandPrecheckResult(const std::string &payload);
				~BandPrecheckResult();
				ResultModule getResultModule()const;
				std::string getResultMessage()const;
				std::string getResultCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				ResultModule resultModule_;
				std::string resultMessage_;
				std::string resultCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SNSUAPI_MODEL_BANDPRECHECKRESULT_H_