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

#ifndef ALIBABACLOUD_IMAGEPROCESS_MODEL_PREDICTCVDRESULT_H_
#define ALIBABACLOUD_IMAGEPROCESS_MODEL_PREDICTCVDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imageprocess/ImageprocessExport.h>

namespace AlibabaCloud
{
	namespace Imageprocess
	{
		namespace Model
		{
			class ALIBABACLOUD_IMAGEPROCESS_EXPORT PredictCVDResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Lesion
					{
						struct FeatureScore
						{
							std::vector<std::string> eatHUSTD;
							std::vector<std::string> coronaryCalciumScore;
							std::vector<std::string> rightLungLowattRatio;
							std::vector<std::string> ascendAortaLength;
							std::vector<std::string> myoEpiRatio;
							std::vector<std::string> eatHUMean;
							std::vector<std::string> leftLungLowattRatio;
							std::vector<std::string> ascAoMaxDiam;
							std::vector<std::string> eatVolume;
							std::vector<std::string> coronaryCalciumVol;
							std::vector<std::string> cardioThoracicRatio;
							std::vector<std::string> deepFeature;
							std::vector<std::string> aortaCalciumScore;
							std::vector<std::string> aortaCalciumVolume;
						};
						FeatureScore featureScore;
						float cVDProbability;
						std::vector<std::string> resultURL;
					};
					Lesion lesion;
				};


				PredictCVDResult();
				explicit PredictCVDResult(const std::string &payload);
				~PredictCVDResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMAGEPROCESS_MODEL_PREDICTCVDRESULT_H_